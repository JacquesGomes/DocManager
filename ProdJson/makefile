# Compiler
CXX := g++
# Compiler flags
CXXFLAGS := -std=c++11 -Wall -Wextra
# Directories
SRCDIR := src
INCDIR := include
OBJDIR := obj
BINDIR := bin

# Source files
SRCS := $(wildcard $(SRCDIR)/**/*.cpp $(SRCDIR)/*.cpp)
# Object files
OBJS := $(SRCS:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

# Executable name
EXEC := $(BINDIR)/myprogram

# Default target
all: directories $(EXEC)

# Create necessary directories
directories:
	mkdir -p $(dir $(OBJS))
	mkdir -p $(BINDIR)

# Linking the object files to generate the executable
$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Compiling the source files
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) $(CXXFLAGS) -I$(INCDIR) -c $< -o $@

# Clean build artifacts
clean:
	rm -rf $(OBJDIR) $(BINDIR)

.PHONY: all directories clean
