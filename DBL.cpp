#include <iostream>
using namespace std;

struct Node {
   int inputs;
   struct Node *prev ;
   struct Node *next;
   };
  
Node* newNode(int val)
{
   Node* temp = new Node;
   temp->inputs = val;
   temp->prev = temp->next = nullptr;
   return temp;
}
void displayList(Node* head)
{
   while (head->next != nullptr) {
      cout << head->inputs << " <==> ";
      head = head->next;
      }
   cout << head->inputs << endl;
}
  

void insert(Node** head, int node_data)
{
   Node* temp = newNode(node_data);
   temp->next = *head;
   (*head)->prev = temp;
   (*head) = temp;
}
  

void reverseList(Node* *head)
{
   Node* left = *head, * right = *head;
   
   while (right->next != nullptr)
   right = right->next;
  
   
   while (left != right && left->prev != right) {
      
      swap(left->inputs, right->inputs);
      left = left->next;
      right = right->prev;
   }
}
int main()
{
   Node* headNode = newNode(742);
   insert(&headNode, 235);
   insert(&headNode, 123);
   insert(&headNode, 12);
   insert(&headNode, 14);
   cout << " Inputs list : " << endl;
   displayList(headNode);
   cout << " Outputs list : " << endl;
   reverseList(&headNode);
   displayList(headNode);
  
   return 0;
}