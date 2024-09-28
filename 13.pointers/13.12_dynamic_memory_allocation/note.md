/\*
see lecture program memory map revisited -> pointers

stack -> is section in memory which stores, local variables, function calls....

1. memory is finite
2. the developer isn't in full control of the memory lifetime.
3. lifetime is controlled by the scope mechanism

---

heap -> additional memory that can be queried for at run time.

1. memory is finite
2. The developer is in full control of when memory is allocated and when it's released.
3. lifetime is controlled explicitly through new and delete operate.

---

so far we've only been using memory allocated on the stack. We are going to see how one can allocated memory from the heap, and some of the difference between these mechanisms.

\*/
