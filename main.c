#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial (int n){
	int res=1;
	int i;
	for(i=1;i<=n;i++)
		res=res*i;
	return res;
}

int combination(int n, int r){
	int numerator, denomin1, denomin2;
	numerator = factorial(n);
	denomin1=factorial(r);
	denomin2=factorial(n-r);
	return numerator/(denomin1*denomin2);
}

int get_integer( ){
	int n;
	printf("input n first and then r:");
	//printf("input n,r");
	//scanf("%d,%d",&n,&r);
	scanf("%d",&n);
	return n;
	
}

int main(void)
{
	int answer;
	int n, r;
	printf("input n:");
	scanf("%d",&n);
	printf("input r:");
	scanf("%d",&r);
	answer = combination(n,r);
	printf("answer is %d", answer);
}
