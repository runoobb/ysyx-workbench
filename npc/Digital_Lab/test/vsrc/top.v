module top(
	input a,
	input b,
	input [3:0] limi,
	input clk,
	output reg f
);

	ctrl ctrl(
		.clk			(clk),
		.limi			(limi));
	always @(posedge clk) begin
		f <= a ^ b;
	end

	initial begin
		if ($test$plusargs("trace") != 0) begin
			assign f = a ^ b;
			$dumpfile("logs/vlt_dump.vcd");
			$dumpvars();
		end
	end

endmodule
