# notes
## 3/25/2025

* went over 'big O' notation as well as visual representation for each inerstion for each type of sequence container
* thats basically it...
* i wish my professor went over code and coded in class since im going to actually blow up and die this shit hard.
* apparently, a DLL is faster (by a little bit) than a SLL since a DLL node is bigger than a SLL node.
* im so ***b o r e d...***
* maybe im not fit for comp sci...
* ***v ACTUAL NOTES START HERE v***
* I deed a data struture that holds definitions of terms, but i only have the name of the term. How can I find its definition efficiently?
  * You can use vector for most things, but understnad how to use it correctly with the term and create keys for each thing
  * the user gives something, then you use a sequence container and a function of some kind to solve a problem
  * but the most important thing is having  ***key*** (something to compare it with)
  * for example, using a number to find and aquire a part of data or even a string to find it
```c++
definition = dictionary[7] // interms of a number within an array
definition = dictionary ["apple"] // interms of a string

// you can use differnet types of KEYS to search for values.
```
* there are many things we are going ot learn, but the most important thing would be std::maps
* std::maps use a key(value to be searched) and a type of data
* associative containters sort thtier elements automatically according to a certain ordering criterion
* Elements are either
  * values of any type (std::set, std::multi_set)
  * key/value pairs (map, std::multi_map)
* Each key maps to an associated value
* The criterion to sort the elements
  * A function that compares either the value (sets) or the key (maps)
  * By default, operator < is used
  * You can supply your own comparison function
* Implemented as balanced binary trees
  * eevery element (node) has one parent and up to two children
  * All ancestors to the left have less values
  * All ancestors to the right have greater values
* The associated containers differ in
  * The kinds of elements they support (value, key/value)
  * How they handle duplicates
* Major advantege of associateive containers
  * Finding an element with a specifc value is rather fast because it has logarithmic complexity
  * Remember, in all sequence containers, you have linear complexity
* Drawback
  * You cant' modify value (sets) or keys( maps) directly
    * Would corrupt the automatic sort of the elements

## 3/27/2025

* among us
* yeah chat im cooked ( . -.)
* n-arry tree - node based tree with n amounts of "children" (nodes in nodes)
* Abilities of maps and multimaps
* Maps and multimaps sory hteir elements automatically
* Have good performance, O(log n), when searching for elements that have a certain key.
* when inserting into a tree, the insertion has to be at the end of the tree
* if you try and insert a duplicate key, abstraction says to do nothing.
* Sets:
  * Node based struture containing **values**
  * Each node contains a left, right and parent
  * sorted such that
    * Nodes to the left are less
    * Nodes to the right are greater
* Maps:
* Basically the same thing but with values associated with the "key".

## 4/8/2025

* man... spring break is over... (oh well)
* is the crashout imminent?
* attributes of a tree is ***root , size***
* root - node without parent (usually top node)
* internal node - node iwth at least one child (node)
* external node - node without children (nodes)
* Ancestors of a node - parents/ nodes attatched to other nodes
* depth of a node - number of ancestors (number of attacted nodes to get to the bottom.)
* height of tree - maximum depth
* decendant of a node - child, grandchild, grand-grandchild, etc. (all nodes bellow node presented)
* subtree - the parting of the node presented (b -> a,b [where] a -> left subtree & b -> right subtree)
* sibling - nodes that share a parent, same level
* binanry tree's internal nodes have at most two children
* children of internal node is called left child and right child
* types of binanry tree:
  * Full - if every node has 0 or two children
  * Complete - all levels are full except possibly the last level
  * Perfect - all internanl nodes have 2 children and leaf nodes are at the same level
* efficiency class for binany tree with O(h) where h = height of tree
* going over a program.. just easy shit...
* basically the smae as what i am currently learning in math 170A (discrete structures / math strutures)
* Preorder traversal - node is visited before its desendants
* application - print a strutured document
* Postoder traversal - all desendants are visited before moving
* Inorder traversal - vistited after its left subtree and before its right subtree
* euler tour traversal techinique - touching each node three times

