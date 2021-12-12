.PHONY: clean all test run runtest
BIN_DIR = ./bin
BUILD_DIR = ./build
SRC_DIR = ./calculator
TEST_DIR = ./Unit_Test_calculator
FLAGS =-Wall -std=c++11

all: $(BIN_DIR)/main

$(BIN_DIR)/main: $(BUILD_DIR)/main.o 
	g++ $(FLAGS) $(BUILD_DIR)/main.o -o $(BIN_DIR)/main

$(BUILD_DIR)/main.o:
	g++ $(FLAGS) -c $(SRC_DIR)/main.cpp -o $(BUILD_DIR)/main.o
	
run: 
	./bin/main

clean:
	rm -f build/*.o
	rm -f bin/main
