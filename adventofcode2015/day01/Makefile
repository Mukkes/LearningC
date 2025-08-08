CC = gcc
CFLAGS = -Wall
objects = day01.o inputreader.o

all: day01

day01: $(objects)
	$(CC) $(CFLAGS) $^ -o day01

$(objects): %.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -f *.o day01
