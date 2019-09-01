/*
problem description:
https://www.hackerrank.com/challenges/is-binary-search-tree/problem
*/

bool checkBST(Node* root) {
    static struct Node *prev = NULL; 
    // traverse the tree in inorder fashion and keep track of prev node 
    if (root) 
    { 
        if (!checkBST(root->left)) 
             return false; 
        // Allows only distinct valued nodes  
        if (prev != NULL && root->data <= prev->data) 
              return false; 

         prev = root; 
         return checkBST(root->right); 
    } 
    return true; 
}

int  maxValue(Node * root)
{
    if( !root ) 
	return root->data;
    while( root->right ){
        root = root->right;
    }
    return root->data;
}
 
int  minValue(Node * root){
    if( !root ) 
	return root->data;
    while( root->left ){
        root = root->left;
    }
    return root->data;
}


/* Returns true if a binary tree is a binary search tree */ 
int isBST(struct node* node)  
{  
  if (node == NULL)  
    return(true);  
      
  /* false if the max of the left is > than us */
  if (node->left!=NULL && maxValue(node->left) > node->data)  
    return(false);  
      
  /* false if the min of the right is <= than us */
  if (node->right!=NULL && minValue(node->right) < node->data)  
    return(false);  
    
  /* false if, recursively, the left or right is not a BST */
  if (!isBST(node->left) || !isBST(node->right))  
    return(false);  
      
  /* passing all that, it's a BST */
  return(true);  
}  

