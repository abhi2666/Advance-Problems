// Not working

class Solution {
public:
    bool getSum(int sum, TreeNode* root, int targetSum){
        if(root == NULL){
            return 0;
        }
        sum += root->val;
        if(sum == targetSum){
            return true;
        }
        getSum(sum, root->left,targetSum);
        getSum(sum, root->right,targetSum);
        return false;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        return getSum(sum, root, targetSum);
}
};