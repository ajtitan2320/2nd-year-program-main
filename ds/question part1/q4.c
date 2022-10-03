//WAP to Right Rotate an Array and show their all outcomes.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],copy[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        copy[(i+1)%n]=arr[i];
    }
    for(int i=0;i<n;i++){
            printf("%d ",copy[i]);
    }
    return 0;
}