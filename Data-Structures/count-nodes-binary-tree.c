/*
problem description:
http://www.martinbroadhurst.com/counting-nodes-in-a-binary-tree-recursively.html
https://www.sanfoundry.com/c-program-to-find-the-number-of-nodes-in-a-binary-tree/
*/

struct node 
{ 
     int data; 
     struct node* left; 
     struct node* right; 
}; 

//method 1:
int count_nodes(struct node *root)
{
    if(root == NULL)
	return 0;

    else 
	return(count_nodes(root->left)+1+count_nodes(root->right));
    
}

//method 2:
static int count=0;
int count_nodes(struct node *root)
{
    if(root != NULL)
    {
        count_nodes(root->left);
        count++;
        count_nodes(root->right);
    }
    return count;
}


