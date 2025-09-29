> [[Quantum Computer|Quantum]] [[Neural Network]]

Demo: [[Demo_PennyLane_Algorithmen_QNN_2024.ipynb]]

- Classical Data is loaded intoi the [[Quantum Computer]] using a unitary [[Matrix]] $U(x)$
	- various options available for this: [[Basis Encoding]], [[Amplitude Encoding]], [[Angle Encoding]], [[SU(2) Encoding]]
	- Partly poor scaling properties, depending on how many features the data has
- Parameterizable unitary matrix $V(\theta)$ with layer structure, analogous to classical [[Neural Network|Neural Networks]] 
	- "parameterizable" -> input [[Winkel|Angle]] can be customized
- Classical feedback loop ([[Backpropagation]]) to adjust $\theta$ 

> [!info] Encoding Quantum information is very difficult and expensive.

![[Pasted image 20250324153034.png]]

1. pipe through $U(x)$
2. pipe through $V(\theta)$
3. read the [[Qubit|Qubits]]
4. Do some calculation to obtain target-[[Vektor]] $y$

