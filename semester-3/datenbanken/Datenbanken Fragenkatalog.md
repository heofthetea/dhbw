

> [!help]-  1\. Erklären Sie die Begriffe "Datenbank", "DBMS", "DBs", "Oracle/DB2"
> - [[Datenbank]]: logisch, strukturierte und zusammenhängende Datenspeicherung
> - DBMS: [[DBMS]]; verwaltet Datenbank und Zugriffe darauf
> - DBS: Die Datenbank und DBMS oben drüber
> - Produkte, die das [[DBMS]] implementieren


> [!help]- 2\.Was ist der  Unterschied zwischen Daten und Information?
> [[Daten]] sinid lediglich [[Syntax]] (aber syntaktisch richtig), [[Information]] entsteht wenn den Daten ein Kontext/ein Sinn gegeben wird. !! Kontext wird nicht von [[DBMS|DBMS]] gegeben, sondern von der Außenwelt !!!


> [!help]- 3\. Wieso  bezeichnet man die Schrift als erstes Datenverarbeitungssystem?
> Daten konnten das erste mal übertragen werden,  ohne dass Information verloren geht, wenn der Wissende stirbt.


> [!help]- 4\. Was war das Problem Tontäfelchen der Sumerer und wie wurde es von späteren Kulturen gelöst?
> Man konnte die Tontäfelchen nicht mehr wiederfinden. Lösung: [[Katalog]] bzw. Indexierung


> [!help]- 5\. Erklären Sie, was man unter "Persistenter" und "Sicherer" Datenhaltung versteht.
> - Persistenz: Daten sind nicht flüchtig, sondern auf einem Medium gespeichert.
> - Sicher: [[Daten]] gehen nicht nach Neustart verloren - Man kann einen bestehenden Stand wiederherstellen.

> [!help]- 6\. Was waren die Probleme beim [[Hierarchisches Datenmodell]]?
> Ermöglicht nur 1:n Beziehungen. Es sind keine Querverweise möglich.

> [!help]- 7\. Wie konnten Netzwerkstrukturen im Hierarchischen Modell abgebildet werden?
> Struktur aus internen Zeigern. Dies arbeitet auf der Datenebene.


> [!help]- 8\. Warum dauerte die Entwicklung eines |Produkts aus dem [[Relationales Datenmodell|relationalen]] Konzept von F.T. Codd bei der IBM so lange?
> Er musste Leute erst überzeugen, weil das Modell so mathematisch orientiert war ([[Relation]]).


> [!help]- 9\. Was war die Intention von Codd für die Entwicklung seines Relationalen Modells?
> Modell auch verständlich und nutzbar für nicht-technisch-versierte.


> [!help]- 10\.  Wozu stellte Codd seine Regeln für ein [[DBMS]] auf?
> Was sind die Grundvorraussetzung für ein RDB? Was muss da sein?

> [!help]- 11\. Nennen Sie einige Regeln von Codd und beschreiben Sie diese kurz.
> [[Transaktion]], [[Benutzersicht]], [[Zugriffskontrolle RDB]], [[Katalog]], [[Konsistenzüberwachung]], [[Operation RDB]] ...

> [!help]- 12\. Was versteht man unter: Datenbankmodell, Datenbankschema, -sprache?
> - Modell: Welche Form (Relational, Hierarchisch?)
> - Schema: Beschreibt Meta-Daten (wie [[Katalog]]), wie sehen die Daten aus, was steht drin?
> - Sprache: Wie greift man auf die Daten zu? (Data Definition L., Data Manipulation L., Data Query L)


> [!help]- 13\. Welchem Zweck dient die [[Drei-Schichten-Modell]] von DBMSen und welche Schichten unterscheidet man dabei?
> Vereinfacht den Entwurf einer Datenbank.
> externe Schicht, interne Schicht, konzeptionelle Schicht


> [!help]- 14\. Zur Systemarchitektur eines DBMS: Data Dictionary, Anfrafeverwaltung, Transaktionsmanager, Recovery-Manager
> - Data Dictionary: [[Katalog]]; Strukturelle Information, gibt Kontext zu Daten
> - Anfrageverwaltung: überprüft Anfragen auf Syntax und behandelt sie 
> - Transaktionsmanager: sorgt dafür, dass [[Transaktion|Transaktionen]] korrekt durchgeführt werden; valider Status, [[Synchronisation RDB|Mehrbenutzer-Synchronisierung]] 
> - Recovery-Manager: Stellt Zustand nach Crash wieder her, nutzt Log files um Stand zu gewissem Stand wiederherzustellen


