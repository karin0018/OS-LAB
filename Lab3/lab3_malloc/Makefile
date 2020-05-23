#
# Students' Makefile for the Malloc Lab
#

CC = gcc -g
CFLAGS = -Wall

# 补充
OBJS1 = memlib.o mm.o mmdriver.o
OBJS2 = memlib.o ep_mm.o mmdriver.o

all: mmdriver epmmdriver

mmdriver: $(OBJS1)
# 补充gcc命令（使用变量）
	$(CC) $(CFLAGS) -o mmdriver $(OBJS1)

epmmdriver: $(OBJS2)
# 补充gcc命令（使用变量）
	$(CC) $(CFLAGS) -o epmmdriver $(OBJS2)


# 补充
mmdriver.o: memlib.h mm.h 
memlib.o: memlib.h config.h
mm.o: mm.h memlib.h
ep_mm.o: mm.h memlib.h

clean:
	rm -f *~ *.o mmdriver epmmdriver


