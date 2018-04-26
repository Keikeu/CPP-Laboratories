CXX=g++
CXXFLAGS+=-g
CXXFLAGS+=-Wextra
CXXFLAGS+=-pedantic
CXXFLAGS+=-Wall
MAIN=Wyjatki
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

class: 
	read -p "Enter Class Name:" name; \ 
	touch $$name.cpp; \
	printf " include \""$$name.h"\"\n\ninclude <iostream>\n\nusing namespace std;\n" > $$name.cpp; \
	touch $$name.h; \
	printf "pragma once\n\nclass "$$name"\n{public:\n\nprivate:\n\n};\n" > $$name.h \

