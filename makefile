CC = gcc
CFLAGS = -std=c99
TARGET = mysh
OBJS = mysh.o
$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)
mysh.o: mysh.c
	$(CC) -c mysh.c
debug:
	$(CC)  mysh.c -DDEBUG -o $(TARGET)

clean:
	/bin/rm -f *.o $(TARGET)