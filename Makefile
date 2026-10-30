TB_DIR = src/testbench
RTL_DIR = src/rtl

# -- pe --
PE_OBJ_DIR = build/pe_obj
pe_all:
	mkdir $(PE_OBJ_DIR)
	mkdir build/wave
	verilator --cc --exe --build -j 0 -Wall --trace -Mdir $(PE_OBJ_DIR) $(TB_DIR)/pe.cpp $(RTL_DIR)/pe.v
pe_run:
	./$(PE_OBJ_DIR)/Vpe
# -- vpu --
VPU_OBJ_DIR = build/vpu_obj
VPU_LOG_DIR = build/vpu_log
vpu_all:
	mkdir $(VPU_OBJ_DIR)
	verilator --cc --exe --build -j 0 -Wall --trace -sv -Mdir $(VPU_OBJ_DIR) $(TB_DIR)/vpu.cpp $(RTL_DIR)/vpu.v $(RTL_DIR)/pe.v
vpu_run:
	mkdir $(VPU_LOG_DIR)
	mkdir build/wave
	./$(VPU_OBJ_DIR)/Vvpu >> $(VPU_LOG_DIR)/vpu_run.log

# -- ssa --
SSA_OBJ_DIR = build/ssa_obj
SSA_LOG_DIR = build/ssa_log
ssa_all:
	mkdir $(SSA_OBJ_DIR)
	verilator --cc --exe --build -j 0 -Wall -Wno-UNOPTFLAT --trace -sv -Mdir $(SSA_OBJ_DIR) $(TB_DIR)/ssa.cpp $(RTL_DIR)/ssa.v $(RTL_DIR)/pe.v $(RTL_DIR)/row_gen.v
ssa_run:
	mkdir $(SSA_LOG_DIR)
	mkdir build/wave
	./$(SSA_OBJ_DIR)/Vssa >> $(SSA_LOG_DIR)/ssa_run.log

# -- fifo_ssa --
FIFO_SSA_OBJ_DIR = build/fifo_ssa_obj
FIFO_SSA_LOG_DIR = build/fifo_ssa_log
fifo_ssa_all:
	mkdir $(FIFO_SSA_OBJ_DIR)
	verilator --cc --exe --build -j 0 -Wall -Wno-UNOPTFLAT --trace -sv -Mdir $(FIFO_SSA_OBJ_DIR) $(TB_DIR)/fifo_ssa.cpp $(RTL_DIR)/fifo_ssa.v $(RTL_DIR)/left_fifo.v $(RTL_DIR)/ssa.v $(RTL_DIR)/pe.v $(RTL_DIR)/row_gen.v
fifo_ssa_run:
	mkdir $(FIFO_SSA_LOG_DIR)
	mkdir build/wave
	./$(FIFO_SSA_OBJ_DIR)/Vfifo_ssa >> $(FIFO_SSA_LOG_DIR)/fifo_ssa_run.log

clean:
	rm -rf build/*