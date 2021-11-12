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
			cout << "* "; 
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
			cout << "* ";
		}
		cout << endl;
	}
	
	
	// Inverted Half Pyramid using numbers
	
	int m;
	
	cout << "\n\t\t\t\tHalf Inverted Pyramid Program using numbers" << endl;
	cout << "\nEnter number of Rows: ";
	cin >> m;
	
	cout << "\n";
	
	for (int i = 1; i<=m; i++)
	{
		for (int j = 1; j<=i; j++)
		{
			cout << i << " ";
		}
		cout << endl;
	}
	
	
	// Floyd Pyramid
	
	int o;
	int count = 1;
	
	cout << "\n\t\t\t\tFloyd Pyramid Program" << endl;
	cout << "\nEnter number of Rows: ";
	cin >> o;
	
	cout << "\n";
	
	for (int i = 1; i<=o ; i++)
	{
		for (int j = 1; j<=i; j++)
		{
			cout << count << " ";
			count++; 
		}
		cout << endl;
	}
	
	
	 // 0, 1  Pyramid Program
	
	 int p;
	 
	 cout << "\n\t\t\t\t0, 1  Pyramid Program" << endl;
	 cout << "Enter number: ";
	 cin >> p;
	 
	 cout << "\n";
	 
	 for (int i = 1; i<=p; i++)
	 {
	 	for (int j = 1; j<=i; j++)
	 	{
	 		if ((i+j)%2==0)
	 		{
	 			cout << "1 ";
	 		}
	 		else
	 		{
	 			cout << "0 ";
	 		}
	 	}
	 	cout << endl;
	 }
	 
	 
	 // Rhombus Pattern Program
	
	 int q;
	 
	 cout << "\n\t\t\t\tRhombus Pattern Program" << endl;
	 cout << "Enter number: ";
	 cin >> q;
	 
	 cout << "\n";
	 
	 for (int i = 1; i<=q; i++)
	 {
	 	for (int j = 1; j<=q-i; j++)
	 	{
	 		cout << " ";
	 	}
	 	
	 	for (int j = 1; j<=q; j++)
	 	{
	 		cout << "* ";
	 	}
	 	cout << endl;
	 }
	
	
	
	
}