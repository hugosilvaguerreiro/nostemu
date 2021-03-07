PROGRAM_NAME = nostemu
ROM_FOLDER = /home/huguntu/hugo/nostemu/roms
ROM_NAME = totally_not_pokemon_rom.gb

GCC	= g++
BIN	= bin/$(PROGRAM_NAME)

SRC = src

CPU = $(SRC)/cpu
CPU_SOURCES = cpu.cpp

COMMANDS = (shell find $(CPU)/commands -name "*.cpp")

SOURCES = src/parser/parser.cpp src/renderer.cpp src/main.cpp  $(patsubst %.cpp, $(CPU)/%.cpp, $(CPU_SOURCES))
INCS	= -lsfml-graphics -lsfml-window -lsfml-system
LIBS	= 

LINKOBJ	= $(SOURCES:.cpp=.o)

all: clean $(BIN)

$(BIN): $(LINKOBJ)
	$(GCC) -g -Wall -Wextra -pedantic $(LINKOBJ) $(INCS) $(LIBS) -o $(BIN) -std=c++2a

.cpp.o:
	$(GCC) -g -Wall -Wextra -pedantic -c $< -o $@ $(INCS) -std=c++2a

clean:
	rm -f $(LINKOBJ)
	rm -f $(BIN)

run: clean $(BIN)
	$(BIN) $(ROM_FOLDER)/$(ROM_NAME)

