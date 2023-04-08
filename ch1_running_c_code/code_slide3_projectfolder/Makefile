
BIN_DIR = bin
BUILD_DIR = build
SRC_DIR = src
INC_DIR = include

SRC = $(shell find . -name *.c)
OBJS = $(patsubst $(BUILD_DIR)/%.o, %.c, $(SRC))
BIN = $(BIN_DIR)/a.out
CFLAGS = -Wall -I$(INC_DIR)

all: $(BIN)

$(BIN): $(OBJS)
	gcc $^ $(CFLAGS) -lm -o $@

$(BUILD_DIR)/%.o: $(BUILD_DIR)/%.c
	gcc -c $^ $(CFLAGS) -o $@

.PHONY: clean

clean:
	$(RM) $(BIN)