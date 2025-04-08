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
