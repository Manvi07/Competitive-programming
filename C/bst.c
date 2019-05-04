#include <stdio.h>
#include <stdlib.h>
#define max(a,b) a>=b?a:b;
struct node
{
  int data;
  struct node *left;
  struct node *right;
};
struct node* getnewnode(int data)
{
  struct node* newnode;
  newnode=malloc(sizeof(struct node*));
  newnode->left=newnode->right=NULL;
  newnode->data=data;
  return newnode;
}
struct node* insert(struct node*root, int data)
{
  if(root==NULL)
  root=getnewnode(data);
  else if(data > root->data)
  root->right=insert(root->right,data);
  else
  root->left=insert((*root).left,data);
  return root;
}
int height(struct node *root,int data)
{
  //int ht=0;
  if(root==NULL)
  return 0;
  else if(root->data==data)
  {
    if(root->left==NULL && root->right==NULL)
    return 0;
    else if(root->left==NULL)
    return 1+height(root->right,root->right->data);
    else if(root->right==NULL)return 1+height(root->left,root->left->data);
    else if(height(root,root->left->data)>=height(root,root->right->data))return 1+height(root,root->left->data);
    else return height(root,root->right->data);// return ht;
  }
  else if(data>root->data)
  {
    return height(root->right,data);
  }
  else return height(root->left,data);
}
int search(struct node* root,int val)
{
  if(root==NULL)
  return 0;
  if(root->data==val)
  return 1;
  else if(root->data>val) return search(root->left,val);
  else return search(root->right,val);
}
// int maxDepth(struct node* root)
// {
//    if (root==NULL)
//        return 0;
//    else
//    {
//        /* compute the depth of each subtree */
//        int lDepth = maxDepth(root->left);
//        int rDepth = maxDepth(root->right);

//        /* use the larger one */
//        if (lDepth >= rDepth)
//            return(lDepth+1);
//        else return(rDepth+1);
//    }
// }
struct node* findmin(struct node* root)
{
  if(root->left==NULL)
  return root;
  else return findmin(root->left);
}
struct node* delete(struct node *root,int data)
{
  if(root==NULL){printf("\nNot found!\n");return root;}
  else if(data>root->data){root->right=delete(root->right,data);return root;}
  else if(data<root->data){root->left=delete(root->left,data);return root;}
  else
  {
    if(root->right==NULL && root->left==NULL)
    {
      free(root);return NULL;
    }
  else if(root->right==NULL)
  {
    struct node* temp=root->left;
    // root=root->left;
    free(root);return temp;
  }
  else if(root->left==NULL)
  {
    struct node* temp=root->right;
    // root=root->right;
    free(root);return temp;
  }
  else
  {
    struct node* temp=findmin(root->right);
    root->data=temp->data;
    root->right=delete(root->right,temp->data);
    // free(root);
    return root;
  }
  }
}
void inorder(struct node* root)
{
  if(root==NULL)
  return ;
  inorder(root->left);
  printf("%d ",root->data);
  inorder(root->right);
}
int main()
{
  struct node *root=NULL;
  root=insert(root,10);printf("%d\n",root->data);
  root=insert(root,20);printf("%d\n",root->right->data);
  root=insert(root,15);printf("%d\n",root->right->left->data);
  root=insert(root,30);printf("%d\n",root->right->right->data);
  root=insert(root,6);printf("%d\n",root->left->data);
  inorder(root);printf("\n");
  root=delete(root,10);inorder(root);
  root=delete(root,6);
  printf("\n");
  inorder(root);
  printf("\n");
  // int h=search(root,20);
  // int j=search(root,6);
  // printf("\n20--%d\n6--%d\n",h,j);
  // printf("tree height=%d\nheight of 10=%d\n20=%d\n30=%d\n",maxDepth(root),height(root,10),height(root,20),height(root,30));
return 0;
}
