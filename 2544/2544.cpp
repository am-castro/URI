#include <stdio.h>

int main (){
    int N=0,naruto=0;
    while(scanf("%d", &N)==1){
        for(N=N;N>=2;N=N/2){
            naruto++;
        }
    printf("%d\n", naruto);
    naruto=0;
    }
    return 0; 
}
