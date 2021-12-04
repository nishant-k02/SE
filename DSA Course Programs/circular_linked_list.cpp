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

void deleteAtHead(node* &head, int val)
{
    node* temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    
    node* todelete = head;
    temp->next = head->next;
    head = head->next;
    
    delete todelete;
}

void deletion(node* &head, int pos)
{
    if (pos == 1)
    {
        deleteAtHead(head, pos);
        return;
    }
    
    node* temp = head;
    int count = 1;
    while (count != pos - 1)
    {
        temp = temp->next;
        count++;
    }
    
    node* todelete = temp->next;
    temp->next = temp->next->next;
    
    delete todelete;
    
}

void display(node* head)
{
    cout << endl;
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
	
	int no, c, o, e;
	
	cout << "\t\t\t\tCreate a Circular Linked List: " << endl;
	
	cout << "\nEnter number of elements to create a Linked List: ";
	cin >> no;
	
	int arr[no] = {};
	
	cout << "Enter Elements: " << endl ;
	    
	    	for (int i = 0; i < no; i++)
	    	{
	    		cin >> arr[i];
	    	}
	    
	    	for (int i = 0; i<no; i++)
	    	{
	    		insertAtTail(head, arr[i]);
	    	}
	    	
	    	cout << "Created Linked List is: ";
	    	display(head);
	
	cout << "\nEnter the number of operations you want to perform: ";
	cin >> o;
	
	for (int i = 0; i < o; i++)
	{
	    cout << "\n1. Insert At Tail: " << endl;
	    cout << "2. Insert At Head: " << endl;
	    cout << "3. Delete any node: " << endl;
	    cout << "4. Delete At Head: " << endl;
	    cout << "\n\t\t\t\t\tEnter the Choice: ";
	    cin >> c;
	    
	    switch (c)
	    {
	    	case 1: 
	    	cout << "\nEnter Element to add at Tail: ";
	    	cin >> e;
	    	
	    	insertAtTail(head, e);
	    	cout << "\nLinked List after adding element at tail is: ";
	    	display(head);
	    		
	    	break;
	    		
	    	case 2:
	    	cout << "\nEnter a element to add at Head: ";
	    	cin >> e;
	    	
	    	insertAtHead(head, e);
	    	cout << "\nLinked List after adding element at head is: ";
	    	display(head);
	    	
	    	break;
	    	
	    	case 3:
	    	cout << "\nEnter  the position of element to delete: ";
	    	cin >> e;
	    	
	    	deletion(head, e);
	    	cout << "\nLinked List after deleting element from given postion: ";
	    	display(head);
	    	
	    	break;
	    	
	    	
	    	case 4: 
	    	cout << "Enter position of Head to delete: ";
	    	cin >> e;
	    	
	    	if (e == 1)
	    	    deleteAtHead(head, e);
	    	else
	    	    cout << "Incorrect Position of Head!!";
	    	    
	    	    
	    	cout << "\nLinked List after deleting element from Head: ";
	    	display(head);
	    	
	    	break;
	    }
	 }
	
	return 0;
}