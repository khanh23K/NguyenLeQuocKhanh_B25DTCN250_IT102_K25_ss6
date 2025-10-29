#include <stdio.h>
int main(){
float n,m;
int a;
	printf("nhap vao so nguyen thu nhat: ");
	scanf("%f",&n);
	printf("nhap vao so nguyen thu hai: ");
	scanf("%f",&m);
	
	do{
		printf("\n1. Tinh tong 2 so");
		printf("\n2. Tinh hieu 2 so");
		printf("\n3. Tinh tich 2 so");
		printf("\n4. Tinh thuong 2 so");
		printf("\n5. Thoat");
		printf("\nlua chon cua ban:");
		scanf("%d",&a);
		switch(a){
			case 1:
				printf("Tong 2 so la: %.2f\n",n+m);
				break;
			case 2:
				printf("Hieu 2 so la:%.2f\n",n-m);
				break;
			case 3:
				printf("Tich 2 so la: %.2f\n",n*m);
				break;
			case 4:
				printf("Thuong 2 so la: %.2f\n",n/m);
				break;
			case 5:
			 printf("Da thoat khoi chuong trinh\n");
			break;
			default:
				printf("lua chon ko hop le. vui long lua chon (1-5).\n");
			
		}
		
	}while(a!=5);
	return 0;
}
