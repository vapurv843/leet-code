#include<bits/stdc++.h>
using namespace std;
class heap {
    vector<int> v;
    void heapify(int i)
    {
        int left = 2*i;
        int right = 2*i + 1;
        int minimum = i;
        if(left<v.size() and v[i]<v[left])
        {
            minimum = left;
        }
        if(right<v.size() and v[minimum]<v[right])
        {
            minimum = right;
        }
        if(minimum!=i)
        {
            swap(v[i],v[minimum]);
            heapify(minimum);
        }
    }
    public:
    heap(int DEF_size)
    {
        v.reserve(DEF_size+1);
        v.push_back(-1);
    };

    // push element into heap
    void push(int data)
    {
        v.push_back(data);
        int i = v.size()-1;
        int parent = i/2;
        while(i>1 and v[i]>v[parent])
        {
            swap(v[i], v[parent]);
            i = parent;
            parent = i/2;
        }
    }
    int get_max()
    {
        return v[1];
    }
    void pop()
    {
        int last = v.size()-1;
        swap(v[1], v[last]);
        v.pop_back();
        heapify(1);
    }

    void print()
    {
        for(int i=1; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }



};
int main()
{
    heap h(10);
    h.push(5);
    h.push(3);
    h.push(7);
    
    h.push(9);
    h.push(2);
    h.push(4);
    h.push(6);
    h.push(8);
    
    h.pop();
    h.print();
}
   
   
  