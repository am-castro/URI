#include <stdio.h>
 
int main() {

    float A=0,B=0,C=0,t=0,temp;
    scanf("%f %f %f",&A, &B, &C);
    
	temp=A;
	if(B>A && B>C){
		A=B;
		B=temp;
	}
	if(C>A && C>B){
		A=C;
		C=temp;
	}
	if(A<B+C){
		t=A+B+C;
        printf("Perimetro = %.1f\n",t);
	}
	else{		
        t=(B+C)/2;
		printf("Area = %.1f\n",t);
	}
    
    return 0;
}
