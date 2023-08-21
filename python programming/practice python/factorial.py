from gtts import gTTS
import os
num = int (input ("enter a value for factorial : "))
fact = 1
for i in range(num):
     fact = fact * (i + 1)
print(str(fact))
 # for hindi sound lang = 'hi'
 # for english sound lang = 'en'
myobj = gTTS(text=str(fact), lang='en', slow=False)
myobj.save("welcome1.mp3")
os.system("welcome1.mp3")