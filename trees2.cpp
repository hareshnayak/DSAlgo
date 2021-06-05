/*
TREES 2 part

BINARY SEARCH TREE
LEFT SUBTREE < ROOT NODE < RIGHT SUBTREE

INSERTING INTO BST

If root is NULL
   then create root node
return

If root exists then
   compare the data with node.data

   while until insertion position is located

      If data is greater than node.data
         goto right subtree
      else
         goto left subtree

   endwhile

   insert data

end If



DELETING IN BST
case 1 : Deleting a node with zero children (leaf)
case 2 : Deleting a node with 1 child
case 3 : Deleting a node with 2 children

DELETION OF A LEAF NODE
- Direct deletion

DELETIION OF NODE WITH ONE CHILD
- Swap the child by parent (node to be deleted)
- Then delete the child (the node to be deleted earlier parent)

DELET ION OF NODE WITH TWO CHILDREN
- Replace with minimum of Right Subtree element or
  maximum of Left Subtree element


TREE TRAVERSAL
Two ways
- Breadth First Traversal / Level Order Traversal
- Depth Firs Traversal
    - Inorder - Left Parent Right
    - Preorder - Parent Left Right
    - PostOrder - Left Right Parent

Example : Postorder - 8 9 6 7 4 5 2 3 1
          In order  - 8 6 9 4 7 2 5 1 3

          IMPORTANT
          Post n Pre orders are used to identify the parent and Inorder
          is used to identify the left and right subtrees

          Now see in in order the rightChild is at last and
          in postOrder Parent is at last
          Hence, 1 is parent (ROOT)
          and then 3 is rightChild and the rest are in leftSubtree

          In left subtree 2,4,6 are parent nodes as they are in between
          of two nodes in in order and after two nodes in post order (ie)
          left and right nodes
          Hence, Binary tree obtained is

                                1
                            2       3
                        4       5
                    6      7
                8       9

    NOTE: In order traversal in BST is always in ascending order

    Example 2: Pre order - a b d e c f g
                In order - d b e a f c g
            Find the post Order

        Ans. As we consider pre/post order to identify the parent we observe
        a is parent as in PRE - order is PARENT LEFT RIGHT
        So, as a is parent then checking left and right from inorder

        d b e are left children and f c g are right children

        among d b e, d is left child and e i right child while b is parent
        among f c g,  c is left child and g is right child while c i parent

        Hence Binary obtained is

                            a
                        b       c
                    d       e f     g

        Thus post order is : LEFT RIGHT PARENT
            d e b f g c a







*/
