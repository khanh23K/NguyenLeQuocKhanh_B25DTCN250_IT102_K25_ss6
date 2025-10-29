#include <stdio.h>
int main(){
	int i,j;
	do{
		printf("nhap vao so nguyen (1-10): ");
		scanf("%d",&i);
	
		if(i<1 || i>10){
			printf("Nhap lai n\n");
		}
	}while(i<1 || i>10);
	
	printf("\nBang cuu chuong cua %d",j);
	for(j = 1;j<=10;j++){
		printf("%d x %d = %d\n",i,j,i*j);
 	}
 	return 0;
}

