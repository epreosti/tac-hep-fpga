open_project proj_sort
set_top sort
add_files sort.cpp
add_files -tb sort_tb.cpp

open_solution "solution1"
set_part {xcvu9p-flga2104-1-i}
create_clock -period 25 -name default

csim_design
csynth_design

exit
