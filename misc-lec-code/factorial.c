#include <stdio.h>


int fact(int n) {

	if (n==0) {
		return 1;
	}

	return n*fact(n-1);

}


int main(void) {

	int number = 5;

	printf("%d! = %d\n",number, fact(number));

	

}
