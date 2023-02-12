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
    Node* newNode = new Node(data);
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

Node* ReverseLinkedList(Node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    while(curr != NULL){
        forward = curr->next ;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    return prev;
}

void reverse(Node* &head, Node* &curr, Node* &prev){
    if(curr == NULL){
        head = prev;
        return;
    }
    Node* forward = curr->next;
    reverse(head, forward, curr);
    curr->next = prev;
}

Node* recursiveReverse(Node* &head){
    Node* curr = head;
    Node* prev = NULL;

    reverse(head,curr,prev);
    return head;
}
int main()
{
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;
    InsertAtTail(tail, 2);
    InsertAtTail(tail,3);
    InsertAtTail(tail,4);
    print(head);
    Node* temp = recursiveReverse(head);
    print(temp);
    return 0;
}