import matplotlib.pyplot as plt

output = """
low: 1.2 -> -0.38
high: 2.25 -> 0.73
depth: 0

low: 1.725 -> -0.05
high: 2.25 -> 0.73
depth: 1

low: 1.9875 -> -0.72
high: 2.25 -> 0.73
depth: 2

low: 2.11875 -> -0.62
high: 2.25 -> 0.73
depth: 3

low: 2.184375 -> -0.17
high: 2.25 -> 0.73
depth: 4

low: 2.184375 -> -0.17
high: 2.2171875 -> 0.22
depth: 5

low: 2.184375 -> -0.17
high: 2.2007812500000004 -> 0.01
depth: 6

low: 2.1925781250000003 -> -0.08
high: 2.2007812500000004 -> 0.01
depth: 7

low: 2.1966796875000005 -> -0.04
high: 2.2007812500000004 -> 0.01
depth: 8

low: 2.1987304687500004 -> -0.01
high: 2.2007812500000004 -> 0.01
depth: 9

low: 2.199755859375 -> -0.0
high: 2.2007812500000004 -> 0.01
depth: 10

low: 2.199755859375 -> -0.0
high: 2.2002685546875003 -> 0.0
depth: 11
"""

import matplotlib.pyplot as plt

low_x = [1.2, 1.725, 1.9875, 2.11875, 2.184375, 2.184375, 2.184375, 2.1925781250000003, 2.1966796875000005, 2.1987304687500004, 2.199755859375, 2.199755859375]
low_y = [-0.38, -0.05, -0.72, -0.62, -0.17, -0.17, -0.17, -0.08, -0.04, -0.01, -0.0, -0.0]

high_x = [2.25, 2.25, 2.25, 2.25, 2.25, 2.2171875]
high_y = [0.73, 0.73, 0.73, 0.73, 0.73, 0.22]

plt.plot(low_x, low_y, '--bo', label='low', color='red')
plt.plot(high_x, high_y, '--bo', label='high', color='blue')
plt.axhline(0, linestyle='dotted', color='black')


plt.xlabel('x')
plt.ylabel('y')
plt.legend()
plt.show()