## 4/17/2025

* sooooo i kind of missed 2 days of class (both bc i slepted in)...
* we are going to roll with it and not cope at all :3
* binary search tree's superpower is searching
* yeah that was basically it... i forgor to take notes

## 4/22/2025
* just coping at the fact that im not passing this class, so.. .see you guys all next semester :3
* hopefully i pass all my other classes....
* unorder contianers - no order to containers (duh)
* takes away responsibility, no sequence to the container.
* YOU BETTER DO HW5 AT LEAST
* hash tables - is kind of like an associative container
* take responsiblity of the ordering and remove it. Hashtabe has no ordering process.
* when implementnig a has table, you use  unordered map
* linked cannot be more than 3 elements
* In unorderdcontainers, elements have no defined order
  * If you insert tjree elelemnts, they might have any oder when you iterate over all the elements int he container.
  * If you insert a fourth element,  the order of the elemnts previousely inserted might change.
  * The only important fact is that a a specific element is somewhere in the container
  * Even when you have two containers with equal elements inside, the oder might be different.
  * Think of it as like a bag
* Unorderd containers are typically implemented as a hash table.
  * Internally,  the container is an array of linked lists.
* Using a hash function, the position of an element in the array gets processesd.
  * The goal is that each element has its won position so that you have fast access to each eleemnt provided that the has function is fast
  * Multiple elements migth ahve the same position because such a fas perfect has function is not elways possible or might require that the array somumes a hugh amount of memory.
* Major advantage of unordered containers
* Finding an element iwht a specific value is even faster than for associative containers.
  * The use of unordered containers provides amortized constant complexity, provided that you  have  agood has function
  * However, providing a good has function is easy

## 4/24/2025
* yeah... the crash out is real
* anyways... i really need to study up on c++ and python next semester... really need to get coding down in general
* also, planning to do some drawings until the end of the sememser... (1 per day until april) i hope it goes well
* if we find a constant less than log(n), then its an advantage, if not, its at a dissadnvantage
* Collisions - when two different keys get assigned to the same table index
  * 30 % 7 = 16% 7 = 2
* Solutions to deal with collsiions
  * Chaining
  * Open addressing (Probing)
    * Linear probrin
    * Quadratic probing
  * Revent collsiions completly - Direct Hashing
* Linear probing - only have  asingle array
* If bucket is occupied, search forward for a free bucket
* Search is circular
  * When end of table is reached, wrap around to beginning
* Search fails if starting point is reached
* dissadvantage of linear probing is clumps of data
* advantage of probing is no lists
* Quadratic probing - same approach as linear probing, but probe sequence is different
* Linear probing sequence (H = key%N)
   * index = H, H+1, H+2, H+3...
   * index (i) = [H + 1]%N, i = 0,1,2...
* Quadratic probing sequence"
   * index (i) = [H + c1 * i + c2 *i^2]%N, i = 0,1,2...
   * c1 and c2 are constatnts that are given
     * For instance c1 = 1, c2 = 1

## 4/29/2025

* graphs a re 2 dimensional structure
* there are directed graphs and undirected graphs
* directed graphs - usually indicated by arrow, shows a direction where the data moves
* undirected graphs - any flow between a line, no edges have no orientation
* graphs can include "islands" - basically solo nodes that dont connect to everything
* not all graphs have oto connect all nodes together
* sparce graph - not all nodes are connected to each other, just paths connecting from one node to another
* directed acyclic graphs - directed graph with no cycle
* bipartite graph - verticies can be plit nito two indipendent groups
* adjacent matrix - simple way yo represent a graph

## 5/1/2025

* DFS - depths first searching
* look for all nodes possible without repeating
* BFS - look for all  nodes attatching then move to the next
* basically  discrete structures

## 5/6/2025

* for final exam.... make sure to put file in .csv file (like im going to be able to do it in the first place)
* The most common reasons for failutre is failure to read. <-  remember that for the practice assignment (final exam)
* mt_vector.push_back( object ); (an answer to one of the questions)
