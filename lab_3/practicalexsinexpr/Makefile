CFLAGS=-Wall

all: parser prueba

clean:
	rm parser.cpp parser.hpp parser tokens.cpp *~

parser.cpp: parser.y
	bison -d -o $@ $^

parser.hpp: parser.cpp

tokens.cpp: tokens.l parser.hpp
	lex -o $@ $^

parser: parser.cpp main.cpp tokens.cpp
	g++ $(CFLAGS) -o $@ *.cpp 

prueba:  parser pruebaexpr.in ../prueba1.in 
	./parser < pruebaexpr.in
	./parser <../prueba1.in
