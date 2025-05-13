// Code your testbench here
// or browse Examples
// Code your testbench here
// or browse Examples
`timescale 1ns/100ps

module testbench();
    reg [3:0] A_in;      // 4-bit input A
    reg [3:0] B_in;      // 4-bit input B
    wire C;              // Carry output
    wire [3:0] SUM;      // 4-bit sum output
    
    // Instantiate the ripple carry adder
    bit_4_adder dut(
        .C_out(C),
        .SUM(SUM),
        .A(A_in),         // Connect input A
        .B(B_in)          // Connect input B
    );

    initial begin
        $dumpfile("q1.vcd");
        $dumpvars(0, testbench);
    end

    initial begin
        $monitor("Time = %0d ns: A_in = %b, B_in = %b, SUM = %b, Carry = %b", $time, A_in, B_in, SUM, C);
        
        // Test cases
        // Case 1: A = 11, B = 5
        A_in = 4'b1001;     // Binary representation of 9
        B_in = 4'b0111;     // Binary representation of 5
        #50;

        // Case 2: A = 3, B = 12
        A_in = 4'b0011;     // Binary representation of 3
        B_in = 4'b1110;     // Binary representation of 12
        #50;

        // Case 3: A = 7, B = 8
        A_in = 4'b0111;     // Binary representation of 7
        B_in = 4'b1000;     // Binary representation of 8
        #50;

        $finish;
    end
endmodule