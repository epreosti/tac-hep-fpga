open_project proj_hw5_ex1
set_top hw5_ex1
add_files hw5_ex1.cpp
add_files hw5_ex1.h
add_files -tb hw5_ex1_tb.cpp
open_solution "solution1"
set_part {xc7vx690tffg1761-2}
create_clock -period 25 -name default
csim_design
csynth_design
exit
