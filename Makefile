GCC	= g++
NANAPATH = build/nana
BIN	= bin/nostemu

SRC = src

CPU = $(SRC)/cpu
CPU_SOURCES = cpu.cpp

SOURCES = src/main.cpp $(patsubst %.cpp, $(CPU)/%.cpp, $(CPU_SOURCES))

NANAINC = $(NANAPATH)/include
NANALIB = $(NANAPATH)/build/bin

INCS	= -I$(NANAINC)
LIBS	= -L$(NANALIB) -lnana -lX11 -lpthread -lrt -lXft -lpng -lasound -lfontconfig -lstdc++fs

LINKOBJ	= $(SOURCES:.cpp=.o)

$(BIN): $(LINKOBJ) $(NANALIB)/libnana.a
	$(GCC) $(LINKOBJ) $(INCS) $(LIBS) -o $(BIN) -std=c++0x

.cpp.o:
	$(GCC) -g -c $< -o $@ $(INCS) -std=c++0x

$(NANALIB):
	make -f $(NANAPATH)/build/makefile/makefile

clean:
	rm -f $(LINKOBJ)
	rm -f $(BIN)

run: clean $(BIN)
	$(BIN)
