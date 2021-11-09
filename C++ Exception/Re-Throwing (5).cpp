#include <iostream>

using namespace std;

void divide(double x, double y)
{
    try 
    {
        if(y==0)
            throw y;
        else
        cout<<"Division = "<<x/y;
    }
    catch(double)
    {
        cout<<"\nException inside function\n";
        throw;
    }
}

int main()
{
    try
    {
        divide(10.5, 2.0);
        divide(20.0, 0.0);
    }
    catch(double)
    {
        cout<<"Exception Inside Main Function";
    }

    return 0;
}


/*

Division = 5.25
Exception inside function
Exception Inside Main Function

*/
