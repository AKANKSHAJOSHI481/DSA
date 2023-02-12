#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    //constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node(){
        int value = this->data;
        //memory free
        if(this->next == NULL){
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

//traversing a linked list
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

//length of linked list
void getLength(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    cout << "Length of Linked List is "<< count << endl;
}

void InsertAtHead(Node* &tail,Node* &head, int data){
    //if list is empty
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(data);

      temp->next = head;
      head->prev = temp;
      head= temp;
    }
      
}

void InsertAtTail(Node* &tail,Node*&head, int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else{
 Node* temp = new Node(data);

    temp->prev = tail;
    tail->next = temp;
    tail = temp;
    }
   
}

void InsertAtPosition(Node* &head,Node* &tail, int position, int data){
    //Insert at Start
    if(position == 1){
        InsertAtHead(tail,head,data);
        return;
    }
    int count = 1;
     Node* temp = head;
    while(count < position-1){
        temp = temp->next;
        count++;
    }
    if(temp->next == NULL){
        InsertAtTail(tail,head,data);
        return;
    }
    Node* nodetoinsert = new Node(data);
    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next= nodetoinsert;
    nodetoinsert->prev = temp;

}

void deleteNode(Node* &head, Node* &tail, int position){
    //deleting first node
    if(position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;

    }
    //deleting middle or last node
    else{
        Node* current = head;
        Node* previous = NULL;
        int cnt = 1;
        while(cnt < position){
            previous = current;
            current = current->next;
            cnt++;
        }
        if(current->next == NULL){
            tail = previous;
        }

        current->prev = NULL;
        previous->next = current->next;
        current->next = NULL;
        delete current;
    }
}
int main()
{
    //Node* node1 = new Node(1);
    Node* head = NULL;
    Node* tail = NULL;
    print(head);
    getLength(head);
    InsertAtTail(tail,head,2);
    print(head);
    getLength(head);
    cout<< "Head value is " << head->data <<endl;
    cout<< "Tail value is "<< tail->data<<endl;
    InsertAtPosition(head,tail,2,3);
    print(head);
    getLength(head);
    cout<< "Head value is " << head->data <<endl;
    cout<< "Tail value is "<< tail->data<<endl;
    InsertAtPosition(head,tail,3,4);
    print(head);
    getLength(head);
    cout<< "Head value is " << head->data <<endl;
    cout<< "Tail value is "<< tail->data<<endl;
    InsertAtPosition(head,tail,4,5);
    print(head);
    InsertAtPosition(head,tail,5,6);
    print(head);
    InsertAtPosition(head,tail,6,7);
    print(head);
     cout<< "Head value is " << head->data <<endl;
    cout<< "Tail value is "<< tail->data<<endl;
    deleteNode(head,tail,2);
 print(head);
     cout<< "Head value is " << head->data <<endl;
    cout<< "Tail value is "<< tail->data<<endl;
    deleteNode(head,tail,5);
    print(head);
     cout<< "Head value is " << head->data <<endl;
    cout<< "Tail value is "<< tail->data<<endl;


    return 0;
}