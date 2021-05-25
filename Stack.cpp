# include<iostream>
# include<string>
using namespace std;
class Stack{
	private:
		int top;
		int arr[5];
		public:
			Stack(){
				top=-1;
				for(int i=0;i<5;i++){
					arr[i]=0;
				}
			}
			bool isempty(){
				if(top==-1)
					return true;
				else
					return false;	
			}
			bool isfull(){
				if(top==4)
					return true;
				else
					return false;
			}
			void push(int val){
				if(isfull())
				{	
					cout<<"stack overflow"<<endl;
				}
				else{
					top++;
					arr[top]=val;
				}
			}
			int pop(){
				if(isempty()){
					cout<<"stack undrflow"<<endl;
				}
				else{
					int popvalue=arr[top];
					arr[top]=0;
					top--;
					return popvalue;
				}
			}
			int count(){
				return (top+1);
			}
			int peek(int pos){
				if(isempty()){
					cout<<"Stack underflow"<<endl;
				}
				else{
					return arr[pos];
				}
			}
			void change(int pos,int val){
				if(isempty()){
					cout<<"Stack underflow"<<endl;
				}
				else{
					arr[pos]=val;
					cout<<"value changed at location"<<pos<<"is"<<val<<endl;
				}
			}
			void display(){
				cout<<"all values in the Stack:"<<endl;
				for(int i=4;i>=0;i--){
					cout<<arr[i]<<endl;
				}
			}
};
int main(){
	Stack s1;
	int option,position,value;
	do{
		cout<<"what operation do u perform.Select option no and 0 to exit: "<<endl;
		cout<<"1.push():"<<endl;
		cout<<"2.pop():"<<endl;
		cout<<"3.isEmpty():"<<endl;
		cout<<"4.isFull():"<<endl;
		cout<<"5.peek():"<<endl;
		cout<<"6.count():"<<endl;
		cout<<"7.change():"<<endl;
		cout<<"8.display():"<<endl;
		cout<<"9.clear Screen():"<<endl;
	
		cin>>option;
		switch(option){
			case 1:
				cout<<"enter the item u want to push in the stack:"<<endl;
				cin>>value;
				s1.push(value);
				break;
			case 2:
				cout<<"pop function call:"<<s1.pop()<<endl;
				break;
			case 3:
				if(s1.isempty()){
					cout<<"stack is empty"<<endl;
				}
				else{
					cout<<"stack is not empty"<<endl;	
				}
			case 4:
					if(s1.isfull()){
					cout<<"stack is full"<<endl;
				}
				else{
					cout<<"stack is not full"<<endl;	
				}
			case 5:
				cout<<"enter the position u want to peek:"<<endl;
				cin>>position;
				cout<<s1.peek(position)<<endl;
				break;
				case 6:
					cout<<"total items in stack:"<<endl;
					cout<<s1.count()<<endl;
					break;
					case 7:
						cout<<"enter the position:"<<endl;
						cin>>position;
						cout<<"enter the value:"<<endl;
						cin>>value;
							s1.change(position,value);
							break;
							case 8:
								cout<<"items in the Srack are:"<<endl;
								s1.display();
								break;
								case 9:
									system("cls");
									break;
									
					
					
					
					
				
		}
	}while(option!=0);
	return 0;
}

