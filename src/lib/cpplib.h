#ifndef TEMPLATE_CPPLIB_H
#define TEMPLATE_CPPLIB_H

#include <map>
#include <string>
#include <vector>

using namespace std;

/**
 *  Example class used for GTest demo
 */
class CPPLib {
 public:
  //q1
  int NumberOfNodes(TreeNode* root);
  int SumOfNodes(TreeNode* root);
  
  //q2
  vector<int> rightSideView(TreeNode* root);
  vector<int> keepOdd(const vector<int>& input, int i);

  private : 
};

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

#endif
