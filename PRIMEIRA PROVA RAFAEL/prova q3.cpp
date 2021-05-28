#include <stdio.h>

int main(){
	int tabuleiro[3][3], l=0, c=0, linha, coluna,valor=0;
	
	for(linha = 1 ; linha <= 3 ; linha++){
        for(coluna = 1 ; coluna <= 3 ; coluna++){	
            tabuleiro[linha][coluna] = 1;
			printf("%d",tabuleiro[linha][coluna]);
		}
		printf("\n");
	}
	while(tabuleiro[linha][coluna]!=1){
			printf("Digite em qual linha voce deseja adicionar: ");
			scanf("%d",&l);
			printf("Digite em qual coluna voce deseja adicionar: ");
			scanf("%d",&c);
			printf("digite 0 para O e 2 para X\n");
			scanf("%d",&valor);
        	tabuleiro[c][l]=valor;
        	
		for(linha = 1 ; linha <= 3 ; linha++){
	        for(coluna = 1 ; coluna <= 3 ; coluna++){
				printf("%d",tabuleiro[linha][coluna]);
			}
			printf("\n");
		}
	}
	if(tabuleiro[linha][coluna]!=1){
		printf("digite 0 para O e 2 para X\n");
	}
	
	return 0;
}
