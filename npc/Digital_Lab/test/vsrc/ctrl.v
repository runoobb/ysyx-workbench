module ctrl
	(
	input clk,
	input [3:0] limi
	);
	reg [3:0] counter;
	
	initial begin
		assign counter = limi;
	end
	

	always @(posedge clk)begin
		if(counter > 0)begin
			counter <= counter - 1;
		end
		else begin
			$write("*-* All Finished *-*\n");
			$finish;
		end
	end
	endmodule
