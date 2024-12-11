#include<stdio.h>
#include<string.h>

//khai bao ham
void inchuoi();

//ham main
int main(){
	inchuoi();
	return 0;
}

//logic ham
void inchuoi(){
	char chuoi[]="hello work";
	for(int i=0;i<strlen(chuoi);i++){
		printf("%2c",chuoi[i]);
	}
}
