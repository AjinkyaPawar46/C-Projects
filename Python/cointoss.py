import matplotlib.pyplot as plt
import numpy as np
import random
N = 40
Coin = ['H','T']
y = np.linspace(0,N,N+1)
heads = 0
tails = 0
P = 0
Win=[0]
for i in range(N):
    x = random.choice(Coin)
    if(x == 'H'):
        heads = heads + 1
        P = P + 1
    else:
        tails = tails - 1
        P = P - 1
    Win.append(P)
print(np.mean(Win))
plt.plot(y,Win)
plt.show()
