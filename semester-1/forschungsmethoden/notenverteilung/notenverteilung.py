import pandas as pd
import matplotlib.pyplot as plt

# Read the CSV data
df = pd.read_csv("Verteilung_Noten.csv", delimiter=";", decimal=",", na_values="")

# Create a box plot
plt.figure(figsize=(10, 6))
df.boxplot()
plt.title("Box Plot of Course Grades")
plt.xlabel("Course")
plt.ylabel("Grade")


plt.gca().invert_yaxis()
plt.show()
