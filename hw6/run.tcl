open_project proj_hw6q9
set_top vec_add
add_files vec_add.cpp
add_files -tb vec_add_tb.cpp
open_solution "solution1"
set_part {xcvu9p-flga2104-1-i}
create_clock -period 25 -name default
csim_design
exit
