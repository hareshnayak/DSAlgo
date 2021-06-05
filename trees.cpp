/*
TREES

Non linear DS in which there are
- ROOT NODE (no parent)
- INTERNAL NODE (parent and children)
- LEAF NODE (no children)

n-ary tree : n is the max no. of children in the tree
e.g. binary : 2 children at max (can have 0,1,2 children)

Labeled(named nodes) and unlabeled tree(unnamed nodes)
siblings - nodes at same level

Nodes are stored at different locations but have connection
with parent and children

TYPES OF BINARY TREE
- FULL
- COMPLETE
- ALMOST COMPLETE
- SKEWED BINARY
- ROOTED

FULL BINARY TREE
Every non-leaf node in a binary tree has non-empty
left and right sub trees
If it has n leaves and 2n-1 nodes

COMPLETE
A binary tree where each level(except for leaf) contains
the maximum number of nodes
i.e every level is completely full of nodes

PERFECT
A binary tree where each level contains
the maximum number of nodes and leaves
OR
Non leaf nodes have 2 children
i.e every level is completely full of nodes


ROOTED BINARY
Except root node no other node is allowed to have degree "2",
other nodes are with degree 1 or 3

What is degree?
degree is the the summation of indegree and outdegree
Indegree - no. of inedges in a node (no. of parents)
Outdegree - no. of outedges in a node (no. of children)

*When there are non-directional tree degree is no. of children
Direction is only considered in ROOTED BINARY TREE

Root node has 2 degree while all other nodes and leaves
have 1 pr 3 nodes

ALMOST COMPLETE BINARY TREE
In binary tree of depth d is an almost binary tree if
 - Any node n at level less than (d-1) has two children
 - For any node n in the tree with a right or left child
  at level 'L' the node must have left child (if it has right
  child) and all the nodes on the left hand side of the node must have
 two children

 LEVEL OF TREE = HEIGHT OF TREE = DEPTH OF TREE

 BUT

 HEIGHT OF NODE != DEPTH OF NODE

 The no. of nodes at depth/height in a perfect binary tree
 = 2^d or 2^h

Minimum no. of nodes in a binary tree of height h = h+1
Happens in skewed binary tree

Maximum no. of nodes in a binary tree of height h = 2^(h+1)-1

No of nodes with 2 children if there are n leaves  = n-1
*/
