CFLAGS=-Wall

all: parser prueba

clean:
	rm parser.cpp parser.hpp parser tokens.cpp 

parser.cpp: parser.y
	bison -d -o $@ $^

parser.hpp: parser.cpp

tokens.cpp: tokens.l parser.hpp
	lex -o $@ $^

parser: parser.cpp main.cpp tokens.cpp
	g++ $(CFLAGS) -o $@ *.cpp 

prueba:  parser Pruebas/PruebaBuena1.in Pruebas/PruebaBuena2.in Pruebas/PruebaMala1.in Pruebas/PruebaMala2.in
	./parser <Pruebas/PruebaBuena1.in
	./parser <Pruebas/PruebaBuena2.in
	./parser <Pruebas/PruebaMala1.in
	./parser <Pruebas/PruebaMala2.in
