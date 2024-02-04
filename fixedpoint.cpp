#include<iostream>
#include<math.h>
#include<cmath>
#define f(x) x-exp(-x)  
#define g(x) exp(-x)

using namespace std;
int main(){
	float x0,x1,f1,f2,f3,e;
	int count=1;
	
	cout<<"Enter the value of x:";
	cin>>x0;
	cout<<"Enter the value of error:";
	cin>>e;
	
	do{
		f1=f(x0);
		f2=g(x0);
		x1=g(x0);
		count++;
		x0=x1;
		f3=f(x1);
	}while(fabs(f3)>error);
	
	cout<<"Iteration:"<<count<<endl;
	cout<<"The root is:"<<x1;
	
	return 0;
}