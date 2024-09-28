i was only passing one type parameter using template function.

template<typename T> T maximum(T a, T b) <- this way

<!-- --------------------------------------------------------------------- -->

but we can pass multiple type parameter.

template <typename T , typename P> promblematic_maximum(T a, P b) <- this is how we can pass mutliple type parameter, but there is issue what is the return type of the function.

<!-- -------------------------------------------------------------------------- -->

we can consider one of both return type of function by mentioning it.

template <typename T , typename P> P promblematic_maximum(T a, P b) <- but these are bad design coz return type depends on the order of argument.

<!-- ----------------------------------------------- -->

we need better solution. we can do that by adding separate return type for the function.

template <typename ReturnType, typename T , typename P> ReturnType maximum(T a, P b)
