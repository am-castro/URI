#include <stdio.h>

int main(){
	int valor;
	scanf("%d",&valor); //aspas comuns *erro* - faltou um & para pegar a variável
		
	int n = valor;
	float fatorial = 1;
	
	if(n>-1){//adicionada a chave
		while (n>0){
			fatorial*=n;
			n--;
		}
		printf("O fatorial de %d e igual a %f\n",valor, fatorial); //falta o "printf" no lugar do "print" - para mostrar o fatorial usa-se o %f (pois é float)
	}//adicionada a chave
	else
		printf("Nao existe fatorial de %d\n",n); //falta o "printf" no lugar do "print"
	
	return 0;
}
