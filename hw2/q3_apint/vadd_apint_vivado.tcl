open_project proj_vadd_apint
set_top vadd_apint
add_files vadd_apint.cpp
add_files -tb vadd_apint_tb.cpp
open_solution "solution1"
set_part {xcvu9p-flga2104-1-i}
create_clock -period 25 -name default
csim_design
csynth_design
exit
