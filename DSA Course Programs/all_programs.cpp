#include <iostream>
using namespace std;

int main()
{

	//Pattern Programs	
	
	int row, col;
	cout << "Enter number of Rows: ";
	cin >> row;
	cout << "Enter number of Columns: ";
	cin >> col;
	
	cout << "\n";
	
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= col; j++)
		{
			cout << "*"; 
		}
		cout << endl;	
	}	
	// Hollow Rectangle Program
	
	int rows, cols;
	cout << "\n\t\t\t\tHollow Rectangle Program " << endl;
	cout << "\nEnter number of Rows: ";
	cin >> rows;
	cout << "Enter number of Columns: ";
	cin >> cols;
	
	cout << "\n";
	
	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <= cols; j++)
		{
			if (i==1 || i == rows || j == 1 || j == cols)
			
				cout << "*";
			else
				cout << " "; 
		}
		cout << endl;
	}
	
	
	// Inverted Half Pyramid
	
	int n;
	
	cout << "\n\t\t\t\tHalf Inverted Pyramid Program " << endl;
	cout << "\nEnter number of Rows: ";
	cin >> n;
	
	cout << "\n";
	
	for (int i = n; i>=1; i--)
	{
		for (int j = 1; j<=i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
}