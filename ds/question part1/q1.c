/*
WAP to Reverse an Array without using extra memory and print the reversed Array. 
*/
#include<stdio.h>
void reverse(int *arr,int n){
    int i=0,j=n-1;
    while(i<j){
        int t = arr[i];
        arr[i]=arr[j];
        arr[j]=t;
        i++,j--;
    }
}
int main(){
    int arr[8];
    for(int i=0;i<8;i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr,8);
    for(int i=0;i<8;i++){
        printf("%d ",arr[i]);
    }
}