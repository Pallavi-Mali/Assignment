#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;
 
struct Node
{
    int key;
    Node *left, *right;
 
    Node(int key)
    {
        this->key = key;
        this->left = this->right = nullptr;
    }
};
 

void printNodes(Node* root)
{
    
    if (root == nullptr) {
        return;
    }
 
    int level = 1;
 
   
    unordered_map<int, vector<int>> map;
 
    
    map[level].push_back(root->key);
 
   
    queue<Node*> q1, q2;
 
    if (root->left && root->right)
    {
        q1.push(root->left);
        q2.push(root->right);
    }
 
    while (!q1.empty())
    {
        
        level++;
 

        int n = q1.size();
 
   
        while (n--)
        {
        
            Node* x = q1.front();
            q1.pop();
 
            map[level].push_back(x->key);
 
           
            if (x->left) {
                q1.push(x->left);
            }
 
            if (x->right) {
                q1.push(x->right);
            }
 
           
            Node* y = q2.front();
            q2.pop();
 
            map[level].push_back(y->key);
 
          
            if (y->right) {
                q2.push(y->right);
            }
 
            if (y->left) {
                q2.push(y->left);
            }
        }
    }
 
    for (int i = map.size(); i > 0; i--)
    {
        for (int j: map[i]) {
            cout << j << " ";
        }
    }
}
 
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left->left = new Node(8);
    root->left->left->right = new Node(9);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(11);
    root->right->left->left = new Node(12);
    root->right->left->right = new Node(13);
    root->right->right->left = new Node(14);
    root->right->right->right = new Node(15);
 
    printNodes(root);
 
    return 0;
}
