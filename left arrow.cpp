#include<stdio.h>

int main(){
	int i,n,j,k,l;
	printf("Enter no. of rows: ");
	scanf("%d",&n);
	i = 0;
	while(i<n){
		j = 0;
		while(j<n-i){
			printf(" ");
			j+=1;
		}
		k=0;
		while(k<n){
			printf("*");
			k+=1;
		}
		printf("\n");
		i=i+1;
	}
	l=2;
	while(l<n+1){
		j=0;
		while(j<l){
			printf(" ");
			j+=1;
		}
		k=0;
		while(k<n){
			printf("*");
			k+=1;
		}
		printf("\n");
		l+=1;
	}
	
	return 0;
}
