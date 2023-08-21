/*
* function is a block of code performing a unit task.
* function has a name, return type, and arguments.
* function is a way to achive modularization.
(modularization - divided a big task into some small subtasks.)
* function are predefined and user defined.
{
   predefined - some function like printf(), scanf(),etc. whose declaration are in header files and defined in library files.
}
{
   userdefined - some function defined by user called userdefined function. 
}
*/
#include <iostream>
using namespace std;
void fun(void);  // global function declaration.
int main()
{
   void fun();  // local function declaration.
   cout << "you are in main function.";
   fun();    // function call.
return 0;
}
void fun()    //function definition.
{
   cout << "you are in fun function.";
}
/*
global function declaration means any function call to that function.
but in local declaration whi function call kar sakta hai jis function ke andar use declare kiya gya ho.
*/
 
/*
* function declaration is also known as function prototype.
* function need to be declared before use ( just like variables ).
* function can be declared locally or globally.
*  return_type function_name(argumrnt_list);
* function definition is a block of code.  
*/