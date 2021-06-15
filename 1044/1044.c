#include <stdio.h>
 
int main() {
 
    int A, B,i,g=0;
    scanf("%d %d",&A, &B);
    
    if(A>B){
    	if(A%B==0){
			g=1;	
		}
	}
	else if(B>A){
    	if(B%A==0){
    		g=1;
    		
		}
	}
    if(A==B){
    	g=1;
    	
	}
	if(g==1){
		printf("Sao Multiplos\n");  	
	}
	else{
		printf("Nao sao Multiplos\n"); 
	}
     
    return 0;
}
