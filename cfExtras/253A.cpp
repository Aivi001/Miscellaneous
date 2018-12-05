#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,m,mi,i,sum,rem;
//char a,b,add;
cin>>n>>m;

if (n >= m)
    {
        string s(n+m, 'B');
        for (size_t i = 1; i < m * 2; i += 2)
        {
            s[i] = 'G';
        }
        cout << s << endl;
    }
    else
    {
        string s(m+n, 'G');
        for (size_t i = 1; i < n * 2; i += 2)
        {
            s[i] = 'B';
        }
        cout << s << endl;
    }

/*
if(n>=m) 
{
a='B';
b='G';
mi=m;
add='B';
}

else
{
a='G';
b='B';
mi=n;
add='G';
}

rem=abs(n-m);

for(i=0;i<mi;i++)
	cout<<a<<b;

for(i=0;i<rem;i++)
	cout<<add;
cout<<"\n";

Again TLE 
*/

/*if(n==m)
rem=0;
else
rem=n<m?(m-mi):(n-mi);

if(rem==n-mi)
	for(i=0;i<rem;i++)
		cout<<"B";
else
	for(i=0;i<rem;i++)
		cout<<"G";
cout<<endl;

Gives tle
*/


return 0;
}



    




