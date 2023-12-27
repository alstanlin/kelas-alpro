#include <stdio.h>
#define SIZE 100

size_t linearSearch(const int array[], int key, size_t size);

int main(void){
    int a[SIZE];
    for(size_t x=0; x<SIZE; x++){
        a[x]=2*x+1;
    }

    printf("Tuliskan Bilangan yang Dicari: ");
    int searchKey;
    scanf("%d", &searchKey);

    size_t index=linearSearch(a, searchKey, SIZE);

    if(index!=-1){
        printf("Menemukan Nilai pada Index %d\n", index);
    }else{
        puts("Nilai Tidak Ditemukan");
    }
}

size_t linearSearch(const int array[], int key, size_t size){
    for(size_t n=0; n<size; n++){
        if(array[n]==key){
            return n;
        }
    }
    return -1;
}
