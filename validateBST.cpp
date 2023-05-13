/*
To check for valid BST from a BT  
*/

class Solution {
public:

    bool validate(TreeNode* root, long min, long max)
    {
        // we will specify range for each element and each element should be present inside that range
        if(root == NULL) {
            //you have reached the end 
            return true;
        }
        if(root->val < min || root->val > max) return false;
        // else move ahead
        return validate(root->left, min, root->val) && validate(root->right, root->val, max);
    }

    bool isValidBST(TreeNode* root) {
        return validate(root, long.INT_MIN, long.INT_MAX);
    }
};