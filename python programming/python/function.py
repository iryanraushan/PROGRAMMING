
'''
#A function is a block of code which only runs when it is called.

# you can pass data, known as parameters, into a function.

#A function can return a result.

#in python a function is defined using the "def" keyword.

#to call a function use the function name followed by parenthesis.
_____________________________________________________________________________'''

def display_function():
     print ("this function is ready.")
display_function()

'''
_______ ARGUMENTS________

# information can be passed into function as arguments.

# Arguments are specified after the function name, inside the parenthesis. you can add as many arguments as you want, just seperate them with a comma.

#by default, a function must be called with the correct number of arguments. meaning that if your function accept 2 arguments, you have to call the function with 2 arguments, not more, not less.
'''
def functio_01(name):
     print ("hii this is your name =",name)

def function_02(f_name, l_name):
     print("your full name is =", f_name, l_name)
     
functio_01("raushan")
function_02("raushan", "raznis")

# if no parameter will pass then function take default value
# ex:-
def default_fun(name = "raushan kumar"):
     print ("hello ! " + name)

default_fun("king khan")
default_fun()
