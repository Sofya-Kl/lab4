func: main.o func.o
	gcc -o func main.o func.o
	
main.o: main.c
	gcc -c main.c
	
func.o: func.c
	gcc -c func.c
	