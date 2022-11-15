#include<iostream>
using namespace std;
int Stack[100],n=100,Top=-1;
void Push();
void Pop();
void Display();
int main()
{
    int choice;
    cout<<"...............Select your options.............."<<endl;
    cout<<"\n1.Push Operation\n2.Pop Operstion\n3.Display\n4.Exit"<<endl;
    do{
        cout<<"Enter your option"<<endl;
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
                Display();
                break;
            }
            case 4:
            {
              cout<<"Thank You!!!"<<endl;
              break;
            }
            default:
            cout<<"Enter Valid choice!!"<<endl;
        }
    }while(choice<=5);
    
    return 0;
}

void Push()
{
    int ele;
    if(Top==n-1)
    {
       cout<<"Stack is overflow!"<<endl;
    }
    else{
        cout<<"Enter the element you want to push into the stack!"<<endl;
        cin>>ele;
        Top++;
        Stack[Top]=ele;
    }
}
void Pop()
{
    int value;
    if(Top==-1)
    {
        cout<<"Stack is underflow!"<<endl;
    }
    else{
         value=Stack[Top];
         Top--;
         cout<<"The deleted element is :"<<value<<endl;
    }
}
void Display()
{ 
    if(Top==-1)
    cout<<"The stack is empty!!"<<endl;
    else{
        cout<<"The Stack is:"<<endl;
        for(int i=0;i<=Top;i++)
         {
          cout<<Stack[i]<<" ";
         }
    }
}