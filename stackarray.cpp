
//stack using array...
#include<iostream>
using namespace std;
#define MAX 5
int top=-1;
int stack_arr[MAX];
void push();
void pop();
void display();

int main()
{
	int choice;
	while(1){
		
		cout<<"\n1.push";
		cout<<"\n2.pop";
		cout<<"\n3.display";
		cout<<"\n4.exit";
		cout<<"\nenter ur choice";
		cin>>choice;
		switch(choice)
		{
			
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
			default:
				cout<<"wrong choice\n";
			}//end of switch
		}//end of while
	}//end of main
		

void push()
{
	
	int pushed_item;
	if(top==(MAX-1))
        cout<<"stack overflow\n";
		
		else
		{
			cout<<"enter the item to be pushed in stack: \n";
			cin>>pushed_item;
			top=top+1;
			stack_arr[top] = pushed_item;
			
			
			
			}}	//end of push
void pop()
{
	
	if(top== -1)
	   cout<<"stack underflow\n";
	else
	{
		cout<<"popped elemnts is: \n"<<stack_arr[top];
		top = top-1;
		
		
	}}//end of pop
	
void display()
{
	
	int i;
	if(top == -1)
	   cout<<"Stack is empty\n";
	else{
		cout<<"stack elemnt:\n";
		for(i = top; i>=0; i--)
		  cout<<"\n"<<stack_arr[i];
		  
		
		
		
	}
	
	
	
}//end of display
	
	
	
