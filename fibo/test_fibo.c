#include <stdio.h>
#include <stdlib.h>
#include "fibo.h"

int _fib(int n) {
	
	if (n==0) return 0;
	else if (n==1) return 1; 
	else if (n==2) return 1; 
	else return _fib(n-1)+_fib(n-2);
}

int main(void) {
	int i,j;
    int ok=1;
	int test[] = {0,1,5,10};
	int *p;

    for (i=0;i<4;i++) {	
		p=gen_fibo(test[i]);
		
		for (j=0;j<test[i];j++) 
			if(*(p+j)==_fib(j)) ok = ok && 1;
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
