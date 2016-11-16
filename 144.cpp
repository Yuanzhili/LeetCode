#include <iostream>
#include <vector>
#include <iterator>
#include <stack>

using namespace std;



struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> seq;
        stack<const TreeNode*> s;
        if(root) s.push(root);
        while( !s.empty() )
        {
            const TreeNode *T = s.top();
			seq.push_back(T->val);
			s.pop();
			if(T->right) s.push(T->right);
			if(T->left) s.push(T->left);
		}
        
        return seq;
    }

};

int main()
{
	


	return 0;
}
