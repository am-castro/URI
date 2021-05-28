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
		if(horaI==horaF){
			while(horaI!=24){
				horaI++;
				horaT++;
			}
	        while(horaF!=0){
	        	horaF--;
	        	horaT++;
			}
			if(minF>minI){
				horaT--;
				while(minF!=60){
					minI++;
					minT++;
				}
		        while(minI!=0){
		        	minF--;
		        	minT++;
				}
		    }
		    else if(minI>minF){
				horaT--;
				while(minF!=0){
					minI++;
					minT++;
				}
		        while(minI!=60){
		        	minF--;
		        	minT++;
				}
		    }
		}
		else if(horaF>horaI){
			while(horaI!=0){
				horaI--;
				horaT++;
			}
	        while(horaF!=24){
	        	horaF++;
	        	horaT++;
			}
			if(minF>minI){
				while(minI!=0){
		        	minF++;
		        	minT++;
				}
		        while(minF!=60){
		        	minF--;
		        	minT++;
				}
		    }
		    else if(minF<minI){
				while(minI!=60){
		        	minF++;
		        	minT++;
				}
		        while(minF!=0){
		        	minF--;
		        	minT++;
				}
		    }
	    }
	    else if(horaI>horaF){
			while(horaI!=24){
				horaI++;
				horaT++;
			}
	        while(horaF!=0){
	        	horaF--;
	        	horaT++;
			}
			if(minF>minI){
				horaT--;
				while(minI!=0){
		        	minF++;
		        	minT++;
				}
		        while(minF!=60){
		        	minF--;
		        	minT++;
				}
		    }
		    else if(minF<minI){
				while(minI!=0){
		        	minF++;
		        	minT++;
				}
		        while(minF!=60){
		        	minF--;
		        	minT++;
				}
		    }
	    }
	}
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horaT, minT);
	return 0;
}
