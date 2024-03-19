module alu_control_unit(
    input [31:0] instruction,
    output reg[3:0] alu_op
);
    wire [6:0] opcode = instruction[6:0];
    wire [2:0] funct3 = instruction[14:12];
    wire [6:0] funct7 = instruction[31:25];

    always@(*) begin
        case(opcode)
            7'b0110011: begin //R-type
                case(funct3)
                    3'b000: begin
                    end
                    3'b001: alu_op
                endcase
            end
            7'b0010011: begin //I-type
                case(funct3)

                endcase
            end
        endcase
    end

endmodule
