#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    //Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    //destructor 
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

void InsertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;

}


void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next= temp;
    tail = temp;
}

void InsertAtPosition(Node* &tail,Node* &head,int position, int data){
    //insert at start
    if(position == 1){
        InsertAtHead(head,data);
    }
    else{
    Node* temp = head;
    int count =1 ;

    while(count < position-1){
        temp = temp->next;
        count++;
    }
    //inserting at last position
    if(temp->next == NULL){
        InsertAtTail(tail,data);
        return;
    }
    Node* nodetoinsert = new Node(data);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
    }
}
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<< " ";
        temp = temp->next;
    }
    cout<<endl;

}

void deleteNode(int position, Node* &head, Node* &tail){
    if(position == 1){
        Node* temp = head;
        head = head->next;

        //memory free start node
        temp->next = NULL;
        delete temp;
    }
    else{
        //deleteing any middle node or last node
        Node* current = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt < position){
            prev = current;
            current = current->next;
            cnt++;
        }
        if(current->next == NULL){
            tail = prev;
        }

        prev->next = current->next;
        current->next = NULL;
        delete current;

    }

}
int main()
{
    
    
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    
    print(head);
    InsertAtTail(tail, 12);
    print(head);
    InsertAtTail(tail, 15);
    print(head);
    InsertAtPosition(tail,head, 2, 13);
    print(head);
    InsertAtPosition(tail,head,1,14);
    print(head);
    cout <<"head data = "<< head->data << endl;
    cout << "tail data= " << tail->data << endl;
    cout << "DELETION" << endl;
    deleteNode(5,head,tail);
    print(head);
    cout <<"head data = "<< head->data << endl;
    cout << "tail data= " << tail->data << endl;
    return 0;
}