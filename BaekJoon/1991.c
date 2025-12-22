#include <stdio.h>
#include <stdlib.h>

typedef struct tree
{
    char data;
   struct tree *left;
   struct tree *right;
}tree;
tree *newNode(char value)
{
    tree *node = (tree *)malloc(sizeof(tree));
    node->data = value;
    node->left = NULL;
    node->right = NULL;

    return node;
}

tree *search(tree *root, char value)
{
 if(root!=NULL)
 {
    if(root->data == value)
    {
        return root;
    }
    else
    {
        tree *temp = search(root->left,value);
        if(temp!=NULL)
        {
            return temp;
        }
        else
        {
            return search(root->right,value);
        }
    }
 }   
 else return NULL;
}

void preOrder(tree *root)
{
    if(root==NULL) return;
    printf("%c",root->data);
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(tree *root)
{
    if(root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%c",root->data);
}
void inOrder(tree *root)
{
    if(root==NULL) return;
    inOrder(root->left);
    printf("%c",root->data);
    inOrder(root->right);
}
int main()
{
   int num;
   scanf("%d",&num);

   //tree *nodes[26];
   tree *root = newNode('A');
   /*
   for(int i=0; i<26; i++)
   {
    nodes[i] = newNode('A'+i);
   }
    */
    for(int i=0; i<num; i++)
    {
        char value,left,right;
        scanf(" %c %c %c",&value,&left,&right);
        /*
        int valueidx = value-'A';
        if(left!='.')
        {
        int leftidx = left-'A';
        nodes[valueidx]->left = nodes[leftidx];
        }
        if(right!='.')
        {
        int rightidx = right-'A';
        nodes[valueidx]->right = nodes[rightidx];
        } 
        */
       tree *parentNode = search(root,value);
       if(parentNode!=NULL)
       {
        if(left!='.')
        {
            parentNode->left = newNode(left);
        }
        if(right!='.')
        {
            parentNode->right = newNode(right);
        }
       }   
    }

    preOrder(root);
    printf("\n");
    inOrder(root);
    printf("\n");
    postOrder(root);
    printf("\n");

    return 0;
}
    
