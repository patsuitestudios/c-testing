TARGETS = main

all: $(TARGETS)

main: main.c
	gcc -Wall -o main main.c

clean:
	rm main
