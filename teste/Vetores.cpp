#include <stdio.h>

int main(){
	
	float vetor[3], media=0;
	
	for(int i=1;i<=3;i++){
		scanf("%f",&vetor[i]);
		media=media+vetor[i];
	}
	media=media/3;
	
	printf("Média do aluno: %.1f\n",media);
	if(media>=6){
		printf("Aluno aprovado\n");
	}
	else{
		printf("Aluno reprovado\n");
	}
	
	return 0;
}
