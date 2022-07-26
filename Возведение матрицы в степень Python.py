def multip (a, b, mod):
    ans = [[0, 0], [0, 0]]
    for i in range (2):
        for u in range (2):
            for k in range (2):
                ans[i][u] = (ans[i][u]+(a[i][k]*b[k][u])%mod)%mod
    return ans

def f(n, mod):
    n -= 1
    a = [[0,1], [1,1]]; ans = [[0,1], [1,1]]
    while n > 0:
        if n & 1:
            ans = multip(ans, a, mod)
        a = multip(a, a, mod)
        n >>= 1
    return ans [1][1]
    
mod = 1000009
for n in range(20):
    print(n, f(n, mod))