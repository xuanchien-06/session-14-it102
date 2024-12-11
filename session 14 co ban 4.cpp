#include<stdio.h>
#include<string.h>

//khai bao ham
void string();

//ham main
int main(){
	string();
	return 0;
}

//logic ham
void string(){
	char chuoi[]="hello work";
	char x;
	int sokitu=0;
	printf("Nhap vao 1 ki tu bat ki: ");
	scanf("%c",&x);
	for(int i=0;i<strlen(chuoi);i++){
		if(chuoi[i]==x){
			sokitu++;
		}
	}
	printf("ky tu %c xuat hien %d lan",x,sokitu);
}
