p, j1, j2, r, a = map(int, input().split())
b = r + a
if b == 0:
    if (j1+j2)%2 == p:
        print('Jogador 2 ganha!')
    else:
        print('Jogador 1 ganha!')
else:
    print('Jogador', b, 'ganha!')
