#include <iostream>

using namespace std;

int main()
{
   int a, b,c;
   cout<<"Enter two numbers: ";
   cin>>a>>b;
   
   try
   {
       if(b!=0)
       {
           c = a/b;
           cout<<"The Divison is: "<<c;
       }
       else
       throw b;
   }
   catch(int x)
   {
       cout<<"Exception caught. Divide by zero!\n";
   }
    return 0;
}


/* OUTPUT

TASTECASE 1:

Enter two numbers: 3 2
The Divison is: 1
---------------------------------

TESTCASE 2:

Enter two numbers: 2 0
Exception caught. Divide by zero!


*/
