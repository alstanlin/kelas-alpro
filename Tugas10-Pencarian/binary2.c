#include <stdio.h>

int main(){
    int arr[]={20,30,40,50,60,70};
    int n=sizeof(arr)/sizeof(int);
    int index=-1;
    int find=40;

    int mid;
    int low=0, high=n;
    while(low<=high){
        mid=(low+high)/2;
        if(find<arr[mid]){
            high=mid-1;
        }else if(find==arr[mid]){
            index=mid;
            break;
        }else{
            low=mid+1;
        }
    }
    if(index==-1){
        printf("Data tidak ditemukan\n");
    }else{
        printf("Data berada pada index ke-%d\n", index);
    }
    return 0;
}
