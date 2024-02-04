
#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>
#define    f(x)    sin(x)+x*x+5*x-9

using namespace std;

int main()
{
	 float x0, x1, x2, f0, f1, f2, e;
	 int count=1;

	 cout<<"Enter first guess: ";
	 cin>>x0;
	 cout<<"Enter second guess: ";
	 cin>>x1;
	 cout<<"Enter tolerable error: ";
	 cin>>e;
	
	 do
	 {
		  f0 = f(x0);
		  f1 = f(x1);
		  if(f0 == f1)
		  {
			   cout<<"Mathematical Error.";
			   break;
		  }

		  x2 = x1 - (x1 - x0) * f1/(f1-f0);
		  f2 = f(x2);


		  x0 = x1;
		  f0 = f1;
		  x1 = x2;
		  f1 = f2;

		  count++;

	 }while(fabs(f2)>e);

	 cout<< endl<<"Root is:"<< x2<<endl;
	 cout<<"Iteration:"<<count;

	 return 0;
}