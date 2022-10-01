#include<iostream>
using namespace std;
int main()
{
    int arr[20],val,n;
    cout<<"Enter The Size Of Array = ";
    cin>>n;
    cout<<"Enter The Array Elements = ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl<<endl<<endl;
    cout<<"Original Array"<<endl<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Enter The Value = ";
    cin>>val;
    for(int i=n;i>=1;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=val;
    n++;
    cout<<"Altered Array"<<endl<<endl;
    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}