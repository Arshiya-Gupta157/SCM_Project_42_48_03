#include<stdio.h>

int main(){
	int i,n,j,k;
	printf("Enter no. of rows: ");
	scanf("%d",&n);
	i = 0;
	while(i<=n){
		j=0;
		while (j<=i){
			printf(" ");
			j = j+1;
		}
		
		k=0;
		while(k<=n-1){
			printf("* ");
			k=k+1;
		}
		printf("\n");
		i = i+1;
	}
	
	return 0;
}
