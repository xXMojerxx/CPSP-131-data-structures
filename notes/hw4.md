# notes
## 3/25/2025
* went over 'big O' notation as well as visual representation for each inerstion for each type of sequence container
* thats basically it...
* i wish my professor went over code and coded in class since im going to actually blow up and die this shit hard.
* apparently, a DLL is faster (by a little bit) than a SLL since a DLL node is bigger than a SLL node.
* im so ***b o r e d...***
* maybe im not fit for comp sci...
* here is some actual things:
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
    * Would corrupt the automatic sorty of the elements
  
