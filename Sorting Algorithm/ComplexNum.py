def complexNumber(z1, z2):
    return z1 + z2


a, b, c, d = map(int, input().strip().split())
z1 = complex(a, b)
z2 = complex(c, d)
ans = complexNumber(z1, z2)
print(ans)
