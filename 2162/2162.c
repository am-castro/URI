/*
	@autor: Veganon;
	@data: 26/05/2021;
	@nome: URI 2162 - Picos e Vales;
*/

#include <stdio.h>
 
int main() {
	
	int N=0, pico=1, i=0, j=0;
	scanf("%d",&N);
 	int H[N];
 	for(i=1; i<=N; i++){
		scanf("%d",&H[i]);
	}
 	if(N==1){
 		printf("%d\n",pico);	
	}
	else if(N==2){
		pico=0;
 		printf("%d\n",pico);	
	}
	else if(N>=3){
		for(i=1; i<=N; i++){
			if(H[i]==H[i+1]){
				pico=0;
				break;
			}
			else if(H[i]>H[i+1] && H[i+1]>H[i+2]){
				pico=0;
				break;
			}
			else if(H[i]<H[i+1] && H[i+1]<H[i+2]){
				pico=0;
				break;
			}
		}
		
		printf("%d\n",pico);
	}
	
	return 0;
}
