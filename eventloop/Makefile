

BUILD_DIR ?= build
.PHONY: build clean
default: run_main


build: $(BUILD_DIR)/Makefile
	cd $(BUILD_DIR) && make --trace

$(BUILD_DIR)/Makefile: Makefile
	mkdir -p $(BUILD_DIR) \
	&& cmake -S . -B $(BUILD_DIR) \
	    -DCMAKE_TOOLCHAIN_FILE=$(VCPKG_HOME)/scripts/buildsystems/vcpkg.cmake \
		-DCMAKE_BUILD_TYPE=debug

clean:	
	rm -rf $(BUILD_DIR)


run_main: build
	$(BUILD_DIR)/main

ldd_main: build
	ldd $(BUILD_DIR)/main

run_main1: build
	$(BUILD_DIR)/main1 2 2 




gdb_main1: build
	gdb --args $(BUILD_DIR)/main1 2 20000
