module prior_decoder (
        input [7:0] eight_channels_in,
        input clk,
        output reg [2:0] three_channels_out
);

always@(posedge clk)
begin
casez(eight_channels_in)
        8'b1???????:three_channels_out <= 7;
        8'b01??????:three_channels_out <= 6;
        8'b001?????:three_channels_out <= 5;
        8'b0001????:three_channels_out <= 4;
        8'b00001???:three_channels_out <= 3;
        8'b000001??:three_channels_out <= 2;
        8'b0000001?:three_channels_out <= 1;
        8'b00000001:three_channels_out <= 0;
        default: three_channels_out <= 0;
endcase

end

endmodule

