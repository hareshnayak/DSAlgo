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

BREADTH FIRST TRAVERSAL (uses QUEUE to implement)
- Visit any node
- Explore it completely
- Repeat

First in first out (FIFO)

TRAVERSAL IS VALID ONLY IF ALL THE NODES/VERTICES ARE VISTED

TOPOLOGOCAL SEQUENNCE
- For having topological sequence, the graph must be DAG
- If Graph is DAG,
    if there is edge between u and v [u-->v] then in topological sequence 'u'
        always comes before 'v'

TOPOLOGCAL ORDERING
- When the graph is directional Acyclic
- Calculate the indegrees for all nodes
- Choose the node with least indegree '0'
- remove all out going edges from that node from graph and reassign indegrees to nodes
- then repeat i.e., keep choosing the node with least indegree

This gives topological ordering that is different from BFS or DFS
*/
