class Solution
{
public:
    void getPreoder(vector<int> &ans, TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }

        // put the value of the current node into vector
        ans.push_back(root->val);
        // now move left and right
        getPreorder(ans, root->left);
        getPreorder(ans, root->right);
    }

    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        getPreoder(ans, root);
        return ans;
    }
};