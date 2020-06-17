#include<iostream>
using namespace std;
//selection sort

void selectionSort(int *a,int n)
{
    int k=0;
    for(int i=0;i<n-1;i++)
    {
        k=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[k]>a[j])
            {
                k=j;
            }
        }
        swap(a[i],a[k]);
    }
}

int main()
{
    int a[]={2,8,34,3,7,8,54,3};
    int n=sizeof(a)/sizeof(int);
    selectionSort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}