/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// program to check nature of root of a quadratic equaution
#include <iostream>

using namespace std;

int main()
{
   int a,b,c,d;
   cout<<"Enter the coefficient of Xsqr , X and constant";

   cin>>a>>b>>c;

   d=(b*b)- 4*(a*c);

   if(d>0){

       cout<<"roots real and distinct";

   }
   else if(d==0){

       cout<<"roots are real and equal";
   }
   else
   {
       cout<<"Roots Imaginary";
   }


    return 0;
}

