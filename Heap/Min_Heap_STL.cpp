#include<iostream>
#include<vector>
using namespace std;

class MinHeap
{

    void heapify(int index)
    {
        int left=2*index;
        int right=left+1;
        int min_index=index;
        if(left<v.size() && v[min_index]>v[left])
        {
            min_index=left;
        }
        if(right<v.size() && v[min_index]>v[right])
        {
            min_index=right;
        }
        if(index!=min_index)
        {
            swap(v[index],v[min_index]);
            heapify(min_index);
        }
    }

public:
vector<int> v;
    MinHeap()
    {
        v.push_back(-1);
    }
    void push(int data)
    {
        v.push_back(data);
        int children=v.size()-1;
        int parent=children/2;
        while(parent>0 && v[children]<v[parent])
        {
            swap(v[children],v[parent]);
            children=parent;
            parent=parent/2;
        }
    }
    int top()
    {
        return v[1];
    }
    bool empty()
    {
        return v.size()==1;
    }
    void pop()
    {
        swap(v[v.size()-1],v[1]);
        v.pop_back();
        heapify(1);
    }
};

int main(){

	MinHeap h;

	h.push(10);
	h.push(2);
	h.push(-3);
	h.push(4);
	h.push(11);
	h.push(15);

	while(!h.empty()){
		cout<<h.top()<<endl;
		h.pop();
	}
}
