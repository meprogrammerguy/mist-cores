--Copyright (C) 1991-2005 Altera Corporation
--Your use of Altera Corporation's design tools, logic functions 
--and other software and tools, and its AMPP partner logic 
--functions, and any output files any of the foregoing 
--(including device programming or simulation files), and any 
--associated documentation or information are expressly subject 
--to the terms and conditions of the Altera Program License 
--Subscription Agreement, Altera MegaCore Function License 
--Agreement, or other applicable license agreement, including, 
--without limitation, that your use is for the sole purpose of 
--programming logic devices manufactured by Altera and sold by 
--Altera or its authorized distributors.  Please refer to the 
--applicable agreement for further details.


FUNCTION regfile 
(
	data[15..0],
	rdaddress_a[7..0],
	rdaddress_b[7..0],
	rdclock,
	wraddress[7..0],
	wrclock,
	wren
)

RETURNS (
	qa[15..0],
	qb[15..0]
);