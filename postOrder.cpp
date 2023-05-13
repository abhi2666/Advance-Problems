class Solution
{
public:
    void getPostorder(vector<int> &ans, TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }

                // now move left and right
        getPostorder(ans, root->left);
        getPostorder(ans, root->right);

        // put the value of the current node into vector
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        getPostorder(ans, root);
        return ans;
    }
};