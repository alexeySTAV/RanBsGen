# Compiler
CC = gcc
# Check CPU capabilities
CPU_FLAGS := $(shell grep -o -m 1 'rdseed' /proc/cpuinfo)

ifeq ($(CPU_FLAGS),rdseed)
    USE_CPU_RANDOM := -DUSE_CPU_RANDOM
    CPU_RANDOM_OBJ := src/cpu_random.o
else
    CPU_RANDOM_OBJ := 
endif
# Compiler flags
CFLAGS = -Wall -Wextra -I./include $(USE_CPU_RANDOM)

# Source files
SRC = src/main.c \
      src/constructString.c \
      src/processFlags.c \
      src/constructBuffer.c \
      src/random.c \
			$(CPU_RANDOM_OBJ)

# Object files
OBJ = $(SRC:.c=.o)

# Output executable
TARGET = bsgen
PREFIX ?= /usr/local
MANDIR = $(PREFIX)/share/man/man1
MANPAGE = man/bsgen.1
# Default rule
all: $(TARGET)

# Link the object files to create the executable
$(TARGET): $(OBJ)
	$(CC) -o $@ $^

# Compile each source file into an object file
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files and the executable
clean:
	rm -f $(OBJ) $(TARGET)

install: $(TARGET)
	install -d $(PREFIX)/bin
	install -m 755 $(TARGET) $(PREFIX)/bin
	install -d $(MANDIR)
	install -m 644 $(MANPAGE) $(MANDIR)

uninstall:
	rm -f $(PREFIX)/bin/$(TARGET)
	rm -f $(MANDIR)/$(MANPAGE)

# Phony targets
.PHONY: all clean install uninstall
