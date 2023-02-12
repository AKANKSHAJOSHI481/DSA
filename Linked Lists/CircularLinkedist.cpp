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

    ~Node(){
        int value = this->data;

        if(this->next != NULL){
            delete next;
            next = NULL;
        }

        cout << "memory is free for node with data "<<value << endl;
    }
};

void InsertNode(Node* &tail, int element, int data){
  //Assuming that the element is present in the list
  //empty list
  if(tail == NULL){
   Node* newNode = new Node(data);
   tail = newNode;
   newNode->next = newNode;
  }  

  else{
    //non-empty lists
    Node* curr = tail;
    while(curr->data != element){
        curr = curr->next;
    }

    //element is found and curr represents element
    Node* temp = new Node(data);
    temp->next = curr->next;
    curr->next = temp;

  }
}

void print(Node* tail){

    Node* temp = tail;
    if(tail == NULL){
        cout << "The linked list is empty"<<endl;
        return;
    }
    do{
        cout << tail->data << " ";
        tail = tail->next;
    }while(tail != temp);
    cout << endl;

}

void DeleteNode(Node* &tail, int value){
    if(tail == NULL){
        cout << "List is empty ,please check again!!" << endl;
        return;
    }
    //Assuming the value is present in that linked list and
    Node* prev = tail;
    Node* curr = prev->next;
    while(curr->data != value){
        prev = curr;
        curr = curr->next;
    }

    prev->next = curr->next;
    //1 node linked list
    if(curr == prev){
        tail =   NULL;
    }
    //more than 1 node linked list
    else if(tail == curr){
        tail = prev; 
    }
    curr->next = NULL;
    delete curr;

}
int main()
{
    Node* tail = NULL;
    //empty list
    // InsertNode(tail,5,2);
    // print(tail);
    // InsertNode(tail,2,3);
    // print(tail);
    InsertNode(tail,3,1);
    print(tail); 
    DeleteNode(tail,1);
    print(tail);

    return 0;
}