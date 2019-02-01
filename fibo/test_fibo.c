#include <stdio.h>
#include <stdlib.h>
#include "fibo.h"

int fib(int n) {
	if (n==0 || n==1) return 1;
	else return fib(n-1)+fib(n-2);
}

int main(void) {
	int i,j;
    int ok=1;
	int test[] = {0,1,5,10};
	int *p;

    for (i=0;i<3;i++) {	
		p=gen_fibo(test[i]);
		
		for (j=0;j<test[i];j++) 
			if(*(p+j)==fib(j)) ok = ok && 1;
			else ok = ok && 0;
			
		if (ok)
			printf("TECHIO> message --channel \"RAPPORT TEST %d\" 'Succes function test.'\n",i);
		else
			printf("TECHIO> message --channel \"RAPPORT TEST %d\" 'Error function fail test.'\n",i);
		free(p);
	}

    if(ok)
        printf("TECHIO> success true\n");
    else  
		printf("TECHIO> success false\n");

	return 0;
}
