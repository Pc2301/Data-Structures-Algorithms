using namespace std;

#include<iostream>


class TreeNode
{
public:
	int value=0;
	TreeNode *left;
	TreeNode *right;

	TreeNode(int x)

	{
		value=x;
		left=right=nullptr;
	}


};

class TreePathSum
{
public:

	static bool hasPath(TreeNode *root, int sum)

	{

		if (root==nullptr)
		{
			return false;
		}

		// If current node is leaf node then check sum 

		if(root->value==sum && root->left==nullptr && root->right==nullptr)
		{
			return true;
		}

		return hasPath(root->left,sum-root->value)|| hasPath(root->right,sum-root->value);
	}
};


int main(int argc, char *argv[]) {
  TreeNode *root = new TreeNode(12);
  root->left = new TreeNode(7);
  root->right = new TreeNode(1);
  root->left->left = new TreeNode(9);
  root->right->left = new TreeNode(10);
  root->right->right = new TreeNode(5);
  cout << "Tree has path: " << TreePathSum::hasPath(root, 23) << endl;
  cout << "Tree has path: " << TreePathSum::hasPath(root, 16) << endl;
}