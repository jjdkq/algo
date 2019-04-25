SRCS=$(wildcard ../Src/*.c)
dir=$(notdir $(SRCS))
OBJS=$(dir:.c=.o)
CC=gcc
CFLAGS=-Wall -c -g
include=-I ../Inc
target=linklist
$(target):$(OBJS)
	$(CC) $^ -o $@
%.o:../Src/%.c ../Inc/*.h
	$(CC) $(CFLAGS) $< $(include)
.PHONY:clean
clean:
	rm -f *.o $(target)
