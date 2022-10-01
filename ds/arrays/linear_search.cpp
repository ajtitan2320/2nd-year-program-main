#include<iostream>
using namespace std;
int main()
{
    int arr[30], Target,n,f=0,index;
    cout<<"Enter The Size = ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter The Target = ";
    cin>>Target;
    for(int i=0;i<n;i++){
        if(arr[i]==Target){
            f=1;
            index=i;
            break;
        }
    }
    if(f==0){
        cout<<"Not Present";
    }
    else{
        cout<<"Present at "<<index<<" index";
    }
    return 0;
}