#include<bits/stdc++.h>
using namespace std;
int ele;
int binarySearch(int arr[],int n,int key)
{
    int s=0;
    int e=n;
    
    while(s<=e)
    {
        int mid=(e+s)/2;
        if(arr[mid]==ele)
        {
            cout<<"Found on :"<<mid<<"\tindex"<<endl;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return -1;
}
int main()
{
	int n,arr[n];
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	cout<<"Enter the elements of array in ascending order"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element you want to find"<<endl;
	cin>>ele;
	cout<<binarySearch(arr,n,ele)<<endl;

}