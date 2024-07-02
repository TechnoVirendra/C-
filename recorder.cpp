#include<iostream>
using namespace std; 
class Records{
int age; string name;
public:
Records() {};
Records(string n,int a):
name(n),age(a) {}
void show()
{cout<<name<<" : "<<age<<endl;
}
Records eldest(Records o)
{
return (o.age>age)? o: *this;
}
};
int main(){
Records ob[3]={Records("Dheeraj",21),Records("Rahul",50),Records("Rohit",30)};
Records res;
for(int i=0;i<2;i++)
res = ob[i].eldest(ob[i+1]);
res.show();
return 0;}
