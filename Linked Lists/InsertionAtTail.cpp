#include<iostream>
using namespace std;

class Node{
    public:
   int data;
   Node* next;

   Node(int data){
    this->data = data;
    this->next = NULL;
   }
};

void InsertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;

    }
    cout << endl;

}
int main()
{
    Node* Node1 = new Node(10);
    Node* head = Node1;
    Node* tail = Node1;
  

    InsertAtTail(tail,11);
    print(head);
    InsertAtTail(tail,12);
    print(head);
    return 0;
}