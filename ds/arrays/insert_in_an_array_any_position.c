#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[20],val,n,pos;
    printf("Enter The Size Of Array = ");
    scanf("%d",&n);
    printf("Enter The Array Elements = ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }printf("\n\n");
    printf("Original Array\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n\n");
    printf("Enter The Value = ");
    scanf("%d",&val);
    printf("Enter The position = ");
    scanf("%d",&pos);
    for(int i=n;i>=pos-1;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=val;
    n++;
    printf("Altered Array\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}