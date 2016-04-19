#include<stdio.h>
#include"func.h"

int main() {
	int arg1, arg2, rez;
	char f;
	printf("Enter arg1, Enter arg2, Enter func:  ");
	scanf("%d %d %c", &arg1, &arg2, &f);
	if (f == '+') 
		rez = sum(arg1, arg2);
	if (f == '-')
		rez = raz(arg1, arg2);
	if (f == '/')
		rez = del(arg1, arg2);
	if (f == '*')
		rez = proz(arg1, arg2);
	printf("rez=%d", rez);
	return 0;
}
	