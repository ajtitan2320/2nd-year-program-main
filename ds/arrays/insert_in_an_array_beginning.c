#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[20],val,n;
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
    for(int i=n;i>=1;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=val;
    n++;
    printf("Altered Array\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}