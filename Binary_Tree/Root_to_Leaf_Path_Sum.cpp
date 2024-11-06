class Solution {
  public:
  
//   int treePathsSum(Node *root) {
//         return helper(root, 0);
//     }
    
//     int helper(Node* root, int currentSum) {
//         if (!root) return 0;
//         currentSum = currentSum * 10 + root->data;
//         if (!root->left && !root->right) {
//             return currentSum;
//         }
//         return helper(root->left, currentSum) + helper(root->right, currentSum);


    int solve(Node *root,int parent){
        if(root==NULL){
            return 0;
        }
        if(root-> left == NULL && root-> right == NULL){
            return ( 10 * parent + root-> data);
        }
        root-> data = 10 * parent + root-> data;
        return solve ( root-> left ,root-> data ) + solve (root-> right, root-> data);

    }
  
    int treePathsSum(Node *root) {
        // code here.
        return solve ( root,0);
        
    }
};
