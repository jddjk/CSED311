module RsEcallHandler (
    input is_ecall,
    input [4:0] rs1,
    output [4:0] rs1_halt_considered
);
    assign rs1_halt_considered = is_ecall ? 5'd17 : rs1;
endmodule
