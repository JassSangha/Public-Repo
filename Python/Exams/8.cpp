#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};

class KK
{
    Node* head = nullptr;
    public:
    KK(int new_data)
    {
        Node* n = new Node;
        n->data = new_data;
        n->next = nullptr;
        head = n;
}

void insertNode(int new_data)
{
    Node* temp = head;
    while(temp->next != nullptr)
{
    temp = temp->next;
}
Node* n = new Node;
n->data = new_data;
n->next = nullptr;
temp->next = n;
}

void deleteNode(int position)
{
    if(position == 0)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    Node* temp = head;
    Node* prev = head;

while(position > 0 && temp->next != nullptr)
{
    prev = temp;
    temp = temp->next;
    position--;
}

if(position != 0)
{
    cout << "Error";
    return;
}

prev->next = temp->next;
delete temp;
}

void print()
{
    Node* temp = head;
    while(temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
};

int main()
{
KK* myLinkedList = new KK(1);
myLinkedList->insertNode(10); 
myLinkedList->insertNode(20); 
myLinkedList->insertNode(30); 
myLinkedList->insertNode(40); 
myLinkedList->insertNode(50); 
myLinkedList->print(); 
cout << endl;
myLinkedList->deleteNode(30); 
myLinkedList->print();

return 0;
};