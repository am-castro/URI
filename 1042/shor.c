#include <stdio.h>
 
int main() {

    int A=0,B=0,C=0;
    scanf("%i %i %i",&A, &B, &C);
    
	if(A>B && A>C){
		if(B>C){
			printf("%i\n%i\n%i\n\n",C,B,A);
			printf("%i\n%i\n%i\n",A,B,C);
		}
		if(C>B){
			printf("%i\n%i\n%i\n\n",B,C,A);
			printf("%i\n%i\n%i\n",A,B,C);
		}
	}
	if(B>A && B>C){
		if(A>=C){
			printf("%i\n%i\n%i\n\n",C,A,B);
			printf("%i\n%i\n%i\n",A,B,C);
		}
		if(C>A){
			printf("%i\n%i\n%i\n\n",A,C,B);
			printf("%i\n%i\n%i\n",A,B,C);
		}
	}
	if(C>A && C>B){
		if(A>=B){
			printf("%i\n%i\n%i\n\n",B,A,C);
			printf("%i\n%i\n%i\n",A,B,C);
		}
		if(B>A){
			printf("%i\n%i\n%i\n\n",A,B,C);
			printf("%i\n%i\n%i\n",A,B,C);
		}
	}
	
    return 0;
}
