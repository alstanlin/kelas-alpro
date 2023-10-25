#include <stdio.h>

void main(){
    printf("===========Program Pembayaran==========\n");
    int total_belanja=0;

    printf("Inputkan total belanja: ");
    scanf("%i", &total_belanja);

    if(total_belanja>100000){
        printf("Selamat, Anda mendapatkan hadiah!\n");
    }

    printf("Terimakasih sudah berbelanja di toko kami\n\n");
}