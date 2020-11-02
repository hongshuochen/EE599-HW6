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
  int minDepth(TreeNode* root);
  
  //q2
  vector<int> rightSideView(TreeNode* root);

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

//q3
class​ ​Graph​ { 
 public:
  Graph​(std::​map​<​int​, std::s​ et​<​int​>> ​&​vertices​) : v_(vertices) {}
  std::map<​int​, std::set<​int​>> v_; 
  vector<int> DFS(int root);
};

#endif
