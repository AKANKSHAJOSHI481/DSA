#include<iostream>
using namespace std;
class Node{
    public:
    int data; //
    Node* next; //
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void Insert(Node* &tail, int data){
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << endl;
}

int getlength(Node* head){
    Node* temp = head;
    int length = 0;
    while(temp != NULL){
        length = length+1;
        temp = temp->next;
    }
    return length;
    
}

    Node* findMiddle(Node* head){

        int len = getlength(head);
        int ans = len/2;
        
        Node* temp = head;
        int count = 0;
        while(count < ans){
            temp = temp->next;
            count++;
        }
        return temp;
    }
int main()
{
    Node* newNode = new Node(1);
    Node* head = newNode;
    Node* tail = newNode;
    Insert(tail,2);
    Insert(tail,3);
    Insert(tail,4);
    Insert(tail,5);
    Insert(tail,6);
    print(head);
    cout << getlength(head) << endl;
    Node* temp = findMiddle(head);
    cout << "Middle element is " << temp->data << endl;


    return 0;
}