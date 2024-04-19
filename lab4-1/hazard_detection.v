`include "opcodes.v"

module hazard_detection (
    input [31:0] current_inst,

    input [4:0] ID_EX_rd,
    input ID_EX_reg_write,
    input ID_EX_mem_read,
    input ID_EX_mem_write,

    input [4:0] EX_MEM_rd,
    input EX_MEM_reg_write,


    output reg isStall
    );

    wire [6:0] opcode;   
    wire [4:0] rs1;   
    wire [4:0] rs2;         
    assign opcode=current_inst[6:0];
    assign rs1=current_inst[19:15];
    assign rs2=current_inst[24:20];
    

    always @(*) begin
        isStall = 0; 
        
        if (opcode == `ECALL) begin
            if (ID_EX_rd == 17 && ID_EX_reg_write) begin
                isStall = 1; //ecall이라서 isStall at ID_EX
                
            end else if (EX_MEM_rd == 17 && EX_MEM_reg_write) begin
                isStall = 1; //ecall이라서 isStall at EX_MEM
            end else begin
                isStall = 0;
            end
        end

        
        //SW rs2, offset(rs1)
        if(opcode==`STORE)begin
           
            //hazard at rs1
            if(rs1 == ID_EX_rd && ID_EX_rd != 0) begin  
                //$display("store, rs1 "); //! DEBUGGING        
                isStall=1;
            end

            if(rs1 == EX_MEM_rd && EX_MEM_rd != 0) begin
                //$display("store, rs1*2 "); //! DEBUGGING
                isStall=1;
            end

            //hazard at rs2
            if(rs2 == ID_EX_rd && ID_EX_rd != 0) begin
                //$display("store, rs2 "); //! DEBUGGING
                isStall=1;
            end
            if(rs2 == EX_MEM_rd && EX_MEM_rd != 0) begin
                //$display("store, rs2*2 "); //! DEBUGGING
                isStall=1;
            end
        end


        //LW rd, offset(rs1)
        if(opcode==`LOAD)begin
           
            //hazard at rs1
            if(rs1 == ID_EX_rd && ID_EX_rd != 0) begin  
                //$display("load, rs1 "); //! DEBUGGING        
                isStall=1;
            end
            if(rs1 == EX_MEM_rd && EX_MEM_rd != 0) begin  
                //$display("load, rs1*2 "); //! DEBUGGING        
                isStall=1;
            end
        end          

        //ARITHMETIC
        if(opcode==`ARITHMETIC)begin
           
            //hazard at rs1
            if(rs1 == ID_EX_rd && ID_EX_rd != 0) begin  
                //$display("ar, rs1 "); //! DEBUGGING        
                isStall=1;
            end
            if(rs1 == EX_MEM_rd && EX_MEM_rd != 0) begin  
                //$display("ar, rs1*2 "); //! DEBUGGING        
                isStall=1;
            end

            //hazard at rs2
            if(rs2 == ID_EX_rd && ID_EX_rd != 0) begin
                //$display("ar, rs2 "); //! DEBUGGING
                isStall=1;
            end
            if(rs2 == EX_MEM_rd && EX_MEM_rd != 0) begin
                //$display("ar, rs2*2 "); //! DEBUGGING
                isStall=1;
            end

        end         
        
        //ARITHMETIC_IMM
        if(opcode==`ARITHMETIC_IMM)begin
           
            //hazard at rs1
            if(rs1 == ID_EX_rd && ID_EX_rd != 0) begin  
                //$display("load, rs1 "); //! DEBUGGING        
                isStall=1;
            end
            if(rs1 == EX_MEM_rd && EX_MEM_rd != 0) begin  
                //$display("load, rs1*2 "); //! DEBUGGING        
                isStall=1;
            end
        end      

               /*     // Check Hazard for rs1
        if (current_inst[6:0] == `ARITHMETIC || current_inst[6:0] == `ARITHMETIC_IMM || current_inst[6:0] == `LOAD || current_inst[6:0] == `STORE) begin
            if (current_inst[19:15] == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read) begin
                isStall = 1;
            end else begin
                isStall = 0;
            end
        end

        // Check Hazard for rs2
        if ((current_inst[6:0] == `ARITHMETIC || current_inst[6:0] == `LOAD || current_inst[6:0] == `STORE) && isStall == 0) begin
            if (current_inst[24:20] == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read) begin
                isStall = 1;
            end else begin
                isStall = 0;
            end
        end*/
        


/*
        // Check Hazard for rs1
        //LW rd, offset(rs1)
        if (opcode == `ARITHMETIC || opcode == `ARITHMETIC_IMM || opcode == `LOAD || opcode == `STORE) begin
            if (rs1 == ID_EX_rd && ID_EX_rd != 0 ||rs1 == EX_MEM_rd && EX_MEM_rd != 0) begin
                $display("stall, rs1 "); //! DEBUGGING
                isStall = 1;
            end else begin
                isStall = 0;
            end
        end

        // Check Hazard for rs2
        //SW rs2, offset(rs1)
        if ((opcode == `ARITHMETIC || opcode == `LOAD || opcode == `STORE) && isStall == 0) begin
            if (rs2 == ID_EX_rd && ID_EX_rd != 0 && ID_EX_mem_read) begin
                $display("stall, rs2"); //! DEBUGGING
                isStall = 1;
            end else begin
                isStall = 0;
            end
        end*/
        
    end

endmodule

