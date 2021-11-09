#include <iostream>

using namespace std;

class demo
{
    
    int num;
    public:
    
    demo(int x)
    {
        try
        {
            if(x==0)        //catch block would be called
            throw "Zero not allowed";
            num = x;
            show();
        }
        catch(const char *exp)
        {
            cout<<"Exception Caught\n";
            cout<<exp<<endl;
        }
    }
    
    void show()
    {
        cout<<"Num = "<<num<<endl;
    }
    
};

int main()
{
    //constructor will be called
    demo(0);
    cout<<"Again creating object\n";
    demo(1);
    return 0;
}


/*

Exception Caught
Zero not allowed
Again creating object
Num = 1

*/
