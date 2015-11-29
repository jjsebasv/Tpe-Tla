all:
	yacc -d salarium.y
	lex salarium.l
	gcc -o parser lex.yy.c y.tab.c -lfl
	
clean:
	rm -f aux.c
	rm -f parser
	rm -f lex.yy.c
	rm -f y.tab.c
	rm -f y.tab.h
