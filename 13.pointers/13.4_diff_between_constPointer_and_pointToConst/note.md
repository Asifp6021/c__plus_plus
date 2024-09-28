we are goint to learn diffrence between const pointer and pointer to const. in easy word how const keyword can be applied to pointer.

1. non const pointer

int\* p_var -> 1008;

1008 -> int var {22};

we can change the value of the int var because it is not constant and pointer is also not constant and also we can say non const pointer.

2. point to const -> can't modify var through p_var

const int\* p_var -> 1008;

1008 -> int var {22}

using const pointer we can't change the value of var.but we can point at other location.

but P_var can point at other memory address.

3. const pointer -> can't make p_var point to somewhere else means at other memory address. but can change the data.

int\* const p_var -> 1008;

1008 -> int var {22}

4.

const int\* const p_var4

can't change data can't point to other address either.

<!-- ------------------------------------ -->

<!-- notes -->

int var1{33};

int \* var p_var2 {&var1}; -> non const pointer to int

const int\* p_var3 {&var1} -> point to const

const int\* const p_var4 {&var1}; -> const pointer to const data

int \* const p_number7 {&number}; -> const pointer to non const data

<!-- ------------------------------------------------------- -->

//if const shows up on the data left of\* -> the data is const -> we can't change data but we can point at other address

const int\* p_var -> 1008;

if const show up on the right of \* -> the point is const -> can change the data but can't point at other addresses.

int\* const p_var -> 1008;
