#include <stdio.h>
 
int main() {
	int T=0, i=0, b=0;
	
	scanf("%i",&T);
    int valor[T];
	for(i=0;i<T;i++){
		scanf("%i",&valor[i]);
	}
	for(i=0;i<T;i++){
		if(valor[i]<=valor[0]){
			valor[0]=valor[i];
			b=i;
		}
	}
	printf("Menor valor: %i\n",valor[0]);
	printf("Posicao: %i\n",b);
	
    return 0;
}
