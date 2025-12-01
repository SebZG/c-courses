/*

    Insertion
    Deletion
    Search
    Traversing (Pre-order, Post-order and In-order)

*/

/*

    INSERTION
    - Start iterating using level order traversal in a binary tree.
    - If a node whose left child is missing is found then insert the
    given new node as the left child of that node.
    - Else if a node whose right child is missing is found then insert
    #the given node as the right child of that node.
    - Else a node whose both right child and left child are missing is found then
    insert the new node as the left or right child (any position) of that node.

*/

/*

    DELETETION
    - Start traversing from the root node of the tree.
    - Find the node that you want to delete and the node at the deepest right.
    - Replace the target node (node to be deleted ) with the deepest rightmost node.
    - Finally, delete the deepest rightmost node (as it contains the node to be deleted now).

*/

/*

    SEARCHING
    - Start traversing from the root node of the tree.
    - Compare the target node (node to be searched) with each node's value.
        - If the current node's value is equal to target node, then target node is found.
        - else if, the current node's value is not equal to target node, again start searching
        the left and right child by traversing.
        - else, you reach the end of the tree and do no find any node's value equal to target value,
        then the target node is not present in the tree.

*/

/*

    TYPES OF BINARY TREES
    Acording to Number of Children:
    - Full Binary Tree: A binary tree in which every node other than the leaves has two children.
    - Degenerate Binary Tree: A tree where each parent node has only one child.
    - Skewed Binary Trees: A binary tree in which all the nodes are skewed to the left or right.

    Acording to Completion of Levels:
    - Complete Binary Tree: A binary tree in which all levels are completely filled except possibly the last level, and the last level has all keys as left as possible.
    - Perfect Binary Tree: A binary tree in which all the internal nodes have two children and all leaves are at the same level.
    - Balanced Binary Tree: A binary tree in which the height of the left and right subtrees of any node differ by not more than one.-

    Acording to Node Valus:
    - Binary Search Tree (BST): A binary tree in which all the left descendants of a node are less than the
    node and all the right descendants are greater than the node.
    - AVL Tree: A self-balancing binary search tree where the difference in heights between left and right
    subtrees is at most one.
    - Red-Black Tree: A binary search tree with an extra bit of storage per node: its color, which can be
    either red or black. It ensures the tree remains balanced.
    - B Tree: A self-balancing search tree in which nodes can have multiple children and is optimized for
    systems that read and write large blocks of data.
    - B+ Tree: An extension of the B tree which maintains the data in a sorted order and allows sequential
    access.
    - Segment Tree: A binary tree used for storing the intervals or segments. It allows querying which of the
    stored segments contain a given point.
    - Fenwick Tree (Binary Indexed Tree): A data structure that provides efficient methods for calculation and
    manipulation of the prefix sums of a table of values.

    Applications of Binary Trees
    Binary tree are the versatile data structure widely used in the various applications due to the
    hierarchical nature and efficient performance in the certain operations. Following are some applications of the binary tree:

    - Full Binary Tree: It is used in the binary heap implementations and it is optimal merge patterns.
    - Complete Binary Tree: It is used in the binary heaps which are useful in the priority queues and it is used
    in the efficient storage management such as heap sort.
    - Perfect Binary Tree: It is used in the complete binary tree implementation for the efficiency and it is
    perfect for the implementing full binary trees in the array representations.
    - Balanced Binary Tree: It is used in the AVL and Red-Black trees for the efficient searching operation,
    insertion operation and deletion operation.
    - Binary Search Tree (BST): It is used in the database indexing and also it is used in the dictionary and
    phonebook applications. It is also efficient for the search operation, insert operation and delete operation when it was balanced.
    - AVL Tree: It is used in the situations where the search time needs to be minimized. It is database
    applications where the frequent insertions and deletions are expected.
    - Red-Black Tree: It is used in C++ STL map and multimap implementations.
    - Segment Tree: It is used in the computational geometry for the problems such as finding intersections,
    range, queries, etc.,
    - Fenwick Tree (Binary Indexed Tree): It is used in the scenarios requiring the dynamic cumulative frequency
    tables. It is efficient for the frequency queries and updates.
*/
