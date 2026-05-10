open_project proj_nn_dense
set_top nn_dense
add_files nn_dense.cpp
add_files -tb nn_dense_tb.cpp
open_solution "solution1"
set_part {xcvu9p-flga2104-1-i}
create_clock -period 25 -name default
csim_design
csynth_design
exit
