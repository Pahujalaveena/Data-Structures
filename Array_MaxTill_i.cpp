// Online C++ compiler to run C++ program online
  #include <bits/stdc++.h>
using namespace std;

int main() {
    int n,mx=-1999999;
    cout<<"Enter the size of array!"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array!"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   for(int i=0;i<n;i++)
   {
       mx=max(mx,arr[i]);
       cout<<"max till "<<i<<"th index is:"<<mx<<endl;
   }
   
    

    return 0;
}