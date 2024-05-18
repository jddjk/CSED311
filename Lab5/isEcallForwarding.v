module isEcallForwarding(
    input [31:0] instruction_id_ex,
    input [31:0] instruction_ex_mem,
    input [31:0] instruction_mem_wb,
    input [31:0] EX_MEM_alu_out,
    output reg isecallForward

);
    wire [6:0]opcode_id_ex = instruction_id_ex[6:0];
    wire [4:0] rs1_id_ex = instruction_id_ex[19:15];
    wire [4:0] rs2_id_ex = instruction_id_ex[24:20];
    wire [4:0] rd_ex_mem = instruction_ex_mem[11:7];
    wire [4:0] rd_mem_wb = instruction_mem_wb[11:7];

always @(*) begin
        if (opcode_id_ex == `ECALL) begin
            if (17 == rd_ex_mem && EX_MEM_alu_out==10) begin
                isecallForward = 1;
      
        end else isecallForward=0;
        end else isecallForward=0;




end

endmodule
