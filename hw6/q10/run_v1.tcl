open_project proj_v1_unroll
set_top matmul_v1_unroll
add_files matmul_v1_unroll.cpp
add_files -tb matmul_v1_tb.cpp
open_solution "solution1"
set_part {xcvu9p-flga2104-1-i}
create_clock -period 25 -name default
csim_design
csynth_design
exit
