list_01 = ["raushan", "kumar", "raznis_tech"]
print (list_01)

numbers = [5, 3, 8, 23, 54, 12, 65]
print(numbers)

numbers.reverse()
print (numbers)

numbers.sort()
print (numbers)

print (numbers[ : :2]) # escape 2
print (numbers[ : :3]) # escape 3
print (numbers[ : :-1]) # reverse print

print (max(numbers))# print max number in list
print (min(numbers))# print min number in list

numbers.append(7) # include 7 in list
print(numbers)

numbers.insert(3 , 76)
print(numbers)#insert 76 in index 3

numbers.remove(65) # remove 65 in this list
print(numbers)

numbers.pop() # remove last element.
print(numbers)