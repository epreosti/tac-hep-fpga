open_project proj_vecmul
set_top vecmul_part
add_files vecmul_part.cpp
add_files -tb vecmul_part_tb.cpp
open_solution "solution1"
set_part {xcvu9p-flga2104-1-i}
create_clock -period 25 -name default
csim_design
csynth_design
exit
