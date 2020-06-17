#include <iostream>
#include<map>
#include<vector>
using namespace std;

//hashmap implementation
int main() 
{
    map<string,int>m;
    m["apple"]=100;
    m["orange"]=90;
    for(auto i=m.begin(); i!=m.end();i++)
    {
        cout<<i->first<<" "<<i->second<<" "<<endl;
    } 
    return 0;   
}

//hashmap implementation for multiple values for a single key
// int main()
// {
//     map<string, vector<int> >m;
//     m["apple"].push_back(100);
//     m["apple"].push_back(90);
//     m["orange"].push_back(80);
//     m["pineapple"].push_back(78);

//     for(auto j=m.begin(); j!=m.end();j++)
//     {
//         cout<<j->first<<" ";
//         for(auto i=0;i<j->second.size();i++)
//         {
//             cout<<j->second[i]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }