# notes

* stacks and queues dont let the user change the data, but rather just direct certain things to happen.
* the idea of a que is to push and pop from both ends.
* interface for a stack : push(), pop(), top()
* an abstract data type (ADT) us a n abstraction of a data strucutre that specifies
  * Data strored operations ont he data
  * error condition associated with operations
* Does jot talk about implementation
* Container Adapter (wrapper class) implementation
  * Procides a public inerface, but
  * Delegates the implementation

* Stack concepts
* LiFO - Last in, first out (stack)
  * Push() - insert elements into the stack
  * pop() - remove elements in the opposide order in which they were inserted ("Last in, first out")
  * top() - view the most recent element inserted

*Queue Concepts
* FIFO - Fisrt In, First Out (Queue)
  * push() - insert elements into the stack
  * pop() - remove elements in the same oder in which they were inserted ("fisrt in, first out")
  * back() - view the most recent element inserted (the one at the back)
  * first() - view the least recent element inserted (the one at the front)
 
* Performance
  * Let n be the number of lemenets in the stack or queue
  * The space used is O(n)
  * Each operation
