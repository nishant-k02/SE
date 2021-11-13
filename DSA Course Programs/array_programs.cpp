#include <iostream>
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
	for (int i = 0; i < n; i++)a
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
	  	
	return 0;
}
