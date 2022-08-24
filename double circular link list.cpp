//double circular link list
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	struct node*prev;
	struct node*next;
	int data;
}*last;
void create(int);
void insertatbeg(int);
void insertatpos(int,int);
void delbtw(int);
void delatstart();
void delatend();
void display();
int maximum();
void swap_MandN(int pos1);
int main(){
	int ch,m,n,i,pos;
	while(1){
	cout<<"\n1.create list\n";
	cout<<"2. insert at beginning: \n";
	cout<<"3. insert at position: \n" ;
	cout<<"4. del by value: \n" ;
	cout<<"5. del at start: \n";
	cout<<"6. del at end: \n";
	cout<<"7. display: \n" ;
	cout<<"8. size of list is \n";
	cout<<"9.swap n and m elements \n";
	cout<<"10. exit \n";
	
	cout<<"enter choice: \n";
	cin>>ch;
	
	switch(ch){
		case 1:
			cout<<"how many nodes do you want?\n";
			cin>>n;
			for(i=0;i<n;i++){
				cout<<"enter data: \n";
				cin>>m;
				create(m);
				
			}
			break;
			case 2:
			cout<<"enter data: \n";
			cin>>m;
			insertatbeg(m);
			break;
			case 3:
			cout<<"\nenter data: \n";
			cin>>m;
			cout<<"\nenter the position where you want to add: \n";
			cin>>pos;
		insertatpos(m,pos);
			break;
		case 4:
			cout<<"\nenter the value to delete: \n";
			cin>>m;
		delbtw(m);
		break;
		case 5:
		delatstart();
		break;
		case 6:
		delatend();
		break;
		case 7:
		display();
		break;
		case 8:
			cout<<"\nsize of list is: \n"<<sizeof(int);
			break;
			case 9:
									
					cout<<"\nEnter position where you want to swap elements ";
					cin>>pos;
					swap_MandN(pos);
						break;
						case 10:
							exit(1);
								break;
				default:
					cout<<"wrong choice...\n";
					
	}}
}

void create(int info){
	struct node*q,*tmp;
	tmp=new(struct node);
	tmp->data=info;
	if(last==NULL){
		tmp->prev=NULL;
		last=tmp;
		tmp->next=last;
	}
	else
	tmp->next=last->next;
	last->next=tmp;
	tmp->prev=last;
	last=tmp;
	
		
	}
void display(){
	struct node*q;
	q=last->next;
	while(q!=last)
	{
		cout<<q->data<<" ";
		q=q->next;
	}
		cout<<last->data;
	
}
void insertatbeg(int info){
	struct node*tmp;
	tmp=new(struct node);
	struct node *q=last;
	tmp->data=info;
	tmp->next=last->next;
	last->next=tmp;
	tmp->prev=last->next;
}

void insertatpos(int num,int pos)
{
	struct node *q=last;
	struct node *temp;
	temp=new(struct node);
	temp->data=num;
	q=last->next;
	for(int i=0;i<pos-1;i++)
	{
		q=q->next;
	}
	temp->next=q->next;
	q->next->prev=temp;
	q->next=temp;
	temp->prev=q;
	if(q==last)
	{
		last=temp;
	}
}
void delbtw(int info){
		struct node *q;
	struct node *temp;
	q=last->next;
	while(q->next!=last)
	{
		if(q->next->data==info)
		{
			temp=q->next;
			q->next=temp->next;
			temp->next->prev=q;
			free(temp);
		}
		q=q->next;
	}
}
void delatstart(){
	struct node *q=last;
	struct node *temp;
	q=last->next;
	temp=q;
	last->next=q->next;
	q->next->prev=last;
	free(temp);
}
void delatend(){
	struct node *q;
	struct node *temp;
	q=last->next;
		if(q->next==last)
		{
			temp=q->next;
			q->next=temp->next;
			q->next->prev=q;
			free(temp);
			q=last;
}}

	void swap_MandN(int pos1){
    node * q1 = last;
    node * q2 =last;
    int temp;

    for(int i=0;i< (pos1-1);i++){
        q1 = last->next;
    }
    
    for(int i=0;i < (pos1);i++){
        q2 = last->next;
    }
    temp = q1->data;
    q1->data = q2->data;

    q2->data = temp;

    

}
	
	
  
