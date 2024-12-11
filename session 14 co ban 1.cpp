#include<stdio.h>
#include<string.h>

//khai bao ham
void inputstring();

//ham main
int main(){
	inputstring();
	return 0;
}

//logic ham
void inputstring(){
	char nhapchuoi[50];
	printf("Nhap chuoi ky tu: ");
	fgets(nhapchuoi,50,stdin);
	fputs(nhapchuoi,stdout);
	int len = strlen(nhapchuoi);
	printf("Do dai cua chuoi la: %d",len);
}
