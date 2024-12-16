class Solution {
public:
    vector<int> res;

    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode* cur = root;
        stack<TreeNode*> t;
        while(cur!=NULL || !t.empty()){
            while(cur!=NULL){
                t.push(cur);
                cur = cur->left;
            }
            cur = t.top();
            t.pop();
            res.push_back(cur->val);
            cur = cur->right;
        }
        return res;
    }
};
