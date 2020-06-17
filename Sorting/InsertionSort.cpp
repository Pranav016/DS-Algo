#include<iostream>
using namespace std;
//insertion sort

void insertionSort(int *a,int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        int card=a[i];
        for(j=i-1;j>=0;j--)
        {
            if(card>a[j])
            {
                break;
            }
            a[j+1]=a[j];
        }
        a[j+1]=card;
    }
}

int main()
{
    int a[]={2,4,7,3,1,45,7,5,343,12,65,2};
    int n=sizeof(a)/sizeof(int);
    insertionSort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}