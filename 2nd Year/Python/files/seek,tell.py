# import os
f=open('jassa.txt')
# os.rename('mussu.txt','jassa.txt')
print(f.tell())
print(f.readline())
print(f.tell())
f.seek(20)#works like goto
print(f.tell())
print(f.readline())
print(f.tell())
print(f.readline())
f.close()

