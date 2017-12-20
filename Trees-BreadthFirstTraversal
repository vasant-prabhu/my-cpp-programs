// Tree Data Structure Implementation
// Breadth-first traversal (BFS)

#include<iostream>
#include<conio.h>

typedef struct node
{
   int data;
   struct node *left;
   struct node *right;
}Node;

Node* newNode(int val)
{
   Node* ptr= new Node;
   ptr->data=val;
   ptr->left=NULL;
   ptr->right=NULL;
   return ptr;
}

int height(Node* root)
{
   if(root == NULL)
   {
      return 0;
   }
   else
   {
      int lheight=height(root->left);
      int rheight=height(root->right);
      
      if (lheight>rheight)
      {
	     return(lheight+1);
	  }
	  else
	  {
	     return(rheight+1);
	  }
   }
}

printGivenLevel(Node *root, int level)
{
   if ( root==NULL )
   return -1;
   
   if ( level==1 )
    std::cout<<root->data<<" "<<std::endl;
   
   if ( level>1 )
   {
      printGivenLevel(root->left,level-1);
      printGivenLevel(root->right,level-1);
   }
}


void printLevelOrder(Node *root)
{
	//Height is calculated from height()
   int treeheight = height(root);
   for (int level=1;level<=treeheight;level++)
   {
   	   printGivenLevel(root,level);
   }
}

int main()
{
   using namespace std;
   Node *root=NULL;
   root = newNode(50);
   root->left = newNode(40);
   root->right = newNode(80);
   root->left->left = newNode(45);
   root->left->right = newNode(49); 
   root->right->left = newNode(60);
   root->right->right = newNode(90);
   cout<<"Printing Breadth First Traversal of the tree"<<endl;
   printLevelOrder(root);
   
   return 0;
}
