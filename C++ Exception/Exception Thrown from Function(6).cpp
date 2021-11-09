#include <iostream>

using namespace std;

void test(int x)
{
    cout<<"Inside Function: "<<x<<endl;
    if(x) throw x;
}

int main()
{
    cout<<"Start"<<endl;
    try
    {
        test(0);
        test(1);
        test(2);
    }
    catch(int x)
    {
        cout<<"Caught an int Exception: "<<x<<endl;
    }
    return 0;
}


/*

Start
Inside Function: 0
Inside Function: 1
Caught an int Exception: 1

*/
