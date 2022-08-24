//Queue using link list
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int info;
	struct node*link;
}*front=0,*rear=0;
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
	struct node*tmp;
	int add_item;
	tmp=new(struct node);
	cout<<"enter elements to add: ";
	cin>>add_item;
	tmp->info=add_item;
	tmp->link=NULL;
	if(front==NULL){
		front=tmp;}
		else{
		
		rear->link=tmp;
		rear=tmp;
	}
	}

void del(){
	struct node*tmp;
	if(front==NULL){
		cout<<"queue is underflow";
		}else{
			tmp=front;
			cout<<tmp->info;
			front=front->link;
			free(tmp);
			
		}}
	
	
	void display(){
		struct node*q;
		q=front;
		if(front==NULL){
			cout<<"queue is empty";
			}else
			{
				cout<<"elemenyts are";
				while(q!=NULL){
					cout<<q->info;
					q=q->link;
				}
			}
		}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	










