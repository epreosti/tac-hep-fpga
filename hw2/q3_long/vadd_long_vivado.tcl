open_project proj_vadd_long
set_top vadd_long
add_files vadd_long.cpp
add_files -tb vadd_long_tb.cpp
open_solution "solution1"
set_part {xcvu9p-flga2104-1-i}
create_clock -period 25 -name default
csim_design
csynth_design
exit
