import matplotlib.pyplot as plt

output = """
Array Length: 50000
Linear Search Result: -1
Binary Search Result: -1
Linear Search Time: 0.000134 seconds
Binary Search Time: 0.000003 seconds


Array Length: 100000
Linear Search Result: -1
Binary Search Result: -1
Linear Search Time: 0.000287 seconds
Binary Search Time: 0.000003 seconds


Array Length: 150000
Linear Search Result: -1
Binary Search Result: -1
Linear Search Time: 0.000413 seconds
Binary Search Time: 0.000003 seconds


Array Length: 200000
Linear Search Result: -1
Binary Search Result: -1
Linear Search Time: 0.000553 seconds
Binary Search Time: 0.000004 seconds


Array Length: 250000
Linear Search Result: -1
Binary Search Result: -1
Linear Search Time: 0.000707 seconds
Binary Search Time: 0.000004 seconds


Array Length: 300000
Linear Search Result: -1
Binary Search Result: -1
Linear Search Time: 0.000823 seconds
Binary Search Time: 0.000003 seconds


Array Length: 350000
Linear Search Result: -1
Binary Search Result: -1
Linear Search Time: 0.000894 seconds
Binary Search Time: 0.000004 seconds


Array Length: 400000
Linear Search Result: -1
Binary Search Result: -1
Linear Search Time: 0.001130 seconds
Binary Search Time: 0.000004 seconds


Array Length: 450000
Linear Search Result: -1
Binary Search Result: -1
Linear Search Time: 0.001042 seconds
Binary Search Time: 0.000004 seconds


Array Length: 500000
Linear Search Result: -1
Binary Search Result: -1
Linear Search Time: 0.001359 seconds
Binary Search Time: 0.000005 seconds


Array Length: 1000000
Linear Search Result: -1
Binary Search Result: -1
Linear Search Time: 0.002684 seconds
Binary Search Time: 0.000009 seconds"""


# Parse the output string into a list of dictionaries
data = []
for block in output.strip().split('\n\n'):
    lines = block.strip().split('\n')
    array_length = int(lines[0].split(': ')[1])
    linear_search_result = int(lines[1].split(': ')[1])
    binary_search_result = int(lines[2].split(': ')[1])
    linear_search_time = float(lines[3].split(': ')[1].split(' ')[0])
    binary_search_time = float(lines[4].split(': ')[1].split(' ')[0])
    data.append({
        'Array Length': array_length,
        'Linear Search Result': linear_search_result,
        'Binary Search Result': binary_search_result,
        'Linear Search Time': linear_search_time,
        'Binary Search Time': binary_search_time
    })

# Extract the x and y values for the linear search and binary search
array_lengths = [d['Array Length'] for d in data]
linear_search_times = [d['Linear Search Time'] for d in data]
binary_search_times = [d['Binary Search Time'] for d in data]

# Plot the data
plt.plot(array_lengths, linear_search_times, label='Linear Search')
plt.plot(array_lengths, binary_search_times, label='Binary Search')

# Add labels and title
plt.xlabel('Array Length')
plt.ylabel('Time (seconds)')
plt.title('Search Time Comparison')

# Add legend
plt.legend()

# Show the plot
plt.show()
