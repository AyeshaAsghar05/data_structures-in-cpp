#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node*link;
}*start;
void create_list(int);
void addatbeg(int);
void addatend(int);
void addafter(int,int);
void delatbeg();
void delatend();
void delafterpos(int);
void delbyval(int);
void reverse();
void display();
void count();
	
int main(){
int n,m,i,ch,pos;

do{
	cout<<"\n1.create: ";
	cout<<"\n2.add at begining: ";
	cout<<"\n3.add at the end: ";
	cout<<"\n4.add after the node: ";
	cout<<"\n5.delete at begning: ";
	cout<<"\n6.delete at the end: ";
	cout<<"\n7.delete after the position: ";
	cout<<"\n8.delete by value: ";
	
	cout<<"\n9.reverse ";
	cout<<"\n10.display: ";
	cout<<"\n11.count: ";
	cout<<"\nenter your choice ";
	cin>>ch;
	switch(ch){
		case 1:
	cout<<"\nHow many nodes ";
	cin>>n;
	for(int i=0;i<n;i++)
{
cout<<"Enter the data ";
cin>>m;
create_list(m);}
break;
case 2:
	cout<<"enter element to insert at begning: ";
	cin>>m;
	addatbeg(m);
	break;
	case 3:
		cout<<"enter element to insert at end: ";
		cin>>m;
		addatend(m);
		break;
		case 4:
			cout<<"enter the element to insert after: ";
			cin>>m;
			cout<<"enter the position after which u want to insert: ";
			cin>>pos;
			addafter(m,pos);
			break;
			case 5:
				cout<<"node is deleted at begnning...";
				delatbeg();
				break;
				case 6:
					cout<<"node is deleted at end...";
					delatend();
					break;
						case 7:
		
			cout<<"enter the position after which u want to delete: ";
			cin>>pos;
			delafterpos(pos);
			break;
					case 8:
						cout<<"enter the value ";
						cin>>m;
						delbyval(m);
						case 9:
						reverse();
						break;
	case 10:
	display();
	break;
	case 11:
		count();
		break;
}}
while(ch!=12);}
void create_list(int info)
{
	struct node*q,*tmp;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->data=info;
	tmp->link=NULL;
	
	if(start==NULL)
	start=tmp;
	else
	{
		q=start;
		while(q->link!=NULL)
		q=q->link;
		q->link=tmp;
	}
}

void addatbeg(int info){
	struct node *tmp;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->data=info;
	tmp->link=start;
	start=tmp;
}
void addatend(int info){

struct node*q,*tmp;
tmp=(struct node*)malloc(sizeof(struct node));
tmp->data=info;
q->link=tmp;
tmp->link=NULL;

}
void addafter(int info,int p){

struct node *tmp,*q;

q=start;
for(int i=0;i<p-1;i++){
	q=q->link;
	if(q==NULL)
	{
		cout<<"there are less elements: ",p;
		
	}
}
tmp=(struct node*)malloc(sizeof(struct node));
tmp->link=q->link;
tmp->data=info;
q->link=tmp;
}

void delatbeg(){
	
	struct node *tmp;
	
	tmp=start;
	
	start=start->link;
	free(tmp);
	tmp=NULL;
	
}
void delatend(){
	struct node *tmp,*q;
	q=start;
	q=q->link;
	q->link=tmp;

	q->link=NULL;
	free(tmp);
	tmp=NULL;
	
	
}
void delafterpos(int p){
	struct node*q,*tmp;
	q=start;
for(int i=0;i<p-1;i++){
	q=q->link;
	if(q==NULL)
	{
		cout<<"there are less elements to dalete: ",p;
		
	}
}
tmp=q->link;
q->link=tmp->link;
free(tmp);

}
void delbyval(int val){
	struct node*q,*tmp;
	q=start;
	
	while(q->data!=val&&q->data!=NULL){
		tmp=q;
		q=q->link;
	}
	
			tmp->link=q->link;
			free(q);
		

	
}


void reverse(){
	struct node *tmp,*q;
	
	if(start!=NULL)
	{
		tmp=start;
		q=start->link;
		start=start->link;
		tmp->link=NULL;
	
	while(start!=NULL)
	{
		start=start->link;
		q->link=tmp;
		tmp=q;
		q=start;
	}
	start=tmp;
	}
	}
	
//	while(start!=NULL){
//		q=start->link;
//		start->link=tmp;
//		tmp=start;}
//		start=q;
	
	//cout<<"list is revered: "<<start->data;

void display()
		{
			struct node *q;
if(start==NULL)
{
cout<<"list is empty";
}
else
{

q=start;
cout<<"list is: \n";
while(q!=NULL)
{
cout<<"->"<<q->data;
q=q->link;
}
cout<<"\n";
}}
	
	void count(){

struct node*q;
q=start;
int cnt=0;
while(q!=NULL){
	q=q->link;
	cnt++;
}
cout<<"number of nodes are: \n"<<cnt;
}


