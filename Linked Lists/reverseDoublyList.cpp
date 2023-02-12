#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next; 
    Node* prev;

    Node(int data){
        this->data = data;
        this->next =NULL;
        this->prev =NULL;
    }
};

void Insert(Node* &tail, int data){
    Node* newNode = new Node(data);
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* ReverseDoubly(Node* &head){
    Node* temp = NULL;
    Node* curr = head;
    while(curr != NULL){
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;

    }

    if(temp != NULL){
        head = temp->prev;
    }

    return head;
}
int main()
{
    Node* newNode = new Node(1);
    Node* head = newNode;
    Node* tail = newNode;
    Insert(tail,2);
    Insert(tail,3);
    print(head);
   Node* temp =  ReverseDoubly(head);
    print(temp);
    return 0;
}