> [!help]- 15\. Was versteht man unter einem Datenbankentwufs-Prozess?
>  [[DB Entwurfsprozess]]
>  Transformieren von Kundenanforderungen (= Chaos) in [[Datenbank]] (= Ordnung)
>  definiert [[Datenbankschema]], [[Drei-Schichten-Modell]], etc.


> [!help]- 16\. Wissen Sie noch die einzelnen Schritte des Prozesses?
> 1. Anforderungsanalyse
> 2. Konzeptioneller Entwurf 
> 3. Logischer Entwurf
> 4. Datenbank Definition
> 5. Physikalischer Entwurf


> [!help]- 17\. Wie lauten die Beschreibsverfahren für diesen Prozess?
> [[DB Entwurfsprozess

## 02 Fragenkatalog

> [!help]- 18\. Was versteht man unter einer Anforderungsanalyse, und wdas ist das Ergebnis?
> - Sammle Daten vom Kunden - **Dokumentation**
> - Wie hängen Daten zusammen? - **Analyse**
> - Änderungen vom Kunden im Nachhinein einarbeiten - **Verfolgen**
> - **Ergebnis**: [[Lastenheft]]


> [!help]- 19\. Was ist der konzeptionelle Datenbankentwurf, was ist sein Ziel und welche Methode wird hierzu verwendet?
> [[DB Entwurfsprozess]]
> - Aus der Anforderungsanalyse gewonnene Informationen (= reale Welt) zu modellieren ([[ERM]])
> - **Ziel**: Daten zu speichern, und _Beziehungen_ herzustellen --> greifbar machen

> [!help]- 20\. Was versteht man unter einem Entitäts-Typ und einer [[Entität]]?
> - Entitätstyp: Vorlage, bisschen wie [[Class]]
> - Entität: Instanz, bisschen wie [[Object]]
> 	- in DB sprache: Entitäts-[[Tupel]]


> [!help]- 21\. Aus welchen Komponenten besteht das [[ERM]] und was versteht man darunter?
> - [[Entität]]: ein Objekt der Realen Welt
> - [[Relationship]]: Beziehung
> - [[Attribut]]: Was sind die Ausprägungen des Projekts?

> [!help]- 22\. Was versteht man unter dem Wertebereich eines [[Attribut|Attributs]]?
> Alle erlaubten Werte, wie ein Attribut belegt werden kann (was sind die Grenzen)
> Welcher Datentyp?

> [!help]- 23\. Wie definiert man Schlüsselattribute eines Entitäts-Typs und warum führt man künstliche Schlüssel ein?
> - **Definition**:  Ein [[Entität]]-Tupel muss anhand des Schlüssels _eindeutig_ zu identifizieren sein.
> - künstlich: wenn kein natürliches (oder eine Kombination natürlicher) Attribut diese Anforderung erfüllt - **ACHTUNG: Nicht aus Fauljeit**

> [!help]- 24\. Wie geht man mit Mengenattributen in einem Entitäts-Typ um?
> Etwas, wovon man beliebig vieles Haben kann (z.B. Telefonnummern)
> Umgang: In eine eigene Entität auslagern

> [!help]- 25\. Wie sollte der Text in einer Beziehungs-Raute gewählt werden und welches sind die bevorzugten Leserichtungen im [[ERM]]?
> - Text sollte deskriptiv für die [[Relationship|Beziehung]] sein, klar und eindeutig - **NICHT "hat"**
> - bevorzugte Leserichtung: links -> rechts, oben -> unten

> [!help]- 26\. Was ist zu tun wenn die Leserichtung in einem [[ERM]] nicht eingehalten werden kann?
> - Kennzeichnen an den Entitäten - Man schreibt die _Rollen_ hin bzgl. der Beziehung hin

> [!help]- 27\. Was sind die grundsätzlichen Unterschiede zwischen der Chen-Notation und der (min, max)-Notation?
> - Notation wird anders rum hin geschrieben - [[1-n Relation]] wird "umgedreht"
> - in der Chen-Notation kann man keine Grenzen abbilden

