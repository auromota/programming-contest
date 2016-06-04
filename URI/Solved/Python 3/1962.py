a = int(input())
while a > 0:
    b = int(input())
    b = 2015-b
    if b > 0:
        print(b, 'D.C.')
    else:
        print(abs(b-1), 'A.C.')
    a-=1
