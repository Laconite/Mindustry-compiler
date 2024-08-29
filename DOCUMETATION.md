## Functions
```c++
// This is a function called Hello
inline void Hello()
{

}

// This is where code execution begins
void main()
{
   // So we move on to executing the code in the Hello function
   Hello();
}
```
* After the code in the called function has completed executing, we continue executing the code from where the function was called.

* **inline void** - built into the code of another function. It is worth using when the function is called from one place or when the function is very small.

## Calculations
```c++
a = (b + c) / d;
```

## Conditions
```c++
if () 
{

}
```
* If the calculation in the condition is not equal to 0, then the body of the condition will be executed.

## Loops
```c++
while () 
{

} 
```
```c++
do
{

} while ()
```
* If the calculation in the loop condition is not equal to 0, then the body of the loop will be executed.

## Embed code
```c++
__asm
{

} 
```
* You can wrap any Mindustry code in this construct.
```c++
__asm
{
   print "Hello Mindustry!"
   printflush message1
} 
```

## The #include directive
```c++
#include "Libs/Lib.cpp"
```
* This directive can only be used in the main file.
