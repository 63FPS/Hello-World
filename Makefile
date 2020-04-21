CC = gcc
NAME = prog
BUILDDIR = build
SRCDIR = src
OBJECTS = main.o

prog: $(OBJECTS)
	$(CC) -o $(BUILDDIR)/$(NAME) $(OBJECTS)

%.o: $(SRCDIR)/main.c
	$(CC) -c $<

clean: 
	rm $(BUILDDIR)/*.o $(BUILDDIR)/$(NAME)
