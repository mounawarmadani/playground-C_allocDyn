#include <stdio.h>
#include <stdlib.h>
#include "alloue_tab.h"

struct nbval {
	int l;
	int c;
	int val;
};

int main(void) {
	int i,j,k;
    int ok=1;
	struct nbval test[] = {{10,10,5},{1,10,6},{1000,500,3}};
	int *p;

    for (i=0;i<3;i++) {	
		p=alloue_tab(test[i].l,test[i].c,test[i].val);
		for (j=0;j<test[i].l;j++) 
			for (k=0;k<test[i].c;k++)
				if(*(p+j*test[i].c+k)==test[i].val*(j+1)) ok = ok && 1;
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
