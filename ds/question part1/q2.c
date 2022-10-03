//WAP to find all pairs from an Array where sum of pairs is equal to 30.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==30){
                printf("%d %d\n",arr[i],arr[j]);
            }
        }
    }
    return 0;
}