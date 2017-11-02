all: c.c
	gcc -o stato c.c

run: all
	./stato

clean:
	rm stato *~
