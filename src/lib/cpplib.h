#ifndef TEMPLATE_CPPLIB_H
#define TEMPLATE_CPPLIB_H

#include <map>
#include <string>
#include <vector>
#include <set>


struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class CPPLib {
 public:
  // q1
  int NumberOfNodes(TreeNode *root);
  int SumOfNodes(TreeNode *root);
  int minDepth(TreeNode *root);

  // q2
  std::vector<int> rightSideView(TreeNode *root);

  // q4
  ListNode *sortList(ListNode *head);

  // q5
  int ShortestDistance(std::vector<char> &node,
                       std::vector<std::pair<char, char>> &vertices,
                       char node_1, char node_2);

  private:
};

// q3
class​ ​Graph​ {
 public:
  Graph​(std::​map​<​int​, std::s​et​<​int​>> ​&​vertices​): v_(vertices) {} 
  std::map<​int​, std::set<​int​>> v_;
  std::vector<int> DFS(int root);
};

#endif
