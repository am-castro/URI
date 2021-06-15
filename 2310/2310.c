/*
	Autor: Antonio Marcos
	Data: 15/06/2021
*/

#include <stdio.h>
 
int main() {
 
    int S, B, A,jogadores, S1, B1, A1,i; //quantidade de tentativas de Saque, Bloqueios e Ataques
    double somaS=0,somaB=0,somaA=0;
    double somaS1=0,somaB1=0,somaA1=0;
    double tS=0.00, tB=0.00, tA=0.00; //total de Saque, Bloqueios e Ataques
    char nomejogador;
    
    scanf("%d",&jogadores);
    
    for(i=1;i<=jogadores;i++){
        scanf("%s",&nomejogador);
        scanf("%d %d %d",&S,&B,&A);
        scanf("%d %d %d",&S1,&B1,&A1);
        
        somaS=somaS+S;
        somaS1=somaS1+S1;
        somaB=somaB+B;
        somaB1=somaB1+B1;
        somaA=somaA+A;
        somaA1=somaA1+A1;
    }
 	tS=100/somaS;
    tB=100/somaB;
    tA=100/somaA;
    
 	printf("Pontos de Saque: %.2lf %%.\n",tS*somaS1);
	printf("Pontos de Bloqueio: %.2lf %%.\n",tB*somaB1);
	printf("Pontos de Ataque: %.2lf %%.\n",tA*somaA1);
	
    return 0;
}
