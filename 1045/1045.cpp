#include <stdio.h>
 
int main() {

    float A=0,B=0,C=0;
    scanf("%f %f %f",&A, &B, &C);
    
	float temp=A;
	if(B>A && B>C){teste
		A=B;
		B=temp;
	}
	if(C>A && C>B){
		A=C;
		C=temp;
	}
	if(A>B+C){
		printf("NAO FORMA TRIANGULO\n");
	}
	else{		
		if(A*A==B*B+C*C){
			printf("TRIANGULO RETANGULO\n");
		}
		if(A*A>B*B+C*C){
			printf("TRIANGULO OBTUSANGULO\n");
		}
		if(A*A<B*B+C*C){
			printf("TRIANGULO ACUTANGULO\n");
		}
		if(A==B && B==C){
			printf("TRIANGULO EQUILATERO\n");
		}
		if(A==B && B!=C || A==C && C!=B || B==C && C!=A){
			printf("TRIANGULO ISOSCELES\n");
		}
	}
    
    return 0;
}
