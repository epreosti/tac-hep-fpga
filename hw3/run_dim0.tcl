open_project proj_dim0
set_top matmul_dim0
add_files matmul_dim0.cpp
add_files -tb matmul_dim0_tb.cpp
open_solution "solution1"
set_part {xcvu9p-flga2104-1-i}
create_clock -period 25 -name default
csim_design
csynth_design
exit
