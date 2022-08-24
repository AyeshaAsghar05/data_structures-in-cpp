//program of stack using link list
#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int info;
	struct node*link;
}*top=NULL;
void push();
void pop();
void display();

int main()
{
	int choice;
	do{
		
		cout<<"\n1.push";
		cout<<"\n2.pop";
		cout<<"\n3.Display";
		cout<<"\n4.Quit";
		cout<<"\nEnter your choice";
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
			}//end of switch
		}
		while(choice!=5);
	}//end of main
		

void push()
{
	struct node*tmp;
	int pushed_item;
	tmp=new(struct node);
	cout<<"input the new value to be pushed on the stack:\n";
	cin>>pushed_item;
	tmp->info=pushed_item;
	tmp->link=top;
	top=tmp;
	}
void pop()
{
	struct node*tmp;
	if(top==NULL)
	   cout<<"stack is empty\n";
	else
	{
		tmp=top;
		cout<<"popped elemnts is:"<<tmp->info;
		top = top->link;
		free(tmp);
		
	}}//end of pop
	
void display()

{
	struct node*ptr;
	ptr=top;
	if(top ==NULL)
	   cout<<"Stack is empty\n";
	else{
		cout<<"stack elemnt:\n";
		while(ptr!=NULL)
		{
			cout<<"\n"<<ptr->info;
			ptr=ptr->link;
		}
		 	
	}
	
	
}//end of display
