const init is keyword which has been introduced in c++20;

1. constinit says that a variable should be initialized at compile time. its' a new c++20 keyword;

2. if you try to initialize with something that can't be evaluated at compile time, you'll get a compiler error.
   we say that the variable should be const initialization.

3. constinit can only be applied to variables with static or thread storage duration. this, in part means variables outside the scope of the main function. we'll understand more about this later in the course when we have more powerful tools in out hands.

4. constinit is in place in part to help in avoiding problems with the order of initialization of global variables outside the main function.

5. constinit variables must be initialized with const or literals.

6. const and constinit can be combined, but const and constexpr can't be combined in an expression.

7.Careful here -> constinit doesn't imply that the variable is const. it just implies that the compiler enforces initialization at compile time.
