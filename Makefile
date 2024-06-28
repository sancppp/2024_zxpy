CXX = g++
CXXFLAGS = -std=c++11
SRC = Main.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = main
OUTPUT_DIR = data

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(EXEC)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(EXEC)
	./$(EXEC)

clean:
	rm -f $(OBJ) $(EXEC)
	find $(OUTPUT_DIR) -type d -name '[0-9]*' -exec rm -f {}/output1.csv {}/output2.csv \;