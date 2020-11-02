
# HW2 EE599 - Computing Principles for Electrical Engineers

- Plesae clone the repository, edit [README.md](README.md) to answer the questions, and fill up functions to finish the hw.
- For non-coding quesitions, you will find **Answer** below each question. Please write your answer there.
- For coding questions, please make sure that your code can run ```bazel run/test```. In this homework, you will need to fill up [cpplib.cc](src/lib/cpplib.cc) and tests in [tests](tests).
- For submission, please push your answers to Github before the deadline.
- Deadline: TBD by 23:59 pm
- Total: TBD. 100 points is considered full credit.

## Question 1 (20 Points. Easy)
In this question, we will write two functions using BFS to *measure* a given binary tree. The definition of ```TreeNode``` could be found in ```cpplib.h```. Note that this problem is partially same with HW4Q2, but you are supposed to use BFS to sovle it. Recursive-based solution will lead to zero credit.
- Given a binary tree, find its total number of nodes.
- Given a binary tree, find the sum of numbers from all its nodes.

  Example: 
  Input: 
  ```
            1
           / \
          2   3
         / \ 
        4   5
             \ 
              6
  ```
  Expected output: total number of nodes is 6, and the sum of nodes is 21.

Write several tests using GTest for your function in tests/q1_student_test.cc, and run the following command to verify the functionality of your program.
```
bazel test tests:q1_student_test
```

## Question 2 (20 points. Easy)
Given a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.

  Example:
  Input:
  ```

    1            <---
   /  \
  2     3         <---
   \     \
    5     4       <---
  ```
  Expected output: [1, 3, 4]

Write several tests using GTest for your function in tests/q2_student_test.cc, and run the following command to verify the functionality of your program.
```
bazel test tests:q2_student_test
```
