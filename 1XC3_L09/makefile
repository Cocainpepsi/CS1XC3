BUILDDIR = build
SRCDIR = src
EXECUTABLE = main
.DEFAULT_GOAL := main

main: docs builddirectory main.o
	gcc -Wall $(BUILDDIR)/main.o $(BUILDDIR)/student.o $(BUILDDIR)/course.o -o $(BUILDDIR)/$(EXECUTABLE)

main.o:  course.o student.o 
	gcc -c $(SRCDIR)/main.c -o $(BUILDDIR)/main.o

course.o:
	gcc -c $(SRCDIR)/course.c -o $(BUILDDIR)/course.o

student.o:
	gcc -c $(SRCDIR)/student.c -o $(BUILDDIR)/student.o

builddirectory:
	mkdir -p $(BUILDDIR)
	mkdir -p documentation/docs

Doxyfile:
	doxygen -g
docs: Doxyfile
	doxygen Doxyfile

clean:
	rm -f $(BUILDDIR)/*.o $(BUILDDIR)/$(EXECUTABLE)