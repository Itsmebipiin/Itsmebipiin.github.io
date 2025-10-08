#include<iostream>
#include<vector>
using namespace std;
void display(vector <int> &v){
    for (int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
 vector <int> v;
 cout<<"intial size="<<v.size()<<endl;
 int x;
 cout<<"enter five integer the vector";
 for(int i=0;i<5;i++)
 {
   // cin>>x;
    v.push_back(i);
 }
 cout<<"size after adding 5 value";
 cout<<v.size()<<endl;
 display(v);
 v.push_back(7);
 cout<<"size ="<<v.size()<<endl;
 display(v);
 // inserting element
 //vector <int> :: iterator itr=
 return 0;
}