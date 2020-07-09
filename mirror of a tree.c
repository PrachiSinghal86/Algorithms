struct node
{
    int data;
    struct node*left;
     struct node*right;
}root;
void mirror(root)
{
     struct node *temp;
     if (root->left==NULL and root->right==NULL)
        return;
     temp=root->left;
     root->left=root->right;
     root->right=temp;
     if(root->left!=NULL)
     {
         mirror(root->left);
     }
     if(root->right!=NULL)
     {
         mirror(root->right);
     }
  }
