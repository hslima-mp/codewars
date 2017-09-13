
kata: kata.o pdiagram.o checking.o runcell.o updopt.o 
	gcc kata.o -o kata







pdiagram.o: pdiagram.c pdiagram.h
	gcc -c -g pdiagram.c

checking.o: checking.c checking.h
	gcc -c -g checking.c

updopt.o: updopt.c updopt.h
	gcc -c -g updopt.c

runcell.o: runcell.c runcell.h updopt.h
	gcc -c -g runcell.c

kata.o: kata.c pdiagram.h checking.h runcell.h updopt.h
	gcc -c -g kata.c





