import math as m
import matplotlib.pyplot as plt
import numpy as py
# Define the number of points
n = 50
# Define the increment
def func1(i):
    return ((pow(m.e,-((i*i)/2)))/m.sqrt(2*m.pi))
def func2(i):
    return ((pow(m.e,-((i*i)/8)))/(m.sqrt(2*m.pi))*2)
# Initialise the list for x and y
x = py.arange(-6,6)
y = []
z= []
# Loop to calculate the angle and sin
# Note that we use indent instead of braces
# to indicate the beginning and end of the loop
for i in x:
    y.append(func1(i))
    z.append(func2(i))
# Plot
plt.plot(x,y,x,z)
# Label the axes
plt.xlabel("n")
plt.ylabel("Function")
plt.legend(['sigma=1', 'sigma=2'])
# Save the figure
plt.savefig("Errorinapprox.png")
# Show the plot
plt.show()