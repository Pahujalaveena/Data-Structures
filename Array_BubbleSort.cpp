// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of array!"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array!"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int counter=1;
    while(counter<n)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
        counter++;
    }
    cout<<"the sorted array is !"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i]<<endl;
    }
    

    return 0;
}