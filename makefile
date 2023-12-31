
CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -fsanitize=address -g

SRCDIR := src
INCDIR := include
OBJDIR := obj

SRCS := $(wildcard $(SRCDIR)/**/*.cpp $(SRCDIR)/*.cpp)
OBJS := $(SRCS:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

EXEC := myprogram

all: directories $(EXEC)

directories:
	mkdir -p $(dir $(OBJS))

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) $(CXXFLAGS) -I$(INCDIR) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

.PHONY: all directories clean
