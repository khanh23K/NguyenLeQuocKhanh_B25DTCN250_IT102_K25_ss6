#include <stdio.h>
int main(){
	int N,i,Tong=0;
	printf("nhap vao 1 so nguyen duong N: ");
	scanf("%d",&N);
	
	if(N<0){
		printf("\nSai dinh dang");
	}else{
		while(N>=i){
			Tong =Tong+i;
			i++;
		}
	}
	printf("Tong cac so: %d",Tong);
	return 0;
}

