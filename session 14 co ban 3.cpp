#include <stdio.h>
#include <string.h>

//khai bao ham
void string();

//ham main
int main(){
	string();
	return 0;
}

//logic ham
void string(){
	char chuoi[100];
	printf("Nhap chuoi ki tu : ");
	fgets(chuoi,100,stdin);
	printf("Chuoi dao nguoc: ");
	for(int i=strlen(chuoi) ; i>=0 ; i--){
		printf("%c", chuoi[i]);
	}
}
