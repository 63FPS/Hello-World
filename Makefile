CC = gcc
NAME = prog
BUILDDIR = build
SRCDIR = src
OBJECTS = $(BUILDDIR)/main.o

prog: $(OBJECTS)
	mkdir -p $(BUILDDIR)
	$(CC) -o $(BUILDDIR)/$(NAME) $(OBJECTS)

%.o: $(SRCDIR)/main.c
	mkdir -p $(BUILDDIR)
	$(CC) -c $< -o $@

clean: 
	rm $(BUILDDIR)/*.o $(BUILDDIR)/$(NAME)
	rm -r $(BUILDDIR)
