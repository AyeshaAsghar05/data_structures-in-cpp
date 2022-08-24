#include<iostream>
#include<stdlib.h>
using namespace std;
struct PSL{
	int ID;
	string NAME;
	string CAPTAIN;
	int DATE;
	struct PSL*link;
}*start;

void add(int,string,string,int);
void del(int);
void update();
void display();
int search(int);

int main(){
	int id,date,ch,n;
	string name,captain;
	do{
		cout<<"\n1.add: ";
		cout<<"\n2.del: ";
		cout<<"\n3.update: ";
		cout<<"\n4.display: ";
		cout<<"\n5.search: ";
		cout<<"\nenter your choice: ";
		cin>>ch;
		
		switch(ch){
			case 1:
				cout<<"\nEnter the Teams: ";
				cin>>n;
				for(int i=0;i<n;i++){
					cout<<"\nenter the team id: ";
					cin>>id;
					cout<<"\nenter the team Name: ";
					cin>>name;
					cout<<"\nenter Captain name: ";
					cin>>captain;
					cout<<"\nenter date of next match: ";
					cin>>date;
					add(id,name,captain,date);
				}
				break;
				case 2:
					cout<<"\nenter the team id: ";
					cin>>id;
				
					
					del(id);
					break;
					case 3:
					
						update();
						break;
						case 4:
							display();
							break;
							case 5:
								
								cout<<"\nenter the id: ";
								cin>>id;
								if(search(id)==1){
								
									cout<<"\nsearch found...";
								}
								else
								{
									cout<<"data not found...";
								}
				
			
								search(id);
								break;
						}
					}
		while(ch!=6);
		
	 }
	
	void add(int Id,string Name,string Captain,int Date){
		struct PSL*tmp,*q;
		tmp=new(struct PSL);
		tmp->ID=Id;
		tmp->NAME=Name;
		tmp->CAPTAIN=Captain;
		tmp->DATE=Date;
		tmp->link=NULL;
		if(start==NULL){
			start=tmp;
		}
		else{
		
		q=start;
		while(q->link!=NULL)
			
			q=q->link;
			q->link=tmp;
		
	}}
	void del(int Id){
		struct PSL*tmp,*q;
		q=start;
		while(q->ID!=Id&&q->ID!=NULL){
			tmp=q;
				q=q->link;
				tmp->link=q->link;
				free(q);
				
			}
		}
		
	
	void update(){
		struct PSL*tmp,*q;
		tmp=new(struct PSL);
		
		int new_id,new_date;
						string new_name,new_captain;
						cout<<"\nenter new id: ";
						cin>>new_id;
						cout<<"\nenter new name: ";
						cin>>new_name;
						cout<<"\nenter new captain: ";
						cin>>new_captain;
						cout<<"\nenter new date: ";
						cin>>new_date;
		q=start;
		while(q->link!=NULL){
			if(tmp->ID==new_id||tmp->NAME==new_name||tmp->CAPTAIN==new_captain||tmp->DATE==new_date){
				cout<<"update successfully...\n"<<endl<<new_id<<endl<<new_name<<endl<<new_captain<<endl<<new_date;
			
			}
			q=q->link;
		}
	}
	int search(int ID){
		struct PSL*q;
		q=start;
		while(q->link!=NULL){
			if(q->ID==ID){
				cout<<"id is equal to : "<<q->ID<<endl<<"Name = "<<q->NAME<<endl<<"\nCaptain = "<<q->CAPTAIN<<endl<<"\nnext match date = "<<q->DATE<<endl;
				return 1;
			}
			q=q->link;
			
			
			return -1;}
		}
	
	void display(){
		struct PSL*tmp,*q;
		if(start==NULL){
			cout<<"\nno tream added... ";}
			else{
			
			q=start;
			while(q!=NULL){
				cout<<endl<<q->ID<<endl<<q->NAME<<endl<<q->CAPTAIN<<endl<<q->DATE;
				q=q->link;
			}
		}}
	
	
	
	
	


