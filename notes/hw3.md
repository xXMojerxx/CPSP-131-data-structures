# notes

## 3/4/2025
* stacks and queues dont let the user change the data, but rather just direct certain things to happen.
* the idea of a que is to push and pop from both ends.
* interface for a stack : push(), pop(), top()
* an abstract data type (ADT) us a n abstraction of a data strucutre that specifies
  * Data strored operations ont he data
  * error condition associated with operations
* Does not talk about implementation
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
  * front() - view the least recent element inserted (the one at the front)
 
* Performance
  * Let n be the number of lemenets in the stack or queue
  * The space used is O(n)
  * Each operation

## 3/6/2025

* first 30 mins was doing aboslutely nothing but just reasuring information given
* and mostly just going over code....
* yup thats it...

## 3/11/2025
* The attributes of a stack and queue differ bettwen the different type of sequence container (UnderlyingContainer)
* If the stack is vector base, the attribute is a vector
* we did an inclass assignment durring this class

## 3/13/2025
* recursion is when you repeat the same function, or create a loop
```cpp
// basic loop functions
//for loop
for (auto itr begin(); itr != end(); ++itr)
{
 cout << *itr;
}
//while loop
auto itr = being()
do {
++itr;
} while (itr != end()
```
* every loop has to have an:
  * initilization ``` auto itr begin() ```
  * termination ``` itr != end() ```
  * advance ``` ++itr ```
*  when implementing a recusion function, make sure to comment where the base, the visit, and the recursive case are.
*  base case - when the loop stops
*  visit case - what the loop is going to do 
*  recursive case - the advancement of the loop (call ths same function again)
*  public function- initilizes the function and kicks of the loop
