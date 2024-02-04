#include<iostream>
#include<math.h>
#define f(x) sin(x)+x*x+5*x-9
using namespace std;

class Bisection{
	float x0,x1,error,root;
	int count=0;
public:
		void getdata(){
			cout<<"Enter the value of x0 and x1:"<<endl;
		cin>>x0>>x1;
		cout<<"Enter the value of error:"<<endl;
		cin>>error;
		
	}	
	
	void checkfunction(){
		if(f(x0)*f(x1)>0){
			cout<<"Input is invalid"<<endl;
		}
		else{
			getdata();
		}
	}
	
	void operation(){
		do{
			count++;
			root=(x0+x1)/2;
			if(f(root)*f(x0)<0){
				x1=root;
			}
			else{
				x0=root;
			}
		}while(f(f(root))>error);
	}
	
	void display(){
		cout<<"Root is "<<root<<endl;
		cout<<"Iteration:"<<count;
	}
};

	int main(){
		Bisection b;
		
		b.getdata();
		b.checkfunction();
		b.operation();
		b.display();
		return 0;
	}