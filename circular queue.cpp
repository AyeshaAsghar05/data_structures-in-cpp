//implement circular queue...
#include<iostream>
#include<stdlib.h>
using namespace std;
int front = -1;
int rear=-1;
int arr[40];
int enque();
int deque();
void display();
int main(){
	int ch;
	while(1){
		cout<<"\n1.enter elements of circular link list: ";
		cout<<"\n2.delete the elements of circular link list: ";
		cout<<"\n3.display the elements of circular link list: ";
		cout<<"\nenter ur choice: ";
		cin>>ch;
		switch(ch){
			case 1:
				enque();
				break;
				case 2:
					deque();
					break;
					case 3:
						display();
						break;
						
		}
	}
}
int enque(){
	int value;
	int arr[30];
	if(rear==0||rear==front-1){
		cout<<"overflow";


	}else if(front==-1){
		
		front =0;
		rear=0;	
		cout<<"enter value\n";
		cin>>value;
	}else if(rear==20-1){
		rear=0;
	
	}else
	{
		rear++;
		
	}
	arr[rear]=value;
}
int deque(){
	int value;
	if(front ==-1){
		
		if(front==rear){
		
		int x=arr[front];
		rear=1;
		front=1;
		}
		else if(front==20-1&&rear!=0){
			front=0;
			cout<<arr[20-1];
		}
		else
		{
			front++;
			return arr[front-1];
		}
	}}
		void display(){
				if(front==-1){
					cout<<"queue is empty...";
					
				}
				else
				{
					cout<<"queue is ";
					for(int i=0;i<=rear;i++){
						cout<<arr[i];
						
						
					}
	
}
	}
