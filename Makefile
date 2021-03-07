PROGRAM_NAME = nostemu
ROM_FOLDER = /home/huguntu/hugo/nostemu/roms
ROM_NAME = totally_not_pokemon_rom.gb

GCC	= g++
BIN	= bin/$(PROGRAM_NAME)

SRC = src

CPU = $(SRC)/cpu
CPU_SOURCES = cpu.cpp

SOURCES = src/parser/parser.cpp src/renderer.cpp src/main.cpp  #$(patsubst %.cpp, $(CPU)/%.cpp, $(CPU_SOURCES))
INCS	= -lsfml-graphics -lsfml-window -lsfml-system
LIBS	= 

LINKOBJ	= $(SOURCES:.cpp=.o)

all: clean $(BIN)

$(BIN): $(LINKOBJ)
	$(GCC) -g $(LINKOBJ) $(INCS) $(LIBS) -o $(BIN) -std=c++0x

.cpp.o:
	$(GCC) -g -c $< -o $@ $(INCS) -std=c++0x

clean:
	rm -f $(LINKOBJ)
	rm -f $(BIN)

run: clean $(BIN)
	$(BIN) $(ROM_FOLDER)/$(ROM_NAME)

