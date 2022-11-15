#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,arr[n],ele;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	cout<<"Enter the elements of array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element you want to find"<<endl;
	cin>>ele;
	for(int i=0;i<n;i++)
	{
	    if(arr[i]==ele)
	    {
	        cout<<ele<<" is found on"<<i<<" index"<<endl;
	    }
	    else
	    {
	        return -1;
	    }
	}
}