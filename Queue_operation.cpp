#include<iostream>
#include<conio.h>
#define max 10
using namespace std;
int Queue[max],rear=-1,front=-1;

void Enque();
void Deque();
void Display();
void Search();

int main()
{
	int choice,ch;
	
	cout<<"............Queue............."<<endl;
	cout<<"1.Enque"<<endl;
	cout<<"2.Deque"<<endl;
	cout<<"3.Search"<<endl;
	cout<<"4.Disply"<<endl;
	
	while(ch!=5)
	{
		cout<<"Enter your choice:";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				{
					Enque();
					break;
				}
			case 2:
				{
					Deque();
					break;
				}
			case 3:
				{
					Search();
					break;
				}
			case 4:
				{
					Display();
					break;
				}
			case 5:
				{
					cout<<"Thank youu!!"<<endl;
					break;
				}
			default:
				{
					cout<<"Invalid input!"<<endl;
				}
				
	    }
	}
}

void Enque()
{
	int ins;
	
	cout<<"Enter the element you want to insert:";
	cin>>ins;
	if(Queue[rear]>=max)
	{
		cout<<"Queue is overflow!"<<endl;
	}
	else
	{
		rear=rear+1;
		Queue[rear]=ins;
	}
}

void Deque()
{
	int del;
	
	
    if(Queue[front]==-1)
    {
    	cout<<"Queue is underflow!"<<endl;
	}

	else if(front>=rear)
	{
		cout<<"Queue is underflow!"<<endl;
	}
	else
	{
		
		del=Queue[front];
		front=front+1;
	}
}

void Display()
{
	cout<<"The array elements are:"<<endl;
	for(int i=0;i<max;i++)
	{
		cout<<Queue[i]<<" ";
	}
}

void Search()
{
	int sea;
	
	cout<<"Enter the element you want to search!";
	cin>>sea;
	
	for(int i=0;i<max;i++)
	{
		if(Queue[i]==sea)
		{
			cout<<sea<<" is found on "<<i+1<<"th index"<<endl;
		}
	}
}