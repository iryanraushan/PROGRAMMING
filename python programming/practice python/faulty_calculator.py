print ("choose a operator : [+, -, *, /, **, %] ")
operator = input ()
num1 = int(input("enter 1st integer : "))
num2 = int(input("enter 2nd integer : "))

if num1 == 45 and num2 == 3 and operator == "*":
     print(555)
elif num1 == 56 and num2 == 9 and operator == "+":
     print (77)
elif num1 == 56 and num2 == 6 and operator == "/":
     print (4)

elif operator == "+":
     print (num1 + num2)
elif operator == "-":
     print (num1 - num2)
elif operator == "*":
     print (num1 * num2)
elif operator == "/":
     print (num1 / num2)
elif operator == "**":
     print (num1 ** num2)
elif operator == "%":
     print (num1 % num2)

else:
     print ("pplease enter a valid operator.")