# Arithmetic operator (+, -, *, /, **, //, %)

# (+)  : is called addition operator 
# (-)  : is called subtraction operator
# (*)  : is called multiplication operator
# (/)  : is called division operator
# (**) : is called exponential operator
# (//) : is called floor division operator
# (%)  : is called modulus operator

a = 5
b = 7
print ("a +  b = ", a + b)
print ("a -  b = ", a - b)
print ("a * b = ", a * b)
print ("a **  b = ", a ** b)
print ("a //  b = ", a // b)
print ("a /  b = ", a / b)
print ("a %  b = ", a % b)

# assignment operator
x = 15
print (x)
x += 5
print (x)
x -= 6
print (x)
x *= 4
print (x)
x = 2
x **= a
print (x)

# logical operator 

i = 50
j = 4
print ( i > 78 and j < i)
print ( i > j or j < i)

#identity operator
# used for compare objects
p = ["raushan"]
q = ["raushan"]
print (p is q)
print (p is not q)

#membership operator
#used to test if a sequence is presented in an object.

#bitwise operator
# compare binary number.

# &  - AND -- sets each bit to if both bits are 1.
# |  - OR  -- sets each bit to if one of two bits is 1.
# ^  - XOR -- sets each bit to if only one of two bits are 1.
# ~  - NOT -- inverts all the bits
# << - zero fill left shift -- shift left by pushing zeroes in from the right to left most bits fall off.
# >> - SIGNED RIGHT SHIFT -- shift right by pushing copies of leftmost bit in from the left, and let the rightmostbits fall off. 
fruits = ["apple", "banana"]

if "apple" in fruits:
     print("Yes, apple is a fruit!")