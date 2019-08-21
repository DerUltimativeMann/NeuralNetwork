#Program
PROG = NeuronalesNetz

#Compiler C++
CC = g++

#Flags
CF = -Wall -pedantic -ansi
#LF = ...

#o-files
OBJ = main.o neuron.o axion.o

#Bind Program
$(PROG): $(OBJ)
	$(CC) -o $(PROG) $(OBJ)
	rm $(OBJ)

#Compile Code
%.o: %.cpp
	$(CC) -c $(CF) $<
