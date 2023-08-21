i = 0;
while True:
     print ("guess a number : ",)
     x = int(input())
     i = i + 1
     if x > 45:
          print("pls try some lower number.")
          continue
     elif x < 45:
          print("pls try with some upper number.")
          continue
     else:
          print ("you get success : ", i )
          break
     

