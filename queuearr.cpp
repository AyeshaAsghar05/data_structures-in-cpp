//queue using array...
#include<iostream>
using namespace std;
int front=-1;
int rear=-1;
int arr_queue[50];
void create();
void del();
void display();
int main(){
	int ch;
	while(1){
		cout<<"\n1.create";
		cout<<"\n2.delete: ";
		cout<<"\n3.display: ";
		cout<<"\nenter ur choice: ";
		cin>>ch;
		switch(ch){
			case 1:
				create();
				break;
				case 2:
					del();
					break;
					case 3:
						display();
						break;
						
		}
	}
}
void create(){
	int add_item;
	if(rear==50-1){
		cout<<"queue is overflow";
		
	}
	else{
		if(front==-1)
		front=0;
		cout<<"queue elements:";
		cin>>add_item;
		rear=rear+1;
		arr_queue[rear]=add_item;
	}}
	void del(){
		if(front==-1||front>rear){
			cout<<"queue is underfolw";
			return;
		}
		else{
			cout<<"elements:"<<arr_queue[front];
			front=front+1;}}
			void display(){
				if(front==-1){
					cout<<"queue is empty...";
					
				}
				else
				{
					cout<<"queue is";
					for(int i=0;i<=rear;i++){
						cout<<arr_queue[i];
						
						
					}
				
	
	
	
	
	
}}
