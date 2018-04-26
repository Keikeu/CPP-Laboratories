CXX=g++
CXXFLAGS+=-g
CXXFLAGS+=-Wextra
CXXFLAGS+=-pedantic
CXXFLAGS+=-Wall
MAIN=bib
SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)

all: $(MAIN)

$(MAIN): $(OBJ)
	$(CXX) $? -o $@

$(OBJ): $(SRC)
	$(CXX) $(CXXFLAGS) -c $*.cpp -o $@

.PHONY: clean run backup cB

clean:
	rm -f $(MAIN) $(OBJ)

run: $(MAIN)
	./$(MAIN)

