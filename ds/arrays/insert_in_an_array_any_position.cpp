#include<iostream>
using namespace std;
int main()
{
    int arr[20],val,n,pos;
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
    cout<<"Enter The Position = ";
    cin>>pos;
    for(int i=n;i>=pos-1;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=val;
    n++;
    cout<<"Altered Array"<<endl<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}