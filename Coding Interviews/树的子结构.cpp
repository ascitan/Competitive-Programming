
/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    bool dfs(TreeNode* t1, TreeNode* t2)
    {    
        if(t1==NULL && t2==NULL)return true;
        if(t2==NULL)return true;
        if(t1==NULL)return false;
        if(t1->val == t2->val)
        {
            return dfs(t1->left, t2->left) && dfs(t1->right, t2->right);
        }
        else return false;
    }
    bool HasSubtree(TreeNode* t1, TreeNode* t2)
    {
        if(t1 == NULL || t2 == NULL) return false;
        return dfs(t1,t2) || HasSubtree(t1->left,t2)|| HasSubtree(t1->right,t2);
    }
};