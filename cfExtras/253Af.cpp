#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,m;

    cin >> n >> m;

    if (n >= m)
    {
        string s(n+m, 'B');
        for (i = 1; i < m * 2; i += 2)
        {
            s[i] = 'G';
        }
        cout << s << endl;
    }
    else
    {
        string s(m+n, 'G');
        for (i = 1; i < n * 2; i += 2)
        {
            s[i] = 'B';
        }
        cout << s << endl;
    }
    return 0;
}
