#include <stdio.h>
 
int main() {
 
    int N=1,QD=0,potencia=1;
    
    while(scanf("%d",&N)!=EOF){
        if(N==1){
        	printf("0\n");
		}
		else{
			while(QD!=N){
				QD++;
				potencia=potencia*N;
			}
		}
    }
 
    return 0;
}
