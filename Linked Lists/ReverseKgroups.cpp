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

void print(Node* head){
    Node* temp =head;
    while(temp!= NULL){
        cout << temp->data <<" ";
        temp=temp->next;
    }
    cout << endl;
}

void Insert(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
int getLength(Node* &head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count +=1;
        temp = temp->next;
    }
    return count;
}
Node* KgroupsReverse(Node* &head, int k, int length){
    if(head == NULL) {
        return NULL;
    }
   if(length < k){
        return head;
   }
    //Step 1 : to reverse K  nodes 

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    int count  = 0;

    while(curr != NULL && count < k){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    //step 2
    if(forward != NULL){
       
          
        head->next = KgroupsReverse(forward,k,length-k);
        
        
    }
    //step 3
    //return head of reverse lists
    return prev;


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
    Insert(tail,7);
    Insert(tail,8);
    print(head);
    int length = getLength(head);
    Node* temp = KgroupsReverse(head,3,length);
    print(temp);
    return 0;
}