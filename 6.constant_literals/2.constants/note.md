/\*
constant is

a variable you can initialize but can't change afterwords.

the const qualifier applies to the variable name you are using to manipulate data in memory. it doesn't apply to the )'s and 1"s in memory themselves.
\*/

<!-- when to use const ? -->

1. Using const where it makes sense in your code makes it self documenting in that when someone sees your variable declaration, they instantly know that it is a read only piece of data.

2. you also get the compilers protection when you try to modify the read only variable by mistake.

3. it is recommended to make your variables const where possible.

4. personally declare most of my variable const and then take the const out I need the variable to be modified.
