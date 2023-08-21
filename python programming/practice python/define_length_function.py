def length(name):
     i = 0
     j = 0
     while name[j] != ' ':
          i = i + 1
          j = j+1
     return i
r = length("raushan ")
print("length of string is : ", str(r))