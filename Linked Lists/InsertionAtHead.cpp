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

void InsertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data <<" ";
        temp = temp->next;
    }

    cout << endl;
}
int main()
{
    Node* head = new Node(10);
    
    InsertAtHead(head,11);
    InsertAtHead(head,12);
    print(head);

    return 0;
}