CC = gcc
CFLAGS = -Wall
objects = day03.o 

all: day03

day03: $(objects)
	$(CC) $(CFLAGS) $^ -o day03

$(objects): %.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -f *.o day03
