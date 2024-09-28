A pointer that doesn't point to valid memory address. Trying to dereference and use a dangling pointer will result in undefined behavior.

1. uninitialized pointer
2. deleted pointer
3. multiple pointers pointing to same memory.

---

solutions for the dangling pointers.

1. initialize your pointers always.
2. Reset pointers after delete
3. For multiple pointers to same address. make sure the owner pointer is very clear.
