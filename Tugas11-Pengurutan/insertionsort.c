#include <stdio.h>
#include <stdlib.h>

int main(){
    int data[20],temp,i,j,n;
    printf("Input Banyaknya Bilangan: ");
    scanf("%d", &n);
    printf("Pengurutan berdasarkan Insertion sort\nMasukkan %d elements: \n", n);
    for(i=0;i<n;i++){
        printf("Input angka ke %d: ",i+1);
        scanf("%d", &data[i]);
    }
    for(i=1;i<n;i++){
        temp=data[i];
        j=i-1;
        while((temp<data[j])&&(j>=0)){
            data[j+1]=data[j];
            j=j-1;
        }
        data[j+1]=temp;
    }

    printf("Setelah Sorting: ");
    for(i=0;i<n;i++){
        printf("%d", data[i]);
    }
}