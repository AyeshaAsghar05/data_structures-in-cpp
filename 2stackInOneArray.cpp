//program to implement 2 stacks in one array, where 1st stacak will start from oth index 
//and 2nd from last...
#include<iostream>
using namespace std;
#define MAX 5
int arr[MAX];
int top1=-1;
int top2=MAX;
void push1();
void push2();
void pop1();
void pop2();
void display();

int main(){
	int ch;
	while(1){
		cout<<"\n1.push1: ";
		cout<<"\n2.pop1: ";
		cout<<"\n3.push2: ";
		cout<<"\n4.pop2: ";
		cout<<"\n5.display: ";
		cout<<"\nenter ur choice: ";
		cin>>ch;
		switch(ch){
			case 1:
				push1();
				break;
				case 2:
					pop1();
					break;
					case 3:
						push2();
						break;
						case 4:
							pop2();
							break;
							case 5:
								display();
								break;
									case 6:
										exit(1);
											default:
												cout<<"\nwrong choice...";
								
						
		}
	}
}
void push1(){
	int pushed_item1;
	if(top1<top2-1){
		
		
		
		cout<<"enter elements:";
		cin>>pushed_item1;
		
		top1=top1+1;
		arr[top1]=pushed_item1;}
		else{
		cout<<"stack is overflow: ";}

		
	}
void pop1(){
	if(top1>=0){
		
		
		
		cout<<"\npoped elements are: "<<arr[top1];
		top1=top1-1;
	}
	else{
	cout<<"stack is underflow..";}
	}
	

void push2(){
	int pushed_item2;
	if(top1<top2-1){
		
		
	
		
		cout<<"pushed_item2: ";
		cin>>pushed_item2;
		top2=top2-1;
		arr[top2]=pushed_item2;
	}
		else{
	cout<<"stack overflow...";}
}
void pop2(){
	if(top2<MAX){
		
		
		
		cout<<"\npoped elements of stack 2 are: "<<arr[top2];
		top2=top2+1;
	}
	else{
	cout<<"\nstack is underflow...";}
}

void display(){

		if(top1<top2-1){
		
		for(int i=top1;i>=0;i--){
			cout<<arr[i];
			
			}}
	
		else{

		
		for(int i=top2;i>=0;i--){
			cout<<arr[i];
		}
	}}










