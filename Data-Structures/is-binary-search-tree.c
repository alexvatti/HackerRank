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
