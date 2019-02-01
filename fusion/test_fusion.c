#include <stdio.h>
#include <stdlib.h>

#include "fusion.h"

int main() {

  int *v1,*v2, *v;
  int i,n1,n2;

  scanf("%d",&n1);
  v1=malloc(sizeof(int)*n1);
  for (i=0;i<n1;i++)
	  scanf("%d",v1+i);

  scanf("%d",&n2);
  v2=malloc(sizeof(int)*n1);
  for (i=0;i<n2;i++)
	  scanf("%d",v2+i);  

  v=fusion(v1,v2);
  
  for (i=0;i<n1+n2;i++)
	  printf("%d ",v+i);  
  
  printf("\n");
  return 0;
}
