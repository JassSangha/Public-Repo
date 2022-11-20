import androidhelper
from androidhelper import sl4a
import time

engine = androidhelper.Android()
droid = sl4a.Android()
droid.vibrate(500)
txt = droid.recognizeSpeech()
droid.setclipboard(txt.result)
clip = txt.result
speak = droid.ttsSpeak

def greetings():
    speak("sat shri akaal  paji,      ki hal a?")
    speak("mummy daddy,baki gharde    kiddaa?")

def kida():
    speak("thik a veer g,...tussi snao")
    
def time():
    import time
    engine.ttsSpeak(time.strftime("time, %I %M %p , hogye Aa"))
    #on %A, %B %e, %Y"))
    
def default():
    speak("tusi, bolya," + (clip)) 

for i in range(10):
    print ("\n\n")
    print(clip)
    print ("\n\n")

if clip == 'hello':
    greetings()
elif clip == 'kida':
    kida() 
elif clip == 'time':
    time() 
else:
    default()
    
time.sleep(5)
txt = droid.recoginzespeech()
droid.setclipboard(txt.result)
clip = txt.result
   
