#include<iostream>
#include<cmath>
using namespace std;
float addition(float num1, float num2);         //function declaration
float subtraction(float num1, float num2);      //function declaration
float multiplication(float num1, float num2);   //function declaration
float division(float num1, float num2);         //function declaration
int main()
{
 float a,b;
 countinue:     //goto loop
 cout<<endl<<"                             Two Numbers are allowed, as it is just a Basic Calculator!!"<<endl<<endl;
 cout<<"          Enter 1st Number:";
 cin>>a;       //user will enter the number
 cout<<endl;
 cout<<"          Enter 2nd Number:";
 cin>>b;       //user will enter the number
 cout<<endl;
 cout<<"                                   Choose the option according to the operation you want to perform:"<<endl<<endl;
 cout<<"          1.  Addition"<<endl;
 cout<<"          2.  Subtraction"<<endl;
 cout<<"          3.  Multiplication"<<endl;
 cout<<"          4.  Division"<<endl;
 int option;
 cout<<"\t\t";
 cin>>option;   //user will choose the arthimetic operation
 cout<<endl;
 if (option == 1)
    {
     addition(a, b);             //function calling
	}
 else if (option == 2)
     {
      subtraction(a, b);         //function calling
	 }
 else if (option == 3)
     {
      multiplication(a, b);      //function calling
	 }
 else if (option == 4)
     {
      division(a, b);            //function calling
	 }
 else
     {
	  cout<<"                                ERROR . . .";         //Just in case if user enter any random number expects from 1 to 4
	 }
 char c;
 cout<<"                                     Do you want to countinue? (Yes or No) For Yes; Press Y and For No; Press N \t";
 cin>>c;      //User will choose to countinue or exit the program
 if (c == 'Y')
     {
      goto countinue;
	 }
 else if (c == 'N')
      {
       cout<<"                                       Thank You For Visiting!!\n\t\t\t\tYou EXIT the Program Successfully."<<endl;
       return 0;
	  }
}
float addition(float a, float b)            //Function Definition
                         {
                          cout<<"\t\tSum ="<<a + b<<endl;
						 }
float subtraction(float a, float b)         //Function Definition
                         {
                          cout<<"\t\tDifference ="<<a - b<<endl;
						 }
float multiplication(float a, float b)      //Function Definition
                         {
                          cout<<"\t\tProduct ="<<a * b<<endl;
						 }
float division(float a, float b)            //Function Definition
                         {
                          if (b == 0)
                            {
                             cout<<"\t\tAny Real Number or Any Complex Number cannot be divide by Zero."<<endl;      //Math Error
							}
						  else
						      {
						       cout<<"\t\tQuotient ="<<a / b<<endl;
							  } 
						 }