/*
	@autor: Veganon;
	@data: 26/05/2021;
	@nome: URI 2162 - Picos e Vales;
*/

#include <stdio.h>
 
int main() {
	
	int N=0, pico=0;
	scanf("%d",&N);
 	int H[N];
 	
 	if(N==1)
 		printf("%d",N);
	else{
		for(int i=0; i<N; i++){
	 		scanf("%d",&H[i]);
		}
		for(int i=0; i<N; i++){	
			printf("\n ** Vale ** \n **   %d  **",H[i]);
		}	
	}
	
	return 0;
}
