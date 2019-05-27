BUILD=build
BIN=$(PWD)/bin

SRC=src
SRC_OBJS= main.o
SRC_OBJS_OUT=$(patsubst %, $(BUILD)/%, $(SRC_OBJS))

CC=gcc
CXX=g++
RM=rm -f
CPPFLAGS= -g -c -ansi -std=c++17 -Wall -pedantic


$(BUILD)/%.o : $(SRC)/%.cpp
	$(CXX) -c $< -o $@ $(CPPFLAGS)

nostemu: $(SRC_OBJS_OUT)
	$(CXX) -o $(BIN)/$@ $^

.PHONY: clean run

run:
	$(BIN)/nostemu

clean:
	$(RM) $(BUILD)/*
	$(RM) $(BIN)/*



# $@	the filename of the target
# $^	the filenames of all dependencies
# $?	the filenames of all dependencies that are newer than the target
# $<	the filenames of the first dependency

