/*
problem descrption:
https://www.hackerrank.com/challenges/binary-search-tree-insertion/problem
*/

/* you only have to complete the function given below.  
node is defined as  

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

*/
struct node* createNode(int key)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = key;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}


struct node* insert( struct node* root, int data ) {

	if (root==NULL)
    {
        root = createNode(data);
    }
    else if (root->data > data)
    {
             root->left=insert(root->left, data);
    }
    else
    {
            root->right=insert(root->right, data);
    }
    return root;
	
}
