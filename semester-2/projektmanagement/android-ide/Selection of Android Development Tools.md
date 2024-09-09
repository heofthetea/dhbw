### MIT App Inventor
#### KO criteria
- runs on Linux, but setup might be a little complicated
- free + open source
#### further
- Block based --> no extra skills need to be learnt
- Integration with Google Firebase (could prove useful)

---
Der MIT App Inventor ist ein Tool entwickelt von Google mit dem Ziel, das Entwickeln von mobilen Apps für jeden Zugänglich zu machen. Dabei verzichtet es vollständig auf textbasierten Code, und setzt stattdessen auf ein graphisches Interface mit einer Blocksprache und der Möglichkeit, UI-Elemente per drag-and-drop auf einen simulierten Bildschirm zu schieben. Diese Elemente können dann bis zu einem gewissen Grad noch mit Styling versehen werden.
Dieses Fehlen an textbasiertem Programmcode macht den App Inventor zwar leicht zugänglich, aber limitiert ihn in gleichem Maße in seiner Mächtigkeit. Es kann zwar JavaScript code eingebunden werden, aber das Tool ist nicht primär darauf ausgelegt.
Zugänglich ist der App Inventor in erster Linie über einen Browser. Es ist zwar möglich, ihn als Application zu installieren, allerdings basiert die Application auf 32-bit Architektur.

##### Bewertung
- benutzerfreundliche Oberfläche: ?? 
- Performance: nicht tiefgehend getestet, aber 32-bit Architektur bzw. Zugriff per Browser ist generell nicht sonderlich performant.
- Support: Es gibt Tutorials, aber da das Tool gewerblich kaum bis gar nicht verbreitet ist, finden sich kaum Forenbeiträge dazu.
- Updates: maintained, aber keine großartigen Neuerungen
- Testing: Ermöglicht testen in einem Emulator sowie per USB-Anschluss oder WiFi mit einem Android-Endgerät
- Implementierung von GUIs: Drag-and-Drop, aber wenig zusätzliche Kontrolle
- Funktionsumfang: Adäquat für eine Blocksprache
- Auto-Complete: nicht existent, da keine Codebase
- Codebase management: nicht existent, da keine Codebase

### Java Processing
#### KO criteria
- free + open source
- runs on any operating system
- comes with an IDE (but can be integrated to vs code), team development via git lol
- 'Processing for Android' mode can be installed

#### further
- Based on [[Hub Java|Java]]
- can be compiled to apk, but is not its primary functionality
- creating UIs is a pain (because you control the pixels on a low level)

---
Java Processing ist ein community-maintained Java Framework, welches mit einem eigenen Texteditor und pre-compiler kommt. Letzterer ermöglicht es, den Java Code von Javas OOP-Architektur zu entkoppeln, und ist stattdessen sehr prozedurell orientiert. Der Texteditor ist sehr limitiert in seinen Funktionen, aber ermöglicht das Kompilieren für Android durch eine simple Installation einer Extension.
Processing gibt Entwicklern pixel-level Kontrolle über einen Canvas und bietet viele SPI-Endpunkte um Formen und Linien u.ä. zu zeichnen, ist aber nicht dafür ausgelegt, Benutzeroberflächen mit Buttons oder Text-input-Feldern zu designen, was es nicht dazu qualifiziert, Administrative Obeflächen zu gestalten.

##### Bewertung
- benutzerfreundliche Oberfläche: Texteditor ist simpel aufgebaut, kann dafür aber wenig
- Performance: Editor ist leightweight, aber dennoch ressourcenintensiv verglichen zu ähnlich mächtigen Editoren wie nano oder der GNOME text editor
- Support: Es gibt sehr viele Tutorials und ein aktives Forum
- Updates: von aktiver Community maintained
- Testing: Testen auf Windows/Linux, und am Ende kompilieren für Android
- Codebase Management: nur sehr essentielle Features wie Find+Replace
- Implementierung von GUIs: so gut wie gar nicht gegeben
- Funktionsumfang: Texteditor kann sehr wenig
	- Auto-Complete: Nicht existent

### Eclipse
(welp I gotta do some research about this
- Android setup _can_ be setup, but doing so is (as almost everything eclipse-related) a pain in the ass

#### further
- AI not really intuitive by my standard - Lots of symbols which are not labelled

---
Eclipse ist eine der populärsten IDEs für Java Development, primär fokussiert auf Entwicklung mit der Sprache Java. Eclipse ist open source und community-maintained. Als vollständige heavyweight IDE bietet Eclipse sehr viele Funktionen, von breiter Auto-Completion ("IntelliSense") über Code-Generierung von Java Boilder Plate bis hin zu einer integrierte Oberfläche für Source Control mit Git. Auch bietet Eclipse einen umfassenden Pool an community-maintained Extensions, mit welchen das Setup für Android Development vergleichsweise einfach ist.
Allerdings wird Eclipse häufig für eine umständliche, unübersichtliche und oftmals nicht sonderlich visuell ansprechede UI kritisiert. Des Weiteren treten häufiger Bugs auf, und durch die Möglichkeit, fast alles konfigurieren zu können, sind diese Konfigurationen um so komplizierter durchzuführen, was sich für das Setup der IDE bzgl. Android Development bemerkbar machen wird.
##### Bewertung
- benutzerfreundliche Oberfläche: Viele funktionen, dadurch unübersichtlich
- Performance: Als heavyweight IDE sehr ressourcenintensiv
- Support: weit verbreitet, dadurch viele Forenbeiträge etc.
- Updates: regelmäßig
- Testing: Ermöglicht Emulation
- Codebase Management: Alles nötige vorhanden, von Refactoring zu Formattierung zu Boilderplate-Generierung
- Implementierung von GUIs: Ermöglicht einen 'UI builder' durch Extensions
- Funktionsumfang: groß
- Auto-Complete: als heavyweight IDE in genügend Umfang gegeben
