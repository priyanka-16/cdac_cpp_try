#include<iostream>
using namespace std;
class Complex
{
private: 
	int real;
	int img;

public:
	Complex(int n, int m):real(n), img(m)
	{
	}
/*	void search(int num)
	{
		if(c[0]==num)
			cout<<"Found in c object."<<endl;
		else if(c1[0]==num)
			cout<<"Found in c1 object."<<endl;
	}*/
	void Accept()
	{
		cout<<"\n Enter real &img part\n";
		cin>>real>>img;
	} 
	

		
	
	

/*	void Display()
	{
		cout<<"";
	}
	*/
};
int main()
{	int i;
//	Complex arr[10];
/*	for(int i=0; i<10; i++)
                {
                        arr[i].Accept();
                }
*/
	cout<<"Enter the no. u want to search:";
	cin>>i;
	cout<<endl;
	Complex c[2];
	
	for(int i=0; i<2; i++)
                {
                        arr[i].Accept();
                }
	Complex c1[2];
	for(int i=0; i<2; i++)
                {
                        arr[i].Accept();
                }
      //  {
                if(c[0] == i)
                        cout<<"Found in c object."<<endl;
                else(c1[0] == i)
                        cout<<"Found in c1 object."<<endl;
       // }

//	c.Accept();
//	c1.Accept();
	
	return 0;


}
