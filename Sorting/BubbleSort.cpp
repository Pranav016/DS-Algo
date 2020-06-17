#include<iostream>
using namespace std;
//bubble sort

void bubbleSort(int *a,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int flag=0;
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                flag=1;
            }
        }
        if(flag==0)
        {
            return;
        }
    }
}

int main()
{
    int a[]={2,4,7,3,1,45,7,5,343,12,65,2};
    int n=sizeof(a)/sizeof(int);
    bubbleSort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}