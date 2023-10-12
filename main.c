#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a,int b){

	return a+b;
}

int square(int n){
	return n*n;
}

int get_max(int x, int y){
	if (x>y)
		return x;
	else 
		return y;
}

int main(int argc, char *argv[]) {
	int a,b,c;
	a=sumTwo(1,2);
	b=get_max(1,2);
	c=square(1);
	printf("datas are %d, %d, %d\n",a,b,c);
	
}
