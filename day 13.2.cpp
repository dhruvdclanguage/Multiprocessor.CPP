#include<iostream>

using namespace std;

class Operation{
	
	private:
		
		int a , b , c ;
	
	public:
		
		void calculate (){
			
			cout<<"0 ARGUMENT FUNCTION"<<endl;
			
		}
		
		void calculate1 (int a){
			
			cout<<"1 ARGUMENT FUNCTION"<<endl;
			
		}
		
		void calculate2 (int a , int b){
			
			cout<<"2 ARGUMENT FUNCTION"<<endl;
			
		}
		
		void calculate3 (int a , int b , int c){
			
			cout<<"3 ARGUMENT FUNCTION"<<endl;
			
		}
		
		void print(int a , int b , int c){
			
			calculate();
			calculate1(a);
			calculate2(a , b);
			calculate3(a , b , c);
			
		}	
	
	
};


int main (){
	
	Operation obj;
	
	obj.print(1,2,3);
	
	return 0 ;
}
