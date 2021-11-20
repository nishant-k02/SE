#include <iostream>

using namespace std;

class node
{
public:
  int roll_no;
  int setA;
  int setB;
  node *next;
  
};

class linked_list
{
public:
  
  node *create()
  {
    node *new_node = new node();
    
    cout << "Enter Roll-no: ";
    cin >> new_node->roll_no;
    
    cout << "Student who likes Vanila (Yes = 1, No = 1): ";
    cin >> new_node->setA;
    
    cout << "Student who likes ButterScotch (Yes = 1, No = 1: ): ";
    cin >> new_node->setB;
    
    new_node->next = NULL;
    
    return new_node;
  }
  
  void display(node * head)
  {
    node *trav = head; 
    if(trav == NULL)
    {
      cout << "\nLinked List is empty";
    }
    
    
    while (trav != NULL)
    {
      cout << "Roll-no: " << trav->roll_no << endl;
      trav = trav->next;
    }
  }
  
  void insert_at_end(node **head)
  {
    node *new_node = create();
    node *temp = *head;
    
    if(temp == NULL)
    {
      *head = new_node;
    }
    else
    {
      while (temp->next != NULL)
      {
        temp = temp->next;
      }
      temp->next = new_node;
    }
  }
  
  void either_or_both(node **head)
  {
    node *trav = *head;
    cout << "Roll no of Students who like Vanilla or ButterScotch or both: ";
    
    while (trav != NULL)
    {
      if (trav->setA == 1 || trav->setB == 1)
      {
        cout << trav->roll_no << " ";
      }
      trav = trav->next;
    }
    cout << endl;
  }
  
  
  void both(node **head)
  {
    node *trav = *head;
    cout << "Roll no of Students who like Vanilla and ButterScotch both: ";
    
    while (trav != NULL)
    {
      if (trav->setA == 1 && trav->setB == 1)
      {
        cout << trav->roll_no << " ";
      }
      trav = trav->next;
    }
    cout << endl;
  }
  
  void neither(node **head)
  {
    node *trav = *head;
    
    int count = 0;
    
    while (trav != NULL)
    {
      if (trav->setA == 0 && trav->setB == 0)
      {
        count++;
      }
      trav = trav->next;
    }
    cout << "Count of Students who like neither Vanilla nor ButterScotch : " << count <<endl;
    cout << endl;
  }
};

int main()
{
  linked_list obj;
  node *head = NULL;
  int n;
  
  cout << "\nEnter number of Students: ";
  cin >> n;
  
  for (int i = 0; i < n; i++)
  {
    obj.insert_at_end(&head);
    cout << endl;
  }
  
  obj.either_or_both(&head);
  obj.both(&head);
  obj.neither(&head);
  
  return 0;
}