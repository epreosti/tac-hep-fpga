open_project proj_hw4
set_top array_ops
add_files kernel.cpp
add_files -tb kernel_tb.cpp

open_solution "solution6_reshape"
set_part {xcu250-figd2104-2L-e}
create_clock -period 25 -name default
csim_design
csynth_design
close_project
