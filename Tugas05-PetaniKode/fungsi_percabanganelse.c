#include <stdio.h>
#include <string.h>

void main(){
    char password[30];

    printf("==========Program Login==========\n");
    printf("Masukan password: ");
    scanf("%s", &password);

    if(strcmp(password, "kopi")==0 ){
        printf("Selamat datang bos!\n");
    }else{
        printf("Password salah, coba lagi!\n");
    }

    printf("Terimakasih sudah menggunakan aplikasi ini!\n");
}