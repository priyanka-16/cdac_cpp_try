#include <iostream>
using namespace std;
//writing try and catch inside function;
void xtest(int test)
{
    try{
    if(test)
    throw test;
    }
    catch(int i)
{
    cout<<"caught an exception";
}
}
int main()
{

    xtest(0);
    xtest(1);
    xtest(2);
}

    return 0;
}
