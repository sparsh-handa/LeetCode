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
		bool isValidBST(TreeNode* root) {

			return validate(root, std::numeric_limits<long>::min(), std::numeric_limits<long>::max() );
		}

	private:
		bool validate(TreeNode* node, long lower, long upper){

			if( node == NULL ){

				// empty node or empty tree is valid always
				return true;
			}

			if( (lower < node->val) && (node->val < upper) ){

				// check if all tree nodes follow BST rule
				return validate(node->left, lower, node->val) && validate(node->right, node->val, upper);
			}
			else{
				// early reject when we find violation
				return false;
			}


		}
	};