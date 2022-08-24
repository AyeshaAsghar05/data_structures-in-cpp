#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	string data;
	struct node*link;
};
	
	void create(struct node*q)
	
	{	cout<<"name|regno|sem|CGPA "<<endl<<q->data<<endl;
		while(q!=NULL){
		
			q=q->link;
				cout<<endl<<q->data<<endl;
		}
	
	}
	
	
	int main(){
		
		struct node*head;
		struct node*second,*third;
		head=(struct node*)malloc(sizeof(struct node));
			second=(struct node*)malloc(sizeof(struct node));
			third=(struct node*)malloc(sizeof(struct node));
		head->data="Ayesha, 212, 4, 3,";
		head->link=second;
	
		second->data="ali, 332, 4, 3.7";
		second->link=third;
		
		third->data="sana, 132, 4, 3.7";
		third->link=NULL;
		create(head);
		return 0;
}


