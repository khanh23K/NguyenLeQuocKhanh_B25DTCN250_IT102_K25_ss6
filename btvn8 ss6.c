#include <stdio.h>
int main(){
	int a,b;
	
	printf("nhap so nguyen duong thu nhat: ");
	scanf("%d",&a);
	printf("nhap so nguyen duong thu hai:");
	scanf("%d",&b);
	
	int c=a ,d = b;
	int r= c%d;
	if(a<=0||b<=0){
		printf("\nko phai so nguyen duong yeu cau nhap lai");
	}else{
	while(r!=0){
		c = d;
		d = r;
		r = c%d;
	}
	int ucln = d;
	int bcnn = (a*b)/ucln;
	printf("UCLN cua %d la %d\n",a,b,ucln);
	printf("BCNN cua %d la %d\n",a,b,bcnn);
}
	return 0;
}

