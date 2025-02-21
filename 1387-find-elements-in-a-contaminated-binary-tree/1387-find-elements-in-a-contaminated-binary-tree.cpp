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
class FindElements {
public:
    TreeNode* root;
    void recover(TreeNode* root,int val){
        if(root==NULL){
            return;}
        root->val=val;
        recover(root->left,2*val+1);
        recover(root->right,2*val+2);
    }

    FindElements(TreeNode* root) {
       this->root=root;
       recover(root,0); 
    }
    
    bool fi(TreeNode *root,int target){
        if(root==NULL){return false;}
        if(root->val==target){
            return true;
        }
        return fi(root->left,target) || fi(root->right,target);
    }

    bool find(int target) {
        return fi(root,target);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */