CC	= gcc
CFLAGS	= -g -Wall -m64
TARGETS	= foo01

all: ${TARGETS}

foo01.o: foo01.c
	${CC} ${CFLAGS} -c $<

foo01: foo01.o
	${CC} ${CFLAGS} -o $@ $<

clean:
	rm -f *.o
clobber: clean
	rm -f ${TARGETS}

cl: clobber
