#include <iostream>

using namespace std;

class node
{

public: 
	int data;
	node* next;
	
	node(int val)
	{
		data = val;
		next = NULL;	
	}
};

void insertAtHead(node* &head, int val)
{
	node* n= new node(val);
	
	if (head == NULL)
	{
		n->next = n;
		head = n;
		return;
	}
	
	node* temp = head;
	
	while (temp->next != head)
	{
		temp = temp->next;
	}
	
	temp->next = n;
	n->next = head;
	head = n;
}

void insertAtTail(node* &head, int val)
{
	if (head == NULL)
	{
		insertAtHead(head, val);
		return;	
	}
	
	node* n = new node(val);
	node* temp = head;
	
	while (temp->next != head)
	{
		temp = temp->next;
	}
	
	temp->next = n;
	n->next = head;
}

void display(node* head)
{
	node* temp = head;
	
	do
	{
		cout << temp->data << "->";
		temp = temp->next;
		
	} while (temp != head);
	
	cout << "NULL";
	cout << endl;
}

int main()
{
	node* head = NULL;
	
	int c;
	int arr[5] = {};
	
	cout << "1. Insert At Tail: " << endl;
	cout << "2. Insert At Head: " << endl;
	cout << "Enter the CHoice: " << endl;
	cin >> c;
	
	switch (c)
	{
		case 1: 
		cout << "Enter Elements: " << endl ;
	
		for (int i = 0; i < 5; i++)
		{
			cin >> arr[i];
		}
	
		for (int i = 0; i<5; i++)
		{
			insertAtTail(head, arr[i]);
		}
			display(head);
		}
	
	
	
	return 0;
}