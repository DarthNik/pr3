CC = gcc
CFLAGS = -Wall

all: task1 task2 task3 task4

build:
	mkdir ./build

task1: build task1/task1.c
	$(CC) $(CFLAGS) task1/task1.c -o build/task1

task2: build task2/task2.c
	$(CC) $(CFLAGS) task2/task2.c -o build/task2

task3: build task3/task3.c
	$(CC) $(CFLAGS) task3/task3.c -o build/task3

task4: build task4/task4.c
	$(CC) $(CFLAGS) task4/task4.c -o build/task4 -lm

clean:
	rm -rf build/task1 build/task2 build/task3 build/task4
