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
    arr[n++]=val;
    cout<<"Altered Array"<<endl<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}