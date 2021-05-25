#include<iostream>
using namespace std;
class Node{
	public:
		int key;
		int data;
		Node* next;
	Node(){
		int key=0;
		int data=0;
		next=NULL;
	}
	Node(int k,int d){
		key=k;
		data=d;
		next=NULL;
	}
		
};
class Stack{
	public:
		Node* top;
		Stack(){
			top=NULL;
		}
		Stack(Node* n){
			top=n;
		}
		bool checkifNodeExists(Node* n){
			Node* temp=top;
			bool exist=false;
			while(temp!=NULL){
				if(temp->key==n->key){
					exist=true;
					break;
				}
				temp=temp->next;
			}
			return exist;
		}
		bool isempty(){
			if(top==NULL){
				return true;
			}
			return false;
		}
		void push(Node* n){
			if(isempty()){
				top=n;
				cout<<"Node pushed"<<endl;
			}
			else if(checkifNodeExists(n)){
				cout<<"same key node is not allowed"<<endl;
			}
			else{
				Node* temp=top;
				top=n;
				n->next=temp;
				cout<<"Node pushed"<<endl;
			}
		}
		Node* pop(){
			Node* temp=NULL;
			if(isempty()){
				cout<<"stack is underflow"<<endl;
				return temp;
				
			}
			else{
				temp=top;
				top=top->next;
				return temp;
			}
		}
		int count(){
			int count=0;
				Node* temp=top;
				while(temp!=NULL){
					count++;
					temp=temp->next;
				}
				return count;
			}
		Node* peek(){
			if(isempty()){
				cout<<"satck is empty"<<endl;
			}
			else{
				return top;
			}
		}
		void display(){
			if(isempty()){
				cout<<"-----stack is empty-----"<<endl;
			}
			else{
				Node* temp=top;
				cout<<"element in stack is : "<<endl;
				while(temp!=NULL){
					cout<<"("<<temp->key<<","<<temp->data<<")-->"<<endl;
					temp=temp->next;
				}
			}
		}
};
int main(){
	Stack s;
	int key1,data1,option;
	do{
		cout<<"\nwhat operation do u want to implement given below\n enter 0 to exit"<<endl;
		cout<<"1.push()"<<endl;
		cout<<"2.pop()"<<endl;
		cout<<"3.peek()"<<endl;
		cout<<"4.display()"<<endl;
		cout<<"5.count()"<<endl;
		cout<<"6.clear screen"<<endl;
		cin>>option;
		Node* n1=new Node();
		switch(option){
			case 0:
				break;
			case 1:
				cout<<"enter the key and data:";
				cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1->data=data1;
				s.push(n1);
				break;
			case 2:
				cout<<"---element is popped--- ";
				n1=s.pop();
				cout<<"\npopped element is "<<"("<<n1->key<<","<<n1->data<<")"<<endl;
				break;
			case 3:
				n1=s.peek();
				cout<<"peek element is "<<"("<<n1->key<<","<<n1->data<<")"<<endl;
				break;
			case 4:
				s.display();
				break;
			case 5:
				cout<<"Total element in stack is : "<<s.count();
				break;
			case 6:
				system("cls");
				break;
			default:
				cout<<"enter the valid number:"<<endl;
		}
			
	}while(option!=0);
	return 0;
}
