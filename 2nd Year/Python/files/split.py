f=open('jassa.txt','r+')
print(f.read())
# words = ''
l = f.readlines()
for i in l:
    print(i)
    words = i.split()
    print(words)

