#include <stdio.h>
 
int main() {
 
    float pessoa;
    scanf("%f",&pessoa);
    if(pessoa>0 && pessoa <=2000){
        printf("Isento\n");
    }
    else if(pessoa>2000 && pessoa <=3000){
        pessoa=pessoa-2000;
        pessoa=(pessoa*0.08);
        printf("R$ %.2f\n",pessoa);
    }
    else if(pessoa>3000 && pessoa <=4500){
        pessoa=(pessoa*0.18);
        printf("R$ %.2f\n",pessoa);
    }
    else if(pessoa>4500){
        pessoa=(pessoa*0.28);
        printf("R$ %.2f\n",pessoa);
    }
    
 
    return 0;
}
