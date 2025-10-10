import numpy as np 

# Example calibration data: raw sensor reading vs actual value 
raw_readings = np.array([0, 1, 2, 3, 4, 5]) # Raw sensor outputs 
actual_values = np.array([0, 0.9, 2.1, 3.05, 4.1, 5.2]) # True values 
# Fit a polynomial (e.g., 2nd degree) to calibration data 
coefficients = np.polyfit(raw_readings, actual_values, 2) 

def correct_sensor_reading(raw_value, coeffs): 
    # Polynomial correction 
    corrected_value = np.polyval(coeffs, raw_value) 
    return corrected_value 
    
# Example usage: 
raw_sensor_value = 2.5 
corrected_value = correct_sensor_reading(raw_sensor_value, coefficients) 
print(f"Raw sensor value: {raw_sensor_value}") 
print(f"Corrected sensor value: {corrected_value}")