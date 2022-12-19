#include<iostream>
#include<conio.h>
#define max 10
using namespace std;
int Stack[max],top=-1;

void Push();
void Pop();
void Display();
void Search();

int main()
{
	int choice,ch;
	
	cout<<"............Stack............."<<endl;
	cout<<"1.Push"<<endl;
	cout<<"2.Pop"<<endl;
	cout<<"3.Search"<<endl;
	cout<<"4.Disply"<<endl;
	cout<<"5.Exit"<<endl;
	
	while(ch!=5)
	{
		cout<<"Enter your choice:";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				{
					Push();
					break;
				}
			case 2:
				{
					Pop();
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

void Pop()
{
	int item;
	
	if(top==-1)
	{
		cout<<"Stack is underflow"<<endl;
	}
	else
	{
		item=Stack[top];
		top=top-1;
	}
}

void Push()
{
	int item;
	
	if(top>=max)
	{
		cout<<"Stack is overflow!"<<endl;
	}
	else
	{
		cout<<"Enter the element you want to push:";
		cin>>item;
		top=top+1;
		Stack[top]=item;
	}
}

void Search()
{
	int sea;
	
	cout<<"Enter the element you want to search:";
	cin>>sea;
	for(int i=0;i<max;i++)
	{
		if(Stack[i]==sea)
		{
			cout<<sea<<" is found on "<<i+1<<"th index!"<<endl;
		}
	}
}

void Display()
{
	cout<<"The stack is:"<<endl;
	
	for(int i=0;i<max;i++)
	{
		cout<<Stack[i]<<" ";
	}
}

