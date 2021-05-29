#include<stdio.h>

int main(){

    //Declaração de variaveis
    int horaI=0, minI=0, horaF=0, minF=0, horaT=0, minT=0;
    //Leitura de variaveis
    scanf("%d %d %d %d", &horaI, &minI, &horaF, &minF);

    if(horaI==horaF && minI==minF){
        	while(horaI!=24){
				horaI++;
				horaT++;
			}
	        while(horaF!=0){
	        	horaF--;
	        	horaT++;
			}
    }
	else{
		if(horaI>horaF){ //5>4
			while(horaI!=24){
				horaI++;
				horaT++;
			}
	        while(horaF!=0){
	        	horaF--;
	        	horaT++;
			}
			if(minI>minF){ //5>4
				horaT--;
				while(minI!=60){
					minI++;
					minT++;
				}
				while(minF!=0){
					minF--;
					minT++;
				}
			}
			if(minI<minF){ //4>5
				minT=minF-minI;
			}
		}
		if(horaI<horaF){ //4>5
			while(horaI!=0){
				horaI--;
				horaT++;
			}
	        while(horaF!=24){
	        	horaF++;
	        	horaT++;
			}
			if(minI>minF){ //5>4
				horaT--;
				while(minI!=60){
					minI++;
					minT++;
				}
				while(minF!=0){
					minF--;
					minT++;
				}
			}
			if(minI<minF){ //4>5
				minT=minF-minI;
			}
		}
		if(horaI==horaF){
			if(mi>mf){
				i=24;
				i--;
				if(mf>=mi){
					m=mf-mi;
					printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",i,m);
				}
				if(minI>minF){
					while(minF!=0){
						minF--;
						minT++;
					}
					while(minI!=60){
						minI++;
						minT++;
					}
				}
			}
			else if(minF>minI){
				minT=0;
				if(minF>=minI){
					minT=minF-minI;
					printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",i,m);
				}
				if(minI>minF){
					while(minF!=0){
						minF--;
						minT++;
					}
					while(minI!=60){
						minI++;
						minT++;
					}
				}
			}
		}
	}
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horaT, minT);
	return 0;
}
