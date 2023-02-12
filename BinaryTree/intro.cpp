#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        
        q.pop();
        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp->data << " ";
            if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }
        
    }
}
//Inorder using recursion:
void inorder(node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
//Preorder using recursion:
void preorder(node* root){
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
//post order using recursion:
void postorder(node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// inorder using Iteration:
void inorderI(node* root){
    stack<node*> s;
    node* curr = root;
    while(curr != NULL || s.empty() == false){
        while(curr != NULL){
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        cout << curr->data << " ";
        curr = curr->right;
    }
}

void preorderI(node* root){
    stack<node*> s;
    node* curr = root;
    while(curr != NULL || s.empty() == false){
        while(curr != NULL){
            s.push(curr);
            cout << curr->data << " ";
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        curr = curr->right;
    }
}

//postorder Traversal using Iteration method
void postOrderI(node* root){
    stack<node*> s;
    node* prev = NULL;
    s.push(root);
    while(!s.empty()){
        auto curr = s.top();
        if(prev == NULL || prev->left == curr || prev->right == curr){
            if(curr->left){
                s.push(curr->left);
            }
            else if(curr->right){
                s.push(curr->right);
            }
            else{
                s.pop();
                cout << curr->data << " ";
            }
        }
        else if(curr->left == prev){
            if(curr->right){
                s.push(curr->right);
            }
            else{
                s.pop();
                cout << curr->data << " ";
            }
        }
        else if(curr->right == prev){
            s.pop();
            cout << curr->data << " ";
        }
        prev = curr;
    }
}

//just build a tree.
node* buildTree(node* root) {

    // cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);    

    if(data == -1) {
        return NULL;
    }

    // cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    // cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;

}

// build a tree using level order inputs.

void LevelOrderTree(node* &root) {
    queue<node*> q;
    int data;
    cout << "Enter data for root" << endl;
    cin >> data;
    root = new node(data);
    q.push(root);
    while(!q.empty()) {
        node* temp = q.front();
        q.pop();
        cout << "Enter data for left node of "<< temp->data << endl;
        int leftData;
        cin >> leftData;
        if(leftData != -1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }
        cout << "Enter data for right node of "<< temp->data << endl;
        int rightData;
        cin >> rightData;
        if(rightData != -1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }

    
    }   
   

}
int main()
{
    node* root = NULL;
    LevelOrderTree(root); //
    levelOrderTraversal(root);
    // root = buildTree(root);
    // cout << "Level Order Traversal" << endl;
    // levelOrderTraversal(root);
    // cout <<"Inorder Traversal Recursion" << endl;
    // inorder(root);
    // cout << endl;
    // cout <<"Inorder Traversal Iteration" << endl;
    // inorderI(root);
    // cout << endl;
    // cout <<"Preorder Traversal Recursion" << endl;
    // preorder(root);
    // cout << endl;
    // cout <<"Preorder Traversal Iteration" << endl;
    // preorderI(root);
    // cout << endl;
    // cout <<"Postorder Traversal Recursion" << endl;
    // postorder(root);
    // cout << endl;
    // cout <<"Postorder Traversal Iteration" << endl;
    // postOrderI(root);
    // cout << endl;
    return 0;
}