CC = gcc
CFLAGS = -std=c99
TARGET = shell
OBJS = shell.o
$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)
shell.o: shell.c
	$(CC) -c shell.c
debug:
	$(CC)  shell.c -DDEBUG -o $(TARGET)

clean:
	/bin/rm -f *.o $(TARGET)