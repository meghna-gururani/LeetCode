/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* sortedArrayToBSTHelper(int* nums, int start, int end);

struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    if(numsSize==0){
        return NULL;
    }
    return sortedArrayToBSTHelper(nums, 0, numsSize - 1);   
}

struct TreeNode* sortedArrayToBSTHelper(int* nums, int start, int end) {
    if (start > end) {
        return NULL;
    } 
    int mid = start + (end - start) / 2;
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = nums[mid];
    node->left = NULL;
    node->right = NULL;  
    node->left = sortedArrayToBSTHelper(nums, start, mid - 1);
    node->right = sortedArrayToBSTHelper(nums, mid + 1, end);
    return node;
}