#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception 
{
	public:
    char * what () 
    {
      return "C++ Exception";
    }
};
 
int main() 
{
   try 
   {
      throw MyException();
   }
   catch(MyException e) 
   {
      cout << "MyException caught" <<endl;
      cout << e.what() <<endl;
   } 
   catch(exception e) 
   {
      //Other errors
   }
   
   return 0;
}



/* OUTPUT 

main.cpp:10:14: warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
   10 |       return "C++ Exception";
      |              ^~~~~~~~~~~~~~~
      
MyException caught
C++ Exception

*/