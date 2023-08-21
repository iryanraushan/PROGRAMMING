# Data types in python :-
#-------------------------
# Text type : str
# Numeric type : int, float, complex
# Mapping type : set, frozenset
# Boolean type : bool
# Binary type : Bytes, bytearray, memoryview
# Sequence type : list, tuple, range.
#___________________________________________________________________

#Text type 
a = "this is my 1st string"
print (a)
print (type(a))

#Numeric type
x = 40
print (x)
print (type (x))

b = 5.35
print (b)
print (type (b))

c = 7 + 5j 
print (c)
print (type(c))

#Sequence type
#list
f = ["raushan", "kumar", "raznis_tech"]
print (f)
print ("f = ", type (f))

#tuple
i = ("raushan", "kumar", "raznis_tech")
print (i)
print ("i = ", type (i))

y = {"name" : "raushan", "age" : 18}
print (y)
print ("y = ", type(y))

l = range (8 , 2, -1)
print (l)
print (type ( l))

#set type

#set
j = {"name", "raushan", "age"}
print (j)
print ("j = ", type(j))

#frozen set
k = ({"name", "raushan", "age"})
print (k)
print ("k = ", type(k))

#bool type
r = True
w = False
print (w, r)
print (type(w), type(r))

#binary types 

#bytes
n = b"hello"
print (n)
print(type (n))

#bytearray
v =bytearray(10)
print (v)
print (type(v))

#memoryview
p = memoryview(bytes(19))
print (p)
print(type (p))