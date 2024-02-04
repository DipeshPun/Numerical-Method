#include<iostream>
#define max 10
using namespace std;

class Horners{
	int A[max],B,x,n;
public:
	void getdata(){
		cout<<"Enter the highest degree:";
		cin>>n;
		cout<<"Enter the value variables:";
		for(int i=0;i<=n;i++){
			cin>>A[i];
		}
		cout<<"Enter the value of x for calculation:";
		cin>>x;
	}
	
	void operation(){
		B=A[0];
		for(int i=1;i<=n;i++){
			B=A[i]+x*B;
		}
		cout<<"The required answer is:"<<B;
	}
};
int main(){
	Horners h;
	h.getdata();
	h.operation();
	return 0;	
}