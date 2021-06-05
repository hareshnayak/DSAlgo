/*

GRAPH
- non linear DS consisting of vertices and edges
- set of edges among vertices

- Directed and non-directional graph

Non-directional graph
- closed circuit

Directed Acyclic Graph (DAG)
- Direct graph but there is no complete cycle

TRAVERSAL IN GRAPHS
    - Breadth first traversal
    - Depth first traversal

                A -------- B
                | \       /|
                |  \     / |
                |   \   /  |
                C --- D -- E
Visiting A
Vertices connected to A are called its immediate neighbours ie B,C,D in any order
visiting the immediate neighbours after a vertice is called exploration

DEPTH FIRST TRAVERSAL (uses STACK to implement)
- Start with any node
- Then access any of its immediate neighbour
    (In directional graph the immediate neighbours will be outedges)
- Repeat with new node
- If there are no more immediate neighbours then backtrack to the
node that has immediate neighbour and then continue
- It uses LIFO (Last in First out)

BREADTH FIRST TRAVERSAL (uses STACK to implement)




*/
