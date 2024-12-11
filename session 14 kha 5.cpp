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
	char chuoi[50];
	int sokitu;
	printf("Nhap chuoi ki tu: ");
	fgets(chuoi , 50 , stdin);
	fputs(chuoi , stdout);
	for(int i = 0; i < strlen(chuoi) ; i++){
		if(chuoi[i] == ' ' || sokitu == 1){
			sokitu++;
		}
	}
	printf("Chuoi ki tu gom %d tu ", sokitu);
}
