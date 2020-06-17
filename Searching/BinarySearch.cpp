#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int binarysearch(int *a,int key,int s,int e)
{
    if(s>e)
    {
        return -1;
    }
    int mid=(s+e)/2;
    if(a[mid]==key)
    {
        return mid;
    }
    else if(a[mid]>key)
    {
        return binarysearch(a,key,s,mid-1);
    }
    else
    {
        return binarysearch(a,key,mid+1,e);
    }
}

int main()
{
    int arr[]={7,5,1,34,77,4,3,8},key; //input through loop can also be taken
    int n=sizeof(arr)/sizeof(int);
    sort(arr,arr+n);
    cin>>key;
    int ans=binarysearch(arr,key,0,n);
    if(ans!=-1)
    {
        cout<<"Key found at "<<ans+1;
        return 0;
    }
    cout<<"Key not found";
    return 0;
}