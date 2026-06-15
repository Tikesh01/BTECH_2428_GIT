#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class node{
public:
    int data;
    node* left; 
    node* right;

    node(int val){
        data = val;
        left = right = NULL;
    }
};
static int idx=-1;
node* create_tree(vector<int>& arr){
    idx++;
    if(arr[idx] == -1){
        return NULL;
    }
    node* root= new node(arr[idx]);
    root->left = create_tree(arr);
    root->right = create_tree(arr);

    return root;
}
void preorder_traversal(node* root ){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);     
}

void postorder_traversal(node* root){
    if(root == NULL){
        return;
    }
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    cout<<root->data<<" ";
}
void inorder_traversal(node* root){
    if(root == NULL){
        return;
    }
    inorder_traversal(root->left);
    cout<<root->data<<" ";
    inorder_traversal(root->right);
}
void level_order(node* root){
    queue<node*> q;
    q.push(root);
    node*  curr;
    while (q.size()>0)
    {
        curr = q.front();
        q.pop();

        cout<<curr->data<<" ";

        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!= NULL){
            q.push(curr->right);
        }
    }
}
int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    node* root = create_tree(preorder);

    cout<<root->data<<" "<<root->left->data<<" "<<root->right->data<<endl;

    preorder_traversal(root);
    cout<<endl;
    postorder_traversal(root);
    cout<<endl;
    inorder_traversal(root);
    cout<<endl;
    level_order(root);

    return 0;
}