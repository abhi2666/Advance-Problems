#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int D,d,P,Q;
	    cin>>D>>d>>P>>Q;
	    long long int y=D/d;
	    long long int x= P*D + (d*y*(y-1)/2 + (D%d)*y)*Q;
	    cout<<x;
	    cout<<endl;

	}
	return 0;
}