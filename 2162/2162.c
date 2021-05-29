/*
	@autor: Veganon;
	@data: 26/05/2021;
	@nome: URI 2162 - Picos e Vales;
*/

#include <stdio.h>
 
int main() {
	
	int N=0, pico=0, i=0;
	scanf("%d",&N);
 	int H[N];
 	
	for(i=1; i<=N; i++){
		scanf("%d",&H[i]);
	}
	for(i=2;i<=N;i++){
		if(H[i-1]<H[i]){
			printf("1\n");
		}	
	}
	
	return 0;
}
