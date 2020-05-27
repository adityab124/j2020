/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        
        if(root==NULL)
            return 0;
        else
        {
            int ldepth=maxDepth(root->left);
            int rdepth=maxDepth(root->right);
            if(ldepth>rdepth)
                return(ldepth+1);
            else
                return(rdepth+1);
        }
        
    }
};
/////////////////////////OR///////////////////////////////
int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }

///////////////////////////OR////////////////////////////
Depth-first-search
======
Only one line code.

int maxDepth(TreeNode *root)
{
    return root == NULL ? 0 : max(maxDepth(root -> left), maxDepth(root -> right)) + 1;
}

/////////////////////////////////////////////////
//
//Breadth-first-search
//======
//Calculate the count of the last level.
//
//int maxDepth(TreeNode *root)
//{
//    if(root == NULL)
//        return 0;
//    
//    int res = 0;
//    queue<TreeNode *> q;
//    q.push(root);
//    while(!q.empty())
//    {
//        ++ res;
//        for(int i = 0, n = q.size(); i < n; ++ i)
//        {
//            TreeNode *p = q.front();
//            q.pop();
//            
//            if(p -> left != NULL)
//                q.push(p -> left);
//            if(p -> right != NULL)
//                q.push(p -> right);
//        }
//    }
//    
//    return res;
//}
