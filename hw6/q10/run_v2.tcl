open_project proj_v2_both
set_top matmul_v2_both
add_files matmul_v2_both.cpp
add_files -tb matmul_v2_tb.cpp
open_solution "solution1"
set_part {xcvu9p-flga2104-1-i}
create_clock -period 25 -name default
csim_design
csynth_design
exit
