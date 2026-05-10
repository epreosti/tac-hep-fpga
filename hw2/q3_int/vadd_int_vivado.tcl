open_project proj_vadd_int
set_top vadd_int
add_files vadd_int.cpp
add_files -tb vadd_int_tb.cpp
open_solution "solution1"
set_part {xcvu9p-flga2104-1-i}
create_clock -period 25 -name default
csim_design
csynth_design
exit
