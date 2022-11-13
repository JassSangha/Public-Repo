n=1210
temp=n
rev=0
while(n>0):
      a=n%10
      rev=rev*10+a
      n=n//10
 if(temp == rev) 
    print("palindrom")
else:
    print("not palindrome")