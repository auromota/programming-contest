a, b = map(int, input().split())
while b > 0:
    b-=1
    c = input()
    if c == 'fechou':
        a+=1
    else:
        a-=1
print(a)
