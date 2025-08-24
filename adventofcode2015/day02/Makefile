CC = gcc
CFLAGS = -Wall
objects = day02.o box.o

all: day02

day02: $(objects)
	$(CC) $(CFLAGS) $^ -o day02

$(objects): %.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -f *.o day02
