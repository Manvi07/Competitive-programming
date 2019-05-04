#include <iostream>
using namespace std;

class BST{
    struct node{
        int val;
        node* right;
        node* left;
    };
    private:
    node* root;
    node* insert(node* root, int a)
    {
        if(root==NULL)
        {
            root = new node;
            root->right=root->left=NULL;
            root->val=a;
            return root;
        }
        if(root->val>a)
        {
            if(root->left!=NULL)
            insert(root->left, a);
            else
            {
                root->left = new node;
                root->left->val = a;
                root->left->right=root->left->left=NULL; 
            }
        }
        else if(root->val<a)
        {
            if(root->right!=NULL)
            insert(root->right, a);
            else
            {
                root->right = new node;
                root->right->val = a;
                root->right->right=root->right->left=NULL; 
            }
        }
        return root;
    };
    int& successor(node * root)
    {
        if(root->right==NULL)
        {
            return root->val;
        }
        else return successor(root->right);
    }
    node *deleteNode(node* root, int key)
    {
        node* temp;
        if(root==NULL)
        return root;
        if(root->val==key)
        {
            if(root->left==NULL and root->right==NULL)
            {
                delete root;
                return NULL;
            }
            else if(root->left==NULL)
            {
                temp = root->right;
                root->right = root;
                delete root;
                return temp;
            }
            else if(root->right==NULL)
            {
                temp = root->left;
                root->left = root;
                delete root;
                return temp;
            }
            else
            {
                swap(successor(root), root->val);
                root = deleteNode(root, key);
            }
        }
        else if(root->val>key)
        {
            root->left = deleteNode(root->left, key);
        }
        else if(root->val<key)
        {
            root->right = deleteNode(root->right, key);
        }
    };
    void inorder(node* root)
    {
        if(root==NULL)
        return;
        else
        {
            inorder(root->left);
            cout << root->val << " ";
            inorder(root->right);
        }
    };
    public:
    BST(){
        root = NULL;
    };
    ~BST(){
        delete root;
    }
    
    void insertNode(int x)
    {
        root = insert(root, x);
        if(root==NULL)
        cout <<":(\n";
    };
    void display()
    {
        inorder(root);
        cout << endl;
    };
    void Delete(int key)
    {
        root = deleteNode(root, key);
    }
    
};
int main()
{
    BST tree;
    tree.insertNode(4);
    tree.insertNode(2);
    tree.insertNode(10);
    tree.insertNode(5);
    tree.insertNode(1);
    tree.insertNode(75);
    tree.display();
    tree.Delete(4);
    tree.display();
}