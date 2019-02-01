#include <stdio.h>
#include <stdlib.h>
#include "alloue_vect.h"

struct nbval {
	int nb;
	int val;
};

int main(void) {
	int i,j;
    int ok=1;
	struct nbval test[] = {{10,5},{0,6},{1000,3}};
	int *p;

    for (i=0;i<3;i++) {	
		p=alloue_vect(test[i].nb,test[i].val);
		for (j=0;j<test[i].nb;j++) 
			if(*(p+j)==test[i].val) ok = ok && 1;
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
