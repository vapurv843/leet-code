void mirror(struct Node* root) {
    // code here
    if(root == NULL) return ;
    mirror(root->left);
    mirror(root->right);
    struct Node * ptr = root->left;
    root->left = root->right;
    root->right = ptr;
    
}