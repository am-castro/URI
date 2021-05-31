#include <stdio.h>

int main(){
	
	int T=0, i=0;
	while(scanf("%i",&T)!=EOF){
		double N[T];
		for(i=1; i<=T; i++){
			scanf("%lf",&N[i]);
		}
		for(i=1; i<=T; i++){
			if(N[1]>N[i]){
				N[1]=N[i];
				printf("%.2f\n",N[i]);
			}
		}
	}
    return 0;
}
