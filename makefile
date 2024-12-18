# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11 -g  # Add -g for GDB debugging support

# Source files
SRCS = trajet.cpp trajet_simple.cpp trajet_compose.cpp liste_chainee.cpp catalogue.cpp test.cpp

# Header files
HEADERS = trajet.h trajet_simple.h trajet_compose.h liste_chainee.h catalogue.h

# Object files
OBJS = $(SRCS:.cpp=.o)

# Output executable
TARGET = trajets

# Default target
all: $(TARGET)

# Rule to link the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Rule to compile object files
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Debug target for running in GDB
debug: $(TARGET)
	gdb $(TARGET)

# Clean rule
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets
.PHONY: all debug clean
