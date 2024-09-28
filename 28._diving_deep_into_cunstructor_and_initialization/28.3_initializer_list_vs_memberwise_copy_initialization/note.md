difference between member wise copy initialization and initializer list

<!-- member wise copy initialization -->

1. Two steps
   . object creation
   . member variable assignment

2. potential unnecessary copies of data

3. order of member variables doesn't matter

<!-- initializer list -->

1. initialization happens at real object creation

2. unnecessary copies avoided

3. order of member variables matters

<!-- Recommendation -->

Always prefer initializer list over member wise copy initialization.
