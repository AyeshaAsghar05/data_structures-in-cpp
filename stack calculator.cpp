//stack calculator ..........
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int info;
	struct node*link;
}*top=NULL;
void push();
void pop();
void push2();
void push3();
void display();
int main()
{
	while(1){
	
    int menu; 
    float num1, num2, result; 

    cout<<"\nEnter a number from the list below\n\n";

    cout<<"1. Addition\n"; 
    cout<<"2. Subtraction\n";
    cout<<"3. multiplication\n";
    cout<<"4. delete: \n";

    cout<<"Enter number: "; //User input for the calculator menu
    cin>>menu;

    cout<<"\n";

    switch(menu) //switch statement for menu
    {
    case 1:
    	push();
    	break;

		case 2:
				push2();
				break;
				case 3:
					push3();
					break;
					case 4:
						pop();
						break;
			
    default:
        cout<<"Enter correct number...";
        break;
    }
    
}}
void push(){
	int num1,num2,result;
	struct node*tmp;
	tmp=new(struct node);
	cout<<"You entered Addition\n\n";

        cout<<"Enter first number: "; //User input for first number
        cin>>num1;

        cout<<"Enter second number: "; //User input for second number
        cin>>num2;

        cout<<"\n";

        result = num1 + num2; //Addition calculation

        cout<<"sum of "<<num1<<" and "<<num2<<" is "<<result; //Addition output
        tmp->info=num1;
        tmp->info=num2;
        tmp->info=result;
        tmp->link=top;
        top=tmp;}
        
        void push2(){
	int num1,num2,result;
	struct node*tmp;
	tmp=new(struct node);
	cout<<"You entered subtraction\n\n";

        cout<<"Enter first number: "; //User input for first number
        cin>>num1;

        cout<<"Enter second number: "; //User input for second number
        cin>>num2;

        cout<<"\n";

        result = num1 - num2; //subtraction calculation

        cout<<"subtraction of "<<num1<<" and "<<num2<<" is "<<result; //subtraction output
        tmp->info=num1;
        tmp->info=num2;
        tmp->info=result;
        tmp->link=top;
        top=tmp;}
        void push3(){
	int num1,num2,result;
	struct node*tmp;
	tmp=new(struct node);
	cout<<"You entered subtraction\n\n";

        cout<<"Enter first number: "; //User input for first number
        cin>>num1;

        cout<<"Enter second number: "; //User input for second number
        cin>>num2;

        cout<<"\n";

        result = num1 * num2; //multiplication calculation

        cout<<"Multiplication of "<<num1<<" and "<<num2<<" is "<<result; //multiplication output
        tmp->info=num1;
        tmp->info=num2;
        tmp->info=result;
        tmp->link=top;
        top=tmp;}
        void pop(){
        	struct node*tmp;
        	if(top==NULL){
        		cout<<"list is empty...";}
        		else
        		{
        			tmp=top;
        			cout<<"poped elements: "<<tmp->info;
        			top=top->link;
        			free(tmp);}
        			
        			
				}
