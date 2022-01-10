# Define required macros here
SHELL = /bin/sh
MAKE = make

OBJS =  main.o 
CFLAGS = -Wall -g
CC = g++
INCLUDE =
LIBS = -lm
PROFILE = -pg
COVERAGE = -pg -ftest-coverage -fprofile-arcs
TEMPFILETYPES = 

target : sorting

TEMPFILETYPES+=*.o
*.o : *.cpp
	${CC} ${CFLAGS} ${INCLUDES} -c $<

TEMPFILETYPES+=*.exe *.a
sorting : ${OBJS}
	${CC} ${CFLAGS} ${INCLUDES} -o $@ ${OBJS} ${LIBS}

TEMPFILETYPES+=gmon.out
profile : CFLAGS+=${PROFILE}
profile : clean target


TEMPFILETYPES+=*.gdca *.gcno *.gcov
coverage : CFLAGS+=${COVERAGE}
coverage : clean target

clean:
	-rm -f ${TEMPFILETYPES}


.phony: default
