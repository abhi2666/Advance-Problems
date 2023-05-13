/*
LCA --> Longest Common Ancestor
*/
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root == NULL) return NULL;

        // check if both the values are in right 
        if(root->val < p->val && root->val < q->val){
            // means the values are on right..go to right
            // you will find the intersection 
            lowestCommonAncestor(root->right, p, q);
        }
        else if(root->val > p->val && root->val > q->val){
            // then means values are on the left of root
            lowestCommonAncestor(root->left, p, q);
        }
        else{
            // means the values are not both on left and not both on right
            // means that now you will have to go in different directions
            // hence it is a intersection..simply return the root
            return root;
        }
        reutrn NULL;
    }
};