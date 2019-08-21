/*
problem description:
https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/problem
*/

/* you only have to complete the function given below.  
node is defined as  

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

*/
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int getHeight(struct node* root) {
    // Write your code here
    if(root==NULL){
      return -1;

    }else if(root!=NULL){
        return (1+max(getHeight(root->left),    getHeight(root->right)));
    }
    return 0;
}
