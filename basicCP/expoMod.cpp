#include <iostream>
using namespace std;

long long p(long long a,long long pow,long long m)
{
	if(pow==0)
	return 1;
	if(!(pow&1))
		return ((p(a,pow/2,m)%m*p(a,pow/2,m)%m)%m);
	else
		return ((p(a,pow/2,m)%m*p(a,pow/2,m)*a)%m);
}
int main() {
	// your code goes here
	cout<<p(14,98765432123456789,41);
	
	return 0;
}
