> Information länger behalten

> [!info] **Motivation**: traditionelle [[Neural Network]]s haben nur ein limitiertes Context Window
> aber: text, genome, zeitreihen etc. müssen sequentiell abgehandelt werden

- funktioniert wie eine Kaskade miteinander verbundener [[Neural Network|NNs]]
	- basically wir hängen einfach mehrere netze aneinander

![[Pasted image 20251205145452.png]]

> [!warning] Kann Kurzzeitgedächtnis (z.B. ein Satz) -> Längere Sätze wird nix mehr


## Long Short Term Memory Networks
- Lösen das Problem des Kurzzeitgedächtnisses
- Besitzen ein eingebautes "Langzeitgedächtnis"

> [!hint] Gibt's in TensorFlow und libraries etc

- Ein weiteres ding wird weiter gegeben (oberer Pfeil)
- Es gibt Sigmoid Funktionen, die entscheiden, was behalten wird und was nicht
	- klingt nach LLM


![[Pasted image 20251205145643.png]]

- tanh -> tangens hyperbolicus [[Training eines Neural Network#Loss Function]]