#include <stdio.h>
int main(){
float a,b,c;
int m=1;
int n;
	printf("nhap vao so nguyen thu nhat: ");
	scanf("%f",&a);
	printf("nhap vao so nguyen thu hai: ");
	scanf("%f",&b);
	printf("nhap vao so nguyen thu ba: ");
	scanf("%f",&c);
	do{
		printf("\n1. Tinh tong 3 so");
		printf("\n2. trung binh cong 3 so");
		printf("\n3. so nho nhat 3 so");
		printf("\n4. so lon nhat 3 so");
		printf("\n5. Thoat");
		printf("\nlua chon cua ban:");
		scanf("%d",&n);
		switch(n){
			case 1:
				printf("Tinh tong 3 so: %.2f\n",a+b+c);
				break;
			case 2:
				printf("trung binh cong 3 so:%.2f\n",(a + b + c) / 3.0);
				break;
			case 3:
				if(!m){
					printf("nhap lai so");
				}else{
					int min=a;
					if(b < min) min=b;
					if(c < min) min=c;
					printf("so nho nhat la %d\n",min);
				}
			case 4:
			if(!m){
					printf("nhap lai so");
				}else{
					int max=a;
					if(b > max) max=b;
					if(c > max) max=c;
					printf("so nho nhat la %d\n",max);
				}
			case 5:
			 printf("Da thoat khoi chuong trinh\n");
			break;
			default:
				printf("lua chon ko hop le. vui long lua chon (1-5).\n");		
	}
	}while(n!=5);
	return 0;
	}
	

