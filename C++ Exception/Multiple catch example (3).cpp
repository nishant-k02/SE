#include <iostream>

using namespace std;

void test(int x)
{
    try
    {
        if(x==1)
            throw x;
        else if (x==0)
            throw 'x';
        else if (x==-1)
            throw 5.14;    
    }
    
    catch(int i)
    {
        cout<<"\nCaught an Integer";
    }
    
    catch(char ch)
    {
        cout<<"\nCaught an Character";
    }
    
    catch(double i)
    {
        cout<<"\nCaught an Double";
    }
}

int main()
{
    test(1);
    test(0);
    test(-1);
    return 0;
}


/* OUTPUT


Caught an Integer
Caught an Character
Caught an Double


*/
