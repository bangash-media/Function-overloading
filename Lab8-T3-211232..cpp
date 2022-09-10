#include <iostream>
/*Using Function overloading create two functions, one should
 find the maximum number among 4 numbers and the other should 
 find the maximum number among 3 numbers.Both should return 
 the result to main and then display at the output*/
using namespace std;

double max_num(double num1,double num2,double num3,double num4);/*function declaration 
                                                                  for max among 4 num*/
double max_num(int n1,int n2,int n3); //function declaration for max no. among 3.

int main() 
{
	double num1,num2,num3,num4;
	int n1,n2,n3;
	cout<<"\n\n\t\tEnter first Number: "; cin>>num1;
	cout<<"\n\t\tEnter second Number: "; cin>>num2;
	cout<<"\n\t\tEnter third Number: "; cin>>num3;
	cout<<"\n\t\tEnter fourth Number: "; cin>>num4;
	cout<<endl;
	cout<<"********************************************************\n";
	cout<<max_num(num1,num2,num3,num4); //function call for max no. among 4.
	cout<<"\n\n******************************************************";
	cout<<"\n\n\t\tEnter first Number: "; cin>>n1;
	cout<<"\n\t\tEnter second Number: "; cin>>n2;
	cout<<"\n\t\tEnter third Number: "; cin>>n3;
	cout<<endl<<endl;
	cout<<"********************************************************\n\n";
	cout<<max_num(n1,n2,n3); ////function call for max no. among 4
	
	
	return 0;
}
double max_num(double num1,double num2,double num3,double num4) //function defination 
{
	double maximum;
	if (num1>num2&&num1>num3&&num1>num4)
	{
		cout<<"\t\tThe maximum number= ";
		maximum=num1;
	}
    if (num2>num1&&num2>num3&&num2>num4)
	{
		cout<<"\n\t\tThe maximum number= ";
		maximum=num2;
	}
	if (num3>num2&&num3>num1&&num3>num4)
	{
		cout<<"\n\t\tThe maximum number= ";
		maximum=num3;
	}
	if (num4>num2&&num4>num3&&num4>num1)
	{
		cout<<"\n\t\tThe maximum number= ";
		maximum=num4;
	}
	return maximum;
}
double max_num(int n1,int n2,int n3) //function defination for second call
{
	double maximum;
	if (n1>n2&&n1>n3)
	{
		cout<<"\t\tThe maximum number= ";
		maximum=n1;
	}
	if (n2>n1&&n2>n3)
	{
		cout<<"\t\tThe maximum number= ";
		maximum=n2;
	}
	if (n3>n2&&n3>n1)
	{
		cout<<"\t\tThe maximum number= ";
		maximum=n3;
	}
	return maximum;
	
}






