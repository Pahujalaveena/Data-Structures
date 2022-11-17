#include<iostream>
using namespace std;
int main()
{ 
    int n,arr[n];
    cout<<"Enter the size of array!"<<endl;
    cin>>n;
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Elements in reverse order!"<<endl;
    for(int i=(n-1);i<0;i--)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}