#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
/*
	// Nhap vao ky tu thuong
	char ch;
	printf("\n Nhap ky tu thuong tu (a-z):");
	scanf("%c", &ch);
	if(ch<'a' || ch>'z')
		printf("Ky tu khong thuoc ky tu thuong");
	else
		switch(ch)
		{
			case 'a':
			case 'b':
			case 'i':
			case 'o':
			case 'u':
				printf("\n Day la ky tu thuong");
				break;
			case 'z':
				printf("\n Ky tu nhap vao la z");
				break;
			default:
				printf("Ky tu nhap vao khong dung");
				break;
		}
*/
/*
	// nhap ATM
	int pin, cardid, i, tienrut, tienck;
	int tienconlai=10000000;
	printf("Nhap vao ma PIN:");
	scanf("&d",&pin);
	printf("Nhap vao card ID:");
	scanf("%d",&cardid);
	if(pin==pin&& cardid==ID)
	{
		printf("-----------------\n");
		printf("1. Rut tien. \n");
		printf("2. Chuyen khoan. \n");
		printf("3. Xem so du. \n");
		printf("4. Ket thuc chuong trinh. \n");
		printf("-----------------\n");
		scanf("%d", &i);
		switch(i)
			case 1=1:
	}
	
	*/
	/*
	int count;
	printf("\t This is a \n");
	for (count=1; count<=6; count++)
	{
		printf ("\n\t\t nine");
	}
	printf ("\n\t\t world. \n");	
	*/
	// in so chan tu 0 den 100
	int i,min, max,a;
	printf("Nhap so min:");
	scanf("%d",&min);
	printf("\nNhap so max:");
	scanf("%d",&max);
	
	for (i=min;i<=max; i++)
	{
		a= i%2;
		if(a==0)
			printf("%d\n",i);
	}
	return 0;
}
