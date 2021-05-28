#include <stdio.h>
#include <conio.h>

int main() {
 
    int N=0,atacked=0;
    printf("Digite a quantidade de estrelas:\n");
    scanf("%d",&N);
    
    int i[N];

 	for(int v=1;v<=N;v++){
 		printf("Digite quantidade de carneiros na estrela %d: \n",v);
 		scanf("%d",&i[v]);
	}
	for(int v=1;v<=N;v++){
/*		printf("Quantidade de carneiros em %d eh: %.1f\n",v,i[v]); */
		if(i[v]%2==0){
			atacked++;
			printf("Sou par\n");
		}
		else{
			atacked++;
			printf("Sou impar\n");
		}
	}
	printf("%d %d",N,atacked);
	
 	getch();
    return 0;
}