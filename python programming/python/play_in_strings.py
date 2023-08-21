str = "raushan is a good boy."
# here r is in 0th index of str.
print (str[2])

# for string slicing
print (str[0 : 8])  # here 5 is exclude.

# for lenngth of string
print (len(str))
#for print full string you have to use len() + 1 // line 6
print (str[0 : 23])

# for take gap in string 
print (str [0 : 8 : 2])

print (str[0 : : ]) # default take full string.

# for reverse string.
print (str[ : :-1])

#some function in string.
print (str.isalnum()) # check alpha numeric string.
#if false means in string there are some special character present.
# if true -- means in string only alphabetic character are present.

print(str.isalpha()) 

print (str.endswith("."))

print (str.count("r")) # count all r in string.

print(str.capitalize()) # capitalize zeroth index.

print (str.find("good"))# for finding any strig.

print (str.lower()) # change full string in lowercase.

print (str.upper()) #change full string in uppercase.

print (str.replace("is", "are")) # replace is by are

#####________________thank you___________________######