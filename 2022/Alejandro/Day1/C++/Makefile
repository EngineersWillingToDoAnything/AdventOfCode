# 'make'        build executable file 'main'
# 'make clean'  removes all .o and executable files
#

# define the Cpp compiler to use
CXX          := g++
# define any compile-time flags
CXX_FLAGS    := -O0 -Wall -Wextra -std=c++17 -ggdb

# define object files
OBJ := build/functions.o build/calories.o build/elf.o build/error.o build/main.o

# Compile the main and the auxiliary functions
build/%.o: lib/%.cc
	$(CXX) $(CXX_FLAGS) -c $< -o $@

# Compile the classes implementation
build/%.o: src/%.cc
	$(CXX) $(CXX_FLAGS) -c $< -o $@

# Create the executable from the compiled objects
exec.exe: $(OBJ)
	$(CXX) $(CXX_FLAGS) $(OBJ) -o exec.exe

# Delete the compiled object and the excutable
clean:
	-del build\*.o
	-del exec.exe