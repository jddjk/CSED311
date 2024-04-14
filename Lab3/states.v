`define STATE0 4'b0000 // IF Stage

`define STATE1 4'b0001 // ID Stage

`define STATE2 4'b0010 // LOAD and STORE EX Stage
`define STATE3 4'b0011 // LOAD MEM Stage
`define STATE4 4'b0100 // LOAD WB Stage
`define STATE5 4'b0101 // STORE MEM Stage

`define STATE6 4'b0110 // R-type EX Stage
`define STATE7 4'b0111 // R/I-type WB Stage

`define STATE8 4'b1000 // BRANCH Completion Stage
`define STATE9 4'b1001 // JAL Ex Stage
`define STATE10 4'b1010 // I-type EX Stage
`define STATE11 4'b1011 // IS_HALTED Stage
`define STATE12 4'b1100 // JAL WB Stage
`define STATE13 4'b1101 // JALR WB Stage

`define STATE15 4'b1111 // RESET State


`define IF1 4'b0001
`define IF2 4'b0010
`define IF3 4'b0011
`define IF4 4'b0100
`define ID 4'b0101
`define EX1 4'b0110
`define EX2 4'b0111
`define MEM1 4'b1000
`define MEM2 4'b1001
`define MEM3 4'b1010
`define MEM4 4'b1011
`define WB 4'b1100 
