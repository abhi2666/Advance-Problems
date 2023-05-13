/*
A height-balanced binary tree is a binary tree in which the depth of the 
two subtrees of every node never differs by more than one.
*/

class Solution {
public:

    int checkBalanced(TreeNode* root){

        if(root == NULL) return 0;

        int left = checkBalanced(root->left);
        if(left == -1) return -1;
        int right = checkBalanced(root->right);
        if(right == -1) return -1;
        // check the diff. here
        if(abs(left - right) > 1) return -1;
        // now to get the height
        return 1 + max(left, right);

    }

    bool isBalanced(TreeNode* root) {
        if(checkBalaned(root)) return true;
        return false;
    }
};