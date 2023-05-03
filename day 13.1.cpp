#include<iostream>
#include<string.h>

using namespace std;

class Message{
	
	private :
		
		char f_n[30];
		
	public :
	   
	    Message(char v[]){
	    	
	    	strcpy(f_n,v);
		}
		
		void print(){
			
			cout<<"Hello my friend Dhairya"<<endl;
		}
		
		void print(char l_n[]){
			
			cout<<f_n<<" "<<l_n<<endl;
		}	
};

int main(){
	
	Message obj("My name is");
	
	obj.print();
	obj.print("Dhruv\ni am your bench partner in RNW 3");
	
	return 0;
}
