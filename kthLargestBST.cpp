/*
We can use of a property of BST that on inorder traversal BST gives sorted array of elements
So we can perform Morris Inorder Traversal and by adding just a small condition we can 
get kth smallest/largest element.
*/

class Solution {
public: // Using Morris Traversal

    void morrisTraversal(TreeNode* root, int k, int &ans)
    {
        TreeNode* curr=root;
        int cnt=0;

        while(curr!=NULL)
        {
            if(curr->left==NULL)
            {
                cnt++;
                if(cnt==k)
                {
                    ans=curr->val;
                }
                curr=curr->right;
            }
            else
            {
                TreeNode* pred=curr->left;

                while(pred->right && pred->right!=curr)
                {
                    pred=pred->right;
                }

                if(pred->right==NULL)
                {   
                    pred->right=curr;
                    curr=curr->left;
                }
                else
                {
                    pred->right=NULL;

                    cnt++;
                    if(cnt==k)
                    {
                        ans=curr->val;
                    }
                    curr=curr->right;
                }
            }
        }
    }

    int kthSmallest(TreeNode* root, int k) {
        
        int ans=0;
        morrisTraversal(root, k, ans);
        return ans;
    }
};