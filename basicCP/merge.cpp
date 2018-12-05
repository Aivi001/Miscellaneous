#include<bits/stdc++.h>
using namespace std;


void merge(int a[],int start,int mid,int end)
{
    int i,j,k;
    int l=mid-start+1;
    int r=end-mid;

    int L[l],R[r];

    for(i=0;i<l;i++)
    L[i]=a[start+i];

    for(j=0;j<r;j++)
    R[j]=a[mid+1+j];

    i=0;j=0;k=start;  //imp, k=start

    while(i<l&&j<r)
    {
        if(L[i]<=R[j])
            a[k++]=L[i++];
        else
            a[k++]=R[j++];

    }

    while(i<l)
        a[k++]=L[i++];

    while(j<r)
        a[k++]=R[j++];
}

void mergeSort(int a[],int start,int end)
{
    if(start<end)    //to avoid segfault due to outof bound access
    {
    int mid=start+(end-start)/2;

    mergeSort(a,start,mid);
    mergeSort(a,mid+1,end);
    merge(a,start,mid,end);
    }
}


int main()
{

    int a[12],n,i,j;
    cin>>n;

    for(i=0;i<n;i++)
        cin>>a[i];

    mergeSort(a,0,n-1);

    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<"\n";




return 0;
}
