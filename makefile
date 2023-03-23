# Compiler to use
CC = gcc

# Compiler flags
CFLAGS = -Wall -Werror -pedantic -std=c89

# Directory for the executable and object files
BUILD_DIR = monty

# List of source files
SRCS = $(wildcard *.c)

# List of object files
OBJS = $(patsubst %.c,$(BUILD_DIR)/%.o,$(SRCS))

# Default target - the executable "monty"
monty: $(OBJS)
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/$@ $^

# Rule to build an object file from a source file
$(BUILD_DIR)/%.o: %.c monty.h
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c -o $@ $<

# Target to remove object files and the executable
clean:
	rm -rf $(BUILD_DIR)

# Target to clean and rebuild the executable
re: clean monty

# Declare "clean" and "re" as phony targets (not associated with files)
.PHONY: clean re
