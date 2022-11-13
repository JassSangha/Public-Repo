def rana(a):
    if(a>0):
        print(a)
        a-=1
        rana(a)
    else:
        return

rana(10)