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
	/*
	
    for (i=0;i<4;i++) {		
	    printf("TECHIO> message --channel \"RAPPORT TEST %d\" 'Compare (%s %s - %d/%d/%d) and (%s %s - %d/%d/%d).'\n",i,liste[i].nom,liste[i].prenom,liste[i].naissance.jour,liste[i].naissance.mois,liste[i].naissance.annee,liste[i+1].nom,liste[i+1].prenom,liste[i+1].naissance.jour,liste[i+1].naissance.mois,liste[i+1].naissance.annee);
		if (_compare_contact(liste[i],liste[i+1]) == compare_contact(liste[i],liste[i+1])) {
            ok = ok && 1;
			printf("TECHIO> message --channel \"RAPPORT TEST %d\" 'Succes function test.'\n",i);
        }
        else {
            ok = ok && 0;
            printf("TECHIO> message --channel \"RAPPORT TEST %d\" 'Error function fail test.'\n",i);
        }
    }
     */
    if(ok)
        printf("TECHIO> success true\n");
    else  
		printf("TECHIO> success false\n");

	return 0;
}
