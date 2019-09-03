#include <iostream>
using namespace std;
int main()
{
    cout<<"Start"<<endl;
    try
    {
        cout<<"Inside try bloack"<<endl;
        throw "hii";
        cout<<"This will not execute"<<endl;
        
    }
    catch(const string* i)
    {
        cout<<"Caught an exception:: "<<i;
        
    }
    cout<<endl<<"end";
    
   

    return 0;
}
