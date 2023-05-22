#include <iostream>

using namespace std;

struct Node{
  // properties
  int data;
  struct Node *left, *right;
  
  // constructor
  Node(int data){
    this->data = data;
    left = right = NULL;
  }

};

// preorder traversal
void preorderTraversal(struct Node* node){
  if(node == NULL) return;

  cout << node->data << " "; //menampilkan data pertama yang masuk
  preorderTraversal(node->left);
  preorderTraversal(node->right);
}

// postorder traversal
void postorderTraversal(struct Node * node){
  if(node == NULL) return;

  postorderTraversal(node ->left);
  postorderTraversal(node ->right);
  cout <<node->data<< " ";
}

// inorder Traversal
void inorderTraversal(struct Node * node){
  if(node == NULL) return;

  inorderTraversal(node ->left);
  cout <<node->data<< " ";
  inorderTraversal(node ->right);
  
}
int main() {
struct Node* root = new Node(18);
root->left = new Node(30);
root->right = new Node(33);
root->left->left = new Node(29);
root->left->right = new Node(32);

cout << endl<<"Inorder Traversal Output ";
inorderTraversal(root);

cout << endl<<"Preorder Traversal Output ";
preorderTraversal(root);

cout << endl<< "postorder Traversal Output ";
postorderTraversal(root);


}