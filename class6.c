#include <stdio.h>

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	// Formula of ceil: (a + b -1) / b

	int divident = 7;
	int divisor = 2;


	float regularQuotient = (float)divident / divisor;
	int ceilQuotient = (divident + divisor - 1) / divisor;

	printf("Regular quotient for divident 7 and divisor 2 is: %f\nCeil quotient for divident 7 and divisor 2 is: %d\n",regularQuotient, ceilQuotient);

	// convert int input to char then convert it to int again for calculation

	char a; //int to char conversion

	scanf("%c", &a);

	int num = a - '0'; //char to int conversion

	int result = num * 2;

	printf("Result: %d", result);

	return 0;
}