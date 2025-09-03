
OPT=-g -gdwarf-4 -g3 -Wall -fPIC -ggdb3 -O0 -Qunused-arguments -std=c11 -Wall

all: projeto test

wug.o: wug.c data.o util.o
	clang -c ${OPT} wug.c data.o -o wug.o

%.o: %.c
	clang -c ${OPT} $< -o $@

projeto: data.o util.o wug.o projeto.c
	clang ${OPT} projeto.c data.o util.o wug.o -o projeto

test: data.o util.o wug.o test.c
	clang ${OPT} test.c data.o util.o wug.o -o test

clean:
	rm data.o util.o wug.o
	rm -rf projeto.dSYM
	rm -rf test.dSYM
