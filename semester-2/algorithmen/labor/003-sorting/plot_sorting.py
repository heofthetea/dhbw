times = """
Bubble Sort Time for size 2: 0.000002 seconds
Bogo Sort Time for size 2: 0.000002 seconds
Bubble Sort Time for size 3: 0.000002 seconds
Bogo Sort Time for size 3: 0.000002 seconds
Bubble Sort Time for size 4: 0.000001 seconds
Bogo Sort Time for size 4: 0.000004 seconds
Bubble Sort Time for size 5: 0.000002 seconds
Bogo Sort Time for size 5: 0.000012 seconds
Bubble Sort Time for size 6: 0.000002 seconds
Bogo Sort Time for size 6: 0.000039 seconds
Bubble Sort Time for size 7: 0.000002 seconds
Bogo Sort Time for size 7: 0.000856 seconds
Bubble Sort Time for size 8: 0.000002 seconds
Bogo Sort Time for size 8: 0.013817 seconds
Bubble Sort Time for size 9: 0.000002 seconds
Bogo Sort Time for size 9: 0.105528 seconds
Bubble Sort Time for size 10: 0.000003 seconds
Bogo Sort Time for size 10: 0.361175 seconds
"""

import matplotlib.pyplot as plt

sizes = []
bubble_sort_times = []
bogo_sort_times = []

lines = times.strip().split('\n')
for line in lines:
    if line.startswith('Bubble Sort'):
        size = line.split('size ')[1].split(': ')[0]
        time = line.split(': ')[1].split(' seconds')[0]
        sizes.append(float(size))
        bubble_sort_times.append(float(time))
    elif line.startswith('Bogo Sort'):
        size = line.split('size ')[1].split(': ')[0]
        time = line.split(": ")[1].split(" seconds")[0]
        bogo_sort_times.append(float(time))

plt.plot(sizes, bubble_sort_times, label='Bubble Sort')
plt.plot(sizes, bogo_sort_times, label='?')
plt.xlabel('Size')
plt.ylabel('Time (seconds)')
plt.title('Sorting Algorithms Comparison')
plt.legend()
plt.show()
