def f(n):
    if n<2: return 1
    a = 1; b = 1
    for i in range(n):
        a += b
        b = a-b
    return b
    
n = int(input('n = '))
print('f(n) = ', f(n))