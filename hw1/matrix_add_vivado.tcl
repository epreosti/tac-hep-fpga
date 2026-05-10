open_project proj_matrix_add
set_top matrix_add
add_files matrix_add.cpp
add_files -tb matrix_add_tb.cpp

open_solution "solution1"
set_part {xcvu9p-flga2104-1-i}
create_clock -period 25 -name default

csim_design
csynth_design

exit
