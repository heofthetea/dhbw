[[Windows]]

0. [[Physical Startup]]
1. [[BIOS]] startet Windows [[Bootloader]]
2. [[Bootloader]] started `Winload.exe`
3. `Winload.exd` lädt [[Driver]] um [[HAL]] aufzubauen
4. `Winload.exe` lädt [[Kernel]] und Registry (= Basisinformationen (z.B. current version, current user))
5. Übergabe der Kontrolle an den [[Kernel]] -> Hier sieht man dann den Splash Screen
6. Kernel startet alle [[Prozess|Prozesse]] 

![[Pasted image 20250331112603.png]]

