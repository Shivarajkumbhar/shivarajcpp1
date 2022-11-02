#include<iostream> 
using namespace std; 
int main()
{
// initialize p 
int p = 5;
cout<<("Post-Increment Operator"); 
  cout<<(p++); // 5
// p's value is incremented to 6 after returning
// current value i.e; 5 
int q = 5;
cout<<("Pre-Increment Operator"); 
cout<<(++q);	//6
// q is incremented to 6 and then it's value is returned
}
