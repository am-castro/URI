#include <stdio.h>
 
int main() {
	int T=0, i=0, valorc=0;
    int *valor[1000];
	
	scanf("%i",&T);
	for(i;i<1000;i++){
		printf("N[%i] = %i\n",i,valorc);
		valorc++;
		if(valorc==T)
			valorc=0;
	}
    return 0;
}
