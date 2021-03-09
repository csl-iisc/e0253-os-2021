CC := gcc
CFLAGS := -O3
LDFLAGS := 
ALL := main

all: $(ALL)

target: main.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)
clean:
	rm -f $(ALL)
