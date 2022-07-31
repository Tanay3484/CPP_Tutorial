# Stack

Stores a list of items in which an item can be added to or removed from the list only at one end.

Uses the principle of the LIFO mechanism (Last In First Out)

e.g. :

## Pile of Coins

In a pile of coins, we add a new coin to the top of the pile, and the first to be removed from the pile is also the latest addition to the pile i.e. the Last added coin to the pile will be the First to be removed from the pile.


---

# Operations

In the stack data structure, the following are the important operations performed : 
1. push(x)
2. pop()
3. top()
4. empty()

## 1.Push(x)
In the push operation, data x is pushed(i.e. inserted) into the stack and placed at the top of the stack.

## 2.Pop(x)
In the pop operation, data x is popped(i.e. removed) from the stack. The top most element is always popped out of the stack.

## 3.Top()
The top operation simply returns the top most element in the stack. This is achieved in code implementation by using a pointer that points at the top of the stack.

## 4.Empty()
The empty operation simply returns if the stack is empty or not. If the top pointer is pointing at some data value then the stack is not empty, but if the pointer is pointing at -1(default value to show empty stack), we say that the stack is empty.

---

# Implementation

Stacks can be implemented both using Arrays and Singly Linked Lists. Both the implementations will be covered in the code sections.