CC=gcc
CFLAGS=-Wall -std=c99

SOURCES=$(wildcard src/*.c)
OBJECTS=$(SOURCES:.c=.o)
TESTS=$(wildcard test/*.c)
TEST_OBJECTS=$(TESTS:.c=.o)

check: clean $(TEST_OBJECTS) $(OBJECTS)
	mkdir bin
	$(CC) $(CFLAGS) -o bin/check $(TEST_OBJECTS) $(OBJECTS) -lcheck -lm -lrt -lpthread
	./bin/check

clean:
	rm -rf **/*.o bin
