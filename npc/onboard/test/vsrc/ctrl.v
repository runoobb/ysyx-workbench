module ctrl(
    input sig_a,
    input sig_b,
    output sig_out
);

assign sig_out = sig_a && sig_b;

endmodule
