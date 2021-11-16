#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

	// SUB-ARRAY PROGRAM

int main()
{
	cout << "\n\t\t\t\tSum of Sub-Arrays Program " << endl;
	int n;
	
	cout << "\nEnter no. of elements in Array: ";
	cin >> n;
	int arr[n];
	
	int curr_sum = 0;
	
	cout << "\nEnter elements of Array: \n"<<endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	cout << "\nSum of Sub Arrays are as follows: \n" << endl;
	
	for (int i = 0; i < n; i++)
	{
		curr_sum = 0;
		
		for (int j = i; j < n; j++)
		{
			curr_sum += arr[j];
			cout << curr_sum << endl;
		}
	}
	
	
	
	// Upper Case and Lower Case of String Program
	
	
	string str = "niSHant";
	
	//convert to upper case
	
	for (int i = 0; i<str.size(); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	
	cout << "Capitalize String is: " << str << endl;
	
	//convert to lower case
	
	for (int i = 0; i<str.size(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
	}
	
	cout << "LowerCase String is: " << str << endl;
	  	
	return 0;
}
