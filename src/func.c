#include<stdio.h>
#include"func.h"

int sum(int arg1, int arg2){
	int rez;
	rez = arg1 + arg2;
	return rez;
}

int raz(int arg1, int arg2){
	int rez;
	rez = arg1 - arg2;
	return rez;
}

int del(int arg1, int arg2){
	int rez;
	rez = arg1 / arg2;
	return rez;
}

int proz(int arg1, int arg2){
	int rez;
	rez = arg1 * arg2;
	return rez;
}