OFILES=initialise.o execute.o finalize.o

iterate:iterate.o libIterate.a
	g++ -o $@ $< -L. -lIterate

libIterate.a:$(OFILES)
	ar rc $@ $?

clean:
	rm -f *.o *.a iterate *~