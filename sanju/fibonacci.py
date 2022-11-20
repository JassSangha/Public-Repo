cache ={}
def fib(n):
    if n in cache:
        return cache[n]
    if n==1 or n==2:
        return 1
    else:
        value = (fib(n-1)) + (fib(n-2))
        cache[n] = value
        return value

for i in range(1,10+1):
    
    print(fib(i))

print(cache)