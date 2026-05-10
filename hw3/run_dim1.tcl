open_project proj_dim1
set_top matmul_dim1
add_files matmul_dim1.cpp
add_files -tb matmul_dim1_tb.cpp
open_solution "solution1"
set_part {xcvu9p-flga2104-1-i}
create_clock -period 25 -name default
csim_design
csynth_design
exit
