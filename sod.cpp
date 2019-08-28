#include<iostream>  
using namespace std;
    int main()  
    {  
       int c, sum, t;  
       char n[1000];  
       cout<<"Enter the number?";  
       cin>>n;  
       sum = c = 0;  
       while (n[c] != '\0')
       {  
          t   = n[c] - '0';   
          sum = sum + t;  
          c++;  
       }  
       cout<<"sum of digits"<<sum;  
       return 0;  
    }  
