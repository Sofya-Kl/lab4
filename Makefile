bin/func: obj/main.o obj/func.o
	gcc obj/main.o obj/func.o -o bin/func 
	
obj/main.o: src/main.c
	gcc -c src/main.c -o obj/main.o
	
obj/func.o: src/func.c
	gcc -c src/func.c -o obj/func.o
.PHONY: clean
clean:
	rm -f bin/*
	rm -f obj/*
