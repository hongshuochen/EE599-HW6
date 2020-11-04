
# HW6 EE599 - Computing Principles for Electrical Engineers

- Please clone the repository, edit [README.md](README.md) to answer the questions, and fill up functions to finish the hw.
- For non-coding questions, you will find **Answer** below each question. Please write your answer there.
- For coding questions, please make sure that your code can run ```bazel run/test```. In this homework, you will need to fill up [cpplib.cc](src/lib/cpplib.cc) and tests in [tests](tests).
- For coding questions, there is a **black box** testing for each question. All points are only based on passing the test cases or not (i.e. we don't grade your work by your source code). So, try to do comprehensive testing before your final submission.
- For submission, please push your answers to Github before the deadline.
- Deadline: TBD by 23:59 pm
- Total: 120. 100 points is considered full credit.

## Question 3 (30 points. Medium)
Consider the following representation of a graph using an std::map that maps each vertex to its neighbors, and the sample usage of it:
```cpp
class​ ​Graph​ { 
  public:
​  Graph​(std::​map​<​int​, std::s​ et​<​int​>> ​&​vertices​) : v_(vertices) {}
  std::map<​int​, std::set<​int​>> v_; 
};

int​ ​main​() {
  std::map<​int​, std::set<​int​>> vertices{
    {​1​, {​2​, ​3​}},
    {​2​, {​1​, ​3​, ​4​, ​5​}}, {​3​, {​1​, ​2​, ​4​}}, {​4​, {​2​, 3, ​4​}}
    };
  Graph ​g​(vertices); 
}
```
- Add a new method to this class to implement the **​non-recursive version​ of D​FS algorithm**.
- Your function should take a vertex called root as the starting point, and should output a vector containing the nodes that it visits in DFS order.

Write several tests using GTest for your function in tests/q3_student_test.cc, and run the following command to verify the functionality of your program.
```
bazel test tests:q3_student_test
```

## Question 4 (20 points. Medium)
Given the head of a linked list, write a function ```ListNode* sortList(ListNode* head)``` that returns the head of list after sorting it in ascending order.

Example:
input: 2->1->0->5
After sorting: 0->1->2->5

Write several tests using GTest for your function in tests/q4_student_test.cc, and run the following command to verify the functionality of your program.
```
bazel test tests:q4_student_test
```

## Question 5 (20 points. Medium)
Given a graph with known node name and their pair connectivity, write a function ```int ShortestDistance(std::vector<char> &node, std::vector<std::pair<char, char>> &vertices, char node_1, char node_2)```that returns the shortest distance between two nodes `node_1` and `node_2`. If two nodes are not connected, return -1.

```
Example:
node = {'A','B','C','D','E','F','G'};
vertices = { {'A','B'},
             {'A','C'},
             {'B','C'},
             {'C','E'},
             {'E','F'},
             {'D','F'} 
            };
    
Expected result: 
shortest distance of 'A' and 'B' is 1, 
shortest distance of 'A' and 'E' is 2.
shortest distance of 'A' and 'G' is -1.
```

Write several tests using GTest for your function in tests/q5_student_test.cc, and run the following command to verify the functionality of your program.
```
bazel test tests:q5_student_test
```