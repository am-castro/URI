#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
 
    int N=0,atacked=0,i=1, total=0;
    
	scanf("%i",&N);
    int e[N];

 	for(i;i<=N;i++){
 		scanf("%d",&e[i]);
	}
	for(i=1;i<=N;i++){
		total+=e[i];
		
		if(e[i]%2==0){
			if(e[i]!=0){
				e[i]=e[i]-1;
				atacked++;
			}
			else if(e[i]==0)
				i=N;
		}
		else{
			i--;
		}
	}
		total=total-atacked;
	
	printf("%d %d",atacked,total);
	
 	getch();
    return 0;
}
