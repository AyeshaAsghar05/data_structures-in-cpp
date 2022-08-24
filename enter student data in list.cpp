#include<iostream>
using namespace std;
struct student{
	string std_ID;
	string std_NAME;
	int std_SEM;
	float std_CGPA;
	struct student*link;
}*start;

void create(string,string,int,float);
void display();
int search(string);

int main(){
	int i,n,ch,SEM;
	string NAME,ID;
	float CGPA;;
	do{
		cout<<"\n1.create list: ";
		cout<<"\n2.display: ";
		cout<<"\n3.search: ";
		
		cout<<"\nEnter your choice: ";
		cin>>ch;
		
		switch(ch){
			case 1:
				
				cout<<"\nHow many Students?";
				cin>>n;
				for(i=0;i<n;i++){
				
				cout<<"\nEnter Student full ID: ";
				cin>>ID;
				cout<<"\nEnter student name: ";
				cin>>NAME;
				cout<<"\nEnter semester: ";
				cin>>SEM;
				cout<<"\nEnter CGPA: ";
				cin>>CGPA;
				create(ID,NAME,SEM,CGPA);
			}
			break;
			case 2:
				
				display();
				break;
				case 3:
						cout<<"\nEnter student id to search particular student: ";
				cout<<"\nEnter Student full ID: ";
				cin>>ID;
				if(search(ID)==1){
					cout<<"data found...\n";
				cout<<endl<<ID<<endl<<NAME<<endl<<SEM<<endl<<CGPA<<endl;
				}
				
				else{
					cout<<"data not found...";
				}
				
				search(ID);
				
					break;	
		}
	}
	while(ch!=5);
}

void create(string id,string name,int sem,float cgpa){
	struct student*q,*tmp;
	tmp=new(struct student);
	tmp->std_ID=id;
	tmp->std_NAME=name;
	tmp->std_SEM=sem;
	tmp->std_CGPA=cgpa;
	
	tmp->link=NULL;
	if(start==NULL){
		start=tmp;
		
	}
	else
	{
		q=start;
		while(q->link!=NULL)
			q=q->link;
			q->link=tmp;
		
	}
	
}
void display(){
	struct student*q;
	if(start==NULL){
		cout<<"list is empty... ";
	}
	else
	q=start;
	while(q!=NULL){
		cout<<endl<<q->std_ID<<endl<<q->std_NAME<<endl<<q->std_SEM<<endl<<q->std_CGPA<<endl;
		q=q->link;
	}
}
int search(string id){
	struct student*q;
	q=start;
	while(q!=NULL){
		if(q->std_ID==id){
			return 1;
			
			
		}
		
		q=q->link;
		
		return -1;

	}
}















































