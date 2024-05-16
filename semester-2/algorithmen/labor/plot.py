import matplotlib.pyplot as plt
import numpy as np

# Data points
elements = [10**4, 5*10**4, 10**5, 5*10**5, 10**6, 5*10**6, 10**7, 5*10**7]
time_taken = [0.002730, 0.009025, 0.020286, 0.109721, 0.203814, 1.045936, 1.713962, 7.465750]

# Plotting
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

# Converting elements to log scale for better visualization
log_elements = np.log10(elements)

# Scatter plot
ax.scatter(log_elements, time_taken, c='r', marker='o')

# Labels
ax.set_xlabel('Log of Elements')
ax.set_ylabel('Time Taken (s)')
ax.set_zlabel('Measurements')

# Title
ax.set_title('Time taken for Different Element Sizes')

plt.show()
