sometimes it's more flexible to split the function into it's header and body and keep the code for each in different places.

int max(int a, int b); <- this is the function header also it is called prototype. declaration

this is the definition of the above function. which is needed to compile in binary.
int max(int a, int b) {
if(a > b){
return a;
} else {
return b;
}

}

note -> the prototype needs to come Before the function call in your file mens definition. otherwise compilation will fail.
