#include <stdio.h>

//khai bao ham
void string();

//ham main
int main() {
	string();
    return 0;
}

//logic ham
void string(){
	char chuoi[100];
    int sokitu = 0;
    printf("Nhap chuoi ky tu bat ky: ");
    fgets(chuoi, 100, stdin); 
    for (int i = 0; chuoi[i] != '\0'; i++) {
        if ((chuoi[i] >= 'A' && chuoi[i] <= 'Z') || (chuoi[i] >= 'a' && chuoi[i] <= 'z')) {
            sokitu++;
        }
    }
    printf("Ky tu la chu cai trong chuoi gom: %d ki tu", sokitu);
}
    
