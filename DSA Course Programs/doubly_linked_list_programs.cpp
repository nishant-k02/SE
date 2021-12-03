#include <iostream> 

using namespace std;

class node
{

public:
	int data;
	node* next = NULL;
	node* prev = NULL;
	
	node(int val)
	{
		data = val;
		next = NULL;
		prev = NULL;
	}
};

void InsertAtHead(node* &head, int val)
{
    node* n = new node(val);
    n->next = head;
    
    if (head != NULL)
    {
        head->prev = n;    
    }
    
    head  = n;
}

void InsertAtTail(node* &head, int val)
{
    if (head == NULL)
    {
        InsertAtHead(head, val);
        return;
    }
    
    node* n = new node(val);
    node* temp = head;
    
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    
    temp->next = n;
    n->prev = temp;
}

void deleteAtHead(node* &head)
{
    node* todelete = head;
    head = head->next;
    head->prev = NULL;
    
    delete todelete;
}

void deletion(node* &head, int pos)
{
    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }
    
    node* temp = head;
    int count = 1;
    
    while (temp != NULL && count != pos)
    {
        temp = temp->next;
        count++;
    }
    
    temp->prev->next = temp->next;
    
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }
    
    delete temp;
}

int length(node *head)
{
    int l = 0;
    node* temp = head;
    
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}

node* kappend(node* &head, int k)
{
    node* newHead;
    node* newTail;
    node* tail = head;
    
    int l = length(head);
    k = k%l;
    int count = 1;
    while (tail->next != NULL)
    {
        if (count == l-k)
        {
            newTail = tail;
        }
        
        if (count == l-k+1)
        {
            newHead = tail;
        }
        
        tail = tail->next;
        count++;
    }
     
    newTail->next = NULL;
    tail->next = head;
    
    return newHead;
}

void display(node* head)
{
    node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
    cout << endl;
    cout << endl;
}

int main()
{
    node* head = NULL;
    InsertAtTail(head, 1);
    InsertAtTail(head, 2);
    InsertAtTail(head, 3);
    InsertAtTail(head, 4);
    InsertAtHead(head, 5);
    
    cout << "After Basic Operations: " << endl; 
    
    display(head);
    
    deletion(head, 1);
    
    cout << "After Deletion: " << endl;
    
    display(head);
    
    cout << "After appending k nodes: " << endl;
    node* newHead = kappend(head, 3);
    display(newHead);
}

