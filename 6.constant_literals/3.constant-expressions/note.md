constant expression is something that is evaluated at compile time.

constant expression are evaluated when you application is being compiled.
and result of the expression is stored as binary and we reuse when executed by somebody.

1. so we can take heavy computation and move it compile time. this is the main idea behind this.

2. the heavy computation is done once by the developer and user running the application can benefit from the result of the computation done of compile time.

constant expressions are als constant so you can't reassign values to them.

how to initialize constant expressions.

you just have to add this keyword constexpr front of variable.

<!-- --------------------------------------------------------- -->

constexpr int eye_count{2};

    constexpr double PI{3.14};

    constexpr is going to evaluate at compile time means it is already baked when we run binary we don't have to bake it again.

<!-- ------------------------------------------------------------  -->

how to check at compile time.

take scenario where application need particular version or library to run how to check whether it has that version or library.

we can do like this.

static_assert(SOME_LIB_MAJOR_VERSION == 123);

and you can use static_assert only with const and constexpr

not with runtime variable such as
int leg {45};
