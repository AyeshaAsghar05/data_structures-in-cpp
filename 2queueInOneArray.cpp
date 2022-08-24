//program to implement 2 queues in one array, where 1st queue will start from oth index 
//and 2nd from last...
#include<iostream>
using namespace std;
#define MAX 6
int front1=-1,front2=MAX;
int rear1=-1 ,rear2=MAX;
int arr[MAX];
void deque1();
void deque2();
void enque1();
void enque2();
void display();
int main()
{
int ch;
	while(1){
		cout<<"\n1.enque1";
		cout<<"\n2.deque1: ";
		cout<<"\n3.enque2: ";
		cout<<"\n4.deque2: ";
		cout<<"\n5.display: ";
		cout<<"\nenter ur choice: ";
		cin>>ch;
		switch(ch){
			case 1:
				enque1();
				break;
				case 2:
					deque1();
					break;
					case 3:
						enque2();
						break;
						case 4:
							deque2();
							break;
							case 5:
								display();
								break;
						
		}
	}

}
void enque1()
{
int item;
if(rear1<rear2-1)
{
cout<<"enter the item:";
cin>>item;
if(front1==-1)
front1=0;
rear1=rear1+1;
arr[rear1]=item;
}
else
cout<<"overflow 1st queue:";

}
void enque2()
{
int item;
if(rear1<rear2-1)
{
cout<<"enter the item:";
cin>>item;
if(front2==MAX)
front2=MAX-1;
rear2=rear2-1;
arr[rear2]=item;
}
else
cout<<"overflow 2nd queue:";

}
void deque1()
{
int item;
if(front1<=rear1)
item=arr[front1];
front1=front1+1;
cout<<item;

}
void deque2()
{
int item;
if(front2>=rear2)
item=arr[front2];
front2=front2-1;
cout<<item;
}
void display(){
	if(front1==-1){
		cout<<"stack is empty...";
		
	}
	else
	{
					cout<<"queue is";
					for(int i=0;i<=rear1;i++){
						cout<<arr[i];
						
						
					}
}}
