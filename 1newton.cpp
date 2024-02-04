
#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>
#define    f(x) sin(x)+x*x+5*x-9
#define    g(x) cos(x)+2*x+5
using namespace std;

int main()
{
	 float x0, x1, f1, f2, f, e;
	 int count=1;

	 cout<<"Enter first guess: ";
	 cin>>x0;
	 cout<<"Enter error: ";
	 cin>>e;
	 	
	 do
	 {
		  f1 = f(x0);
		  f2 = g(x0);
		  if(f2 == 0){
			   cout<<"Mathematical Error.";
			   break;
		  }

		  x1=x0-f1/f2; //finding the value of new x
		   x0 = x1;  //replacing x0 by xnew for next line
		  f=f(x1);  
		  count++;

	 }while(fabs(f)>e);
	 cout<< endl<<"Root is:"<< x1<<endl;
	 cout<<"Iteration:"<<count<<endl;

	 return 0;
}