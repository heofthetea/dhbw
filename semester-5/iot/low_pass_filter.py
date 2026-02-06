def low_pass_filter(new_sample, previous_value, alpha):
    """
    Apply an exponential smoothing low-pass filter.

    Parameters:
        new_sample (float): The latest sensor reading.
        previous_value (float): The previous filtered value.
        alpha (float): Smoothing factor between 0 and 1 (closer to 0 for more smoothing).

    Returns:
        float: The new filtered value.
    """
    return alpha * new_sample + (1 - alpha) * previous_value


# Example usage
sensor_readings = [1.0, 2.0, 2.5, 2.2, 2.4, 2.3, 2.5, 2.6, 2.4, 2.5]
alpha = 0.2  # Smoothing factor
filtered_value = sensor_readings[0]  # Initialize with first reading

filtered_readings = [filtered_value]
for reading in sensor_readings[1:]:
    filtered_value = low_pass_filter(reading, filtered_value, alpha)
    filtered_readings.append(filtered_value)

print("Original readings:", sensor_readings)
print("Filtered readings:", filtered_readings)
