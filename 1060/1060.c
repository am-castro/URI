#include <stdio.h>
#include <math.h>

int main() {
 
    float A, vet[6];
    int i, g=0;
    for(i=0;i<6;i++){
 		scanf("%f",&vet[i]);
	}
    for(i=0;i<6;i++){
        if(vet[i]>0){
            g++;
        }
    }
    printf("%d valores positivos\n",g);
    return 0;
}
