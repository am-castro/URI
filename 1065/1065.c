#include <stdio.h>
#include <math.h>

int main() {
 
    int i, g=0;
    int vet[5];
    for(i=0;i<5;i++)
 		scanf("%i",&vet[i]);
	
    for(i=0;i<5;i++){
        if(vet[i]%2==0){
            g++;
        }
    }
    printf("%d valores pares\n",g);
    return 0;
}
