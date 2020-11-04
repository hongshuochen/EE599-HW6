#ifndef TEMPLATE_CPPLIB_H
#define TEMPLATE_CPPLIB_H

#include <map>
#include <string>
#include <vector>
#include <set>

struct ListNode
{
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr) {}
};

struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class SinglyLinkedList {
public:
  // default constructor
  SinglyLinkedList();

  //constructor creates a cyclic or acyclic linked list based on the value of i
  //if i is negative or greater than input size, the last item's next is nullptr
  //else creates a linked list out of vector "input" and connects the last item's next to i(th) item in the list
  SinglyLinkedList(vector<int> &input, int i);

  ~SinglyLinkedList(); //destructor, cleans up

  bool empty(); //checks if empty

  int size(); //returns size

  void push_back(int i); //inserts at the back

  void push_front(int i); //inserts at the front

  void insert_after(ListNode *p, int i); //inserts value i after p

  void erase(ListNode *p); //erases node p

  void pop_front(); //remove the first item

  void pop_back(); //remove the last item

  ListNode *GetBackPointer(); //returns the pointer to the last item

  ListNode *GetIthPointer(int i); //returns pointer to ith element

  void reverse(); // reverse the linked list in-place

  void print(); //prints the list: ex. Empty list: { }. List with Items: {1, 2, 3}

  // q4
  void sortList();

  ListNode *head_; //Pointer to the first element
};

class CPPLib
{
public:
  // q1
  int NumberOfNodes(TreeNode *root);
  int SumOfNodes(TreeNode *root);
  int minDepth(TreeNode *root);

  // q2
  std::vector<int> rightSideView(TreeNode *root);


  // q5
  std::vector<char> ShortestPath(std::vector<char> &vertices,
                                 std::vector<std::pair<char, char>> &edges,
                                 char node_1, char node_2);

private:
};

// q3
class​ ​Graph​
{
public:
  Graph​(std::​map​<​int​, std::s​et​<​int​>> ​ & ​vertices​) : v_(vertices) {}
  std::map<​int​, std::set<​int​>> v_;
  std::vector<int> DFS(int root);
};

#endif
