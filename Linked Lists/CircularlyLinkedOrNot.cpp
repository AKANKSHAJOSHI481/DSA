#include<iostream>
#include<map>
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


void Insert(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void print(Node* head){
    Node* temp =head;
    while(temp!= NULL){
        cout << temp->data <<" ";
        temp=temp->next;
    }
    cout << endl;
}

 bool hasCycle(Node *head) {
        if(head == NULL){
            return false;
        }
        
        map<Node*,bool> visited;
        Node* temp = head;
        while(temp != NULL){
            while(visited.find(temp)!=visited.end()){
                cout << "The element is on " << temp->data << endl;
                return true;
            }
            visited[temp] = true;
            temp = temp->next;
        }
        
        return false;
    }

    bool floydDetectLoop(Node* head){
        if(head == NULL){
            return false;
        }

        Node* slow = head;
        Node* fast = head;

        while(slow != NULL && fast != NULL){
            
            
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
            }
            slow = slow->next;
            if(slow == fast){
                return true;
            }
        }
        return false;
    }
int main()
{
    Node* newNode = new Node(1);
    Node* head = newNode;
    Node* tail = newNode;
    
    print(head);
    tail->next = head->next;
    cout << head->data << endl;
    cout << tail->data << endl;
    
    if(floydDetectLoop (head)){
        cout << "The linked List has a cycle in it" << endl;

    }
    else{
        cout << "The Linked List does not have a cycle in it" << endl;
    }
    return 0;
}