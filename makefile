CC = gcc
CFLAGS = -std=c99
TARGET = mysh
OBJS = mysh.o makeargv.o
$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)
mysh.o: mysh.c
	$(CC) -c mysh.c
makeargv.o: makeargv.c
	$(CC) $(CFLAGS) -c makeargv.c
debug:
	$(CC)  mysh.c -DDEBUG -o $(TARGET)

clean:
	/bin/rm -f *.o $(TARGET)