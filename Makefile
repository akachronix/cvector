CC=gcc
CFLAGS=-Wall -pedantic
CLDFLAGS=
CSTD=-std=c11

BINDIR=bin
INCLUDEDIR=include
LIBDIR=lib
OBJDIR=obj
SRCDIR=src

TARGET=cvector

.PHONY: clean

all: $(TARGET)

$(TARGET): clean main.o char_vector.o
	mkdir $(BINDIR) $(OBJDIR)
	mv *.o $(OBJDIR)
	$(CC) $(CSTD) -I$(INCLUDEDIR) -L$(LIBDIR) $(CFLAGS) -g -s $(OBJDIR)/$(word 2, $^) $(OBJDIR)/$(word 3, $^) -o $(BINDIR)/$(TARGET) $(CLDFLAGS)

main.o: $(SRCDIR)/main.c
	$(CC) $(CSTD) -I$(INCLUDEDIR) -L$(LIBDIR) $(CFLAGS) -c $^

char_vector.o: $(SRCDIR)/char_vector.c
	$(CC) $(CSTD) -I$(INCLUDEDIR) -L$(LIBDIR) $(CFLAGS) -c $^

clean:
	rm -rf $(BINDIR) $(OBJDIR) *.log build/