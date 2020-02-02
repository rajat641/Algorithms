/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector< int > ans;
    // void pos(TreeNode *r){
    //     if(r==NULL) 
    //     return;
    //     pos(r->left);
    //     pos(r->right);
    //     ans.push_back(r->val);
    // }
    vector<int> postorderTraversal(TreeNode* root) {
        if(!root) return ans;
        //pos(root);
        stack< TreeNode * > s;
        deque< int > q;
     TreeNode * r= root;
        while(!s.empty() || r!= NULL){
            if(r!=NULL){
                s.push(r);
                q.push_front(r->val);
                r = r->right;
            }else{
                r = s.top();
                s.pop();
                r= r->left;
            }
        }
        ans.assign(q.begin(),q.end());
        return ans;
        
       // return ans;
    }
};
