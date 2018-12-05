#include<bits/stdc++.h>
using namespace std;

void shellSort(int a[],int n)
{
    int gap=n/2;int temp,i,j;

    while(gap>0)
    {
        for(i=gap;i<n;i++)
        {
        temp=a[i];

        for(j=i;j>=gap&&a[j-gap]>temp;j-=gap)  //j=i and not gap, since we have to create the gap for each element n not just one
            a[j]=a[j-gap];  //not swap since you need to compare
        a[j]=temp;

    }
gap/=2;
    }
}


int main()
{

int a[12],i,j,n;
cin>>n;

for(i=0;i<n;i++)
    cin>>a[i];

shellSort(a,n);

for(i=0;i<n;i++)
    cout<<a[i]<<" ";
cout<<"\n";

return 0;
}
