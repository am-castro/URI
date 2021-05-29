#include <stdio.h>
#include <conio.h>

int main() {
 
    int N=0,atacked=0,v=1;
    scanf("%d",&N);
    int i[N];

 	for(v=1;v<=N;v++){
 		scanf("%d",&i[v]);
	}
	for(v=1;v<=N;v++){
		if(i[v]%2==0){
			for(v=i[v];v>0;v--){
				i[v]--;
				atacked++;
			}
		}else{
			for(v=i[v];v<i[v];v++){
				i[v]++;
				atacked++;
			}
		}
	}
	
	printf("%d %d",N,atacked);
	
 	getch();
    return 0;
}
