#include<stdio.h>
#include<stdlib.h>
struct tree
{
 int data;
 struct tree* left;
 struct tree* right;
};
void insert(struct tree*,struct tree*);
struct tree* root=NULL;
void create()
{
 struct tree* ctr;
 ctr=(struct tree* )malloc(sizeof(struct tree));
 ctr->left=NULL;
 ctr->right=NULL;
 printf("Enter data: \n ");
 scanf("%d",&ctr->data);
 if(root==NULL)
 {
 root=ctr;
 }
 else
 {
 insert(root,ctr);
 }
}
void insert(struct tree* local_root,struct tree* new_node)
{ 
  if(new_node->data < local_root->data)
  {
   if(local_root->left==NULL)
   {
   local_root->left=new_node;
   }
   else
   {
   insert(local_root->left,new_node);
   }
  }
  else if(new_node->data > local_root->data)
  {
   if(local_root->right==NULL)
   {
   local_root->right=new_node;
   }
   else
   {
   insert(local_root->right,new_node);
   }
  }
}
//inorder traversal
void inorder(struct tree* ptr)
{
  if(ptr!=NULL)
  {
  //printf("%d ",ptr->data);
  inorder(ptr->left);
  printf("%d ",ptr->data);
  inorder(ptr->right);
  }
}
//preorder traversal
void preorder(struct tree* ptr)
{
  if(ptr!=NULL)
  {
  printf("%d ",ptr->data);
  preorder(ptr->left);
  //printf("%d ",ptr->data);
  preorder(ptr->right);
  }
}
//postorder traversal
void postorder(struct tree* ptr)
{
  if(ptr!=NULL)
  {
  //printf("%d ",ptr->data);
  postorder(ptr->left);
  postorder(ptr->right);
  printf("%d ",ptr->data);
  }
}
int main()
{
 int n;
 printf("Enter number of elements to store into tree: \n");
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
  create();
 }
 printf("Elements in inorder traversal: \n");
 inorder(root);
 printf("\n");
 printf("Elements in preorder traversal: \n");
 preorder(root);
 printf("\n");
 printf("Elements in postorder traversal: \n");
 postorder(root);
 return 0;
}
