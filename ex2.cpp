#include <iostream>
using namespace std;
void xtest(int test)
{
    if(test)
    throw test;
}
int main()
{
try{
    xtest(0);
    xtest(1);
    xtest(2);
}
catch(int i)
{
    cout<<"caught an exception";
}
    return 0;
