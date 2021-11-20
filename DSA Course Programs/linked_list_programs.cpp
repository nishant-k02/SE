#include <iostream>
using namespace std;

		// BASICS OPERRATIONS

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

void insert_at_tail(node* &head, int val)
{
	node* n = new node(val);
	
	if (head == NULL)
	{
		head = n;
		return;
	}
	
	node* temp = head;
	while (temp->next != NULL)  
	{
		temp = temp->next;
	}
	temp->next = n;
}

void insert_at_start(node* &head, int val)
{
	node* n = new node(val);
	
	n->next = head;
	head = n;
}

void display(node* head)
{
	node* temp = head;
	
	while (temp != NULL)
	{
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

void deletion(node* &head, int val)
{
	if (head == NULL)
	{
		cout << "Linked List is Empty!!";
		return;
	}
		
	node* temp = head;
	while (temp->next->data != val)
	{
		temp = temp->next;
	}
	
	node* todelete = temp->next;
	temp->next = temp->next->next;
	
	delete todelete;
}

int main()
{
	node* head = NULL;
	
	insert_at_tail(head, 1);
	insert_at_tail(head, 2);
	insert_at_tail(head, 3);
	
	insert_at_start(head, 4);
	insert_at_start(head, 0);
	
	cout << "\nAfter basics Operations: " << endl;
	display(head);
	
	cout << "\nAfter Deleteion: " << endl;
	
	deletion(head, 3);
	display(head);

	return 0;
}