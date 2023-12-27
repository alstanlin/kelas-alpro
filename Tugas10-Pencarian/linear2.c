#include <stdio.h>
#define MAX_ELEMEN 100

int main(){
    int BIL[MAX_ELEMEN];
    int n, x;

    printf("Masukkan Banyaknya Elemen yang Diinginkan: ");
    scanf("%d", &n);

    for(int j=0;j<n;j++){
        printf("BIL[%d]= ", j);
        scanf("%d", &BIL[j]);
    }
    printf("Masukkan Nilai yang akan Dicari: ");
    scanf("%d", &x);

    int k=0;
    while ((k<n)&&(BIL[k]!=x)){
        k++;
    }

    if(BIL[k]==x){
        printf("%d Ditemukan dalam Array, yaitu pada Index ke-%d", x, k);
    }else{
        printf("%d Tidak Ditemukan dalam Array", x);
    }
    return 0;
}
