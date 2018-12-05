#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int start,int end)
{
    int i,pIndex=start-1,pivot=a[end]; //pIndex=start-1 , since you wanna inc it before itself , so, on first try , would become the 2nd and not the 1st

    for(i=start;i<end;i++)
    {
        if(a[i]<pivot)
        {
            pIndex++;
            swap(a[i],a[pIndex]);
        }

    }
        swap(a[pIndex+1],a[end]);
        return (pIndex+1);

}


void quickSort(int a[],int start,int end)
{
    if(start<end)
    {

    int mid=partition(a,start,end);
    quickSort(a,start,mid-1);
    quickSort(a,mid+1,end);

    }

}

int main()
{
int i,n,j,a[12];

cin>>n;

for(i=0;i<n;i++)
    cin>>a[i];

quickSort(a,0,n-1);

for(i=0;i<n;i++)
    cout<<a[i]<<" ";
cout<<"\n";

return 0;
}
