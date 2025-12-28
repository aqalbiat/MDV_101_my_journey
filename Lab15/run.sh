verilator --cc counter.v --exe counter_tb.cpp counter_dpi.cpp
make -C obj_dir -f Vcounter.mk Vcounter 
