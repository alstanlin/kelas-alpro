#include <stdio.h>
#include <stdlib.h>

int intArray[20];

void selectionSort(int n){
    int indexMin,temp;
    
    for(int i=0;i<n-1;i++){
        indexMin=i;
        for(int j=i+1;j<n;j++){
            if(intArray[j]<intArray[indexMin]){
                indexMin=j;
            }
        }
        if(indexMin!=i){
            temp=intArray[indexMin];
            intArray[indexMin]=intArray[i];
            intArray[i]=temp;
        }
    }
}

int main(){
    int n;

    printf("Input Jumlah Bilangan: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Bilangan ke %d: ",i+1);
        scanf("%d", &intArray[i]);
    }

    selectionSort(n);
    for(int i=0;i<n;i++){
        printf("%d", intArray[i]);
    }
    return 0;
}