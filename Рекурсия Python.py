def f1(n):
    if n<2: return 1
    return f1(n-1) + f1(n-2)

n = int(input('n = '))
print('f1(n) = ', f1(n))

f2 = lambda n: f2(n-1) + f2(n-2) if n>1 else 1
print('f2(n) = ', f2(n))