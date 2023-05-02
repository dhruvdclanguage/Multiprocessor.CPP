#include<iostream>

using namespace std;

class Boss{
	
	public :
		
		void print(){
			
			cout<<"I am the boss of the varun."<<endl;
			cout<<"varun is the very Good employee."<<endl;
		}
};
class Employee : public Boss{
	
	public :
		
		void print(){
			
			cout<<"I am the employee of the sanjay sir."<<endl;
			cout<<"sanjay sir is the very Good boss."<<endl;
		}
};

int main(){
	
	Employee obj;
	
	obj.Boss::print();
	obj.print();	
	
	
	return 0;
	
}
