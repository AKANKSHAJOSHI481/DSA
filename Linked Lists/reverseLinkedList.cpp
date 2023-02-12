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

void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next= temp;
    tail = temp;
}
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<< " ";
        temp = temp->next;
    }
    cout<<endl;
}
//Iterative method
Node* ReverseLinkedList(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward  = NULL;
    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;

    }

    return prev; 
}

//recursive Method
void reverse(Node* &head, Node* curr, Node* prev){
    //base case
    if(curr == NULL){
        head =prev;
        return;
    }
    Node* forward = curr->next;
    reverse(head, forward, curr);
    curr->next = prev;
}
Node* RecursiveReverse(Node* &head){
    Node* curr = head;
    Node* prev = NULL;
    reverse(head, curr, prev);
    return head;

}

//it will return head of the reverse list
Node* reverse1(Node* head){
    //base case
    if(head == NULL || head->next == NULL){
        return head; 
    }

    Node* chotahead = reverse1(head->next);
     head->next->next = head;
     head->next = NULL;

     return chotahead;
}
Node* recurse2LinkedList(Node* head){
    return reverse1(head);

}
 
Node* reverseBetween(Node* head, int left, int right){
    int count =0;
    Node* curr = head;
    Node* prev = NULL;
    while(count < left){
        count++;
        prev = curr;
        curr = curr->next;
    }
    Node* forward = NULL;
    while(curr != NULL && left < right){
        forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            left++;
    }

    return head;
}
int main()
{
    Node* Node1 = new Node(1);
    Node* head = Node1;
    Node* tail = Node1;
    InsertAtTail(tail,2);
    InsertAtTail(tail,3);
    InsertAtTail(tail,4);
    InsertAtTail(tail,5);
    print(head);
    Node* temp2 = ReverseLinkedList(head);
    print(temp2);
   // Node* temp = ReverseLinkedList(head);
    //print(temp);
    return 0;
}