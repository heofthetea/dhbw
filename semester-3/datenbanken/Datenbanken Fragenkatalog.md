
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

> [!help]- 8\. Warum dauerte die Entwicklung eines |Produkts aus dem [[Relationale Datenbank|relationalen]] Konzept von F.T. Codd bei der IBM so lange?
> Er musste Leute erst überzeugen, weil das Modell so mathematisch orientiert war ([[Relation]]).

> [!help]- 9\. Was war die Intention von Codd für die Entwicklung seines Relationalen Modells?
> Modell auch verständlich und nutzbar für nicht-technisch-versierte.

> [!help]- 10\.  Wozu stellte Codd seine Regeln für ein [[DBMS]] auf?
> Was sind die Grundvorraussetzung für ein RDB? Was muss da sein? -> [[Relationale Datenbank#Codd's Regeln]]

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

## 03 Fragenkatalog

> [!help]-  28\. Was versteht man unter [[n-stellige Relationship|ternären Relation]] und wozu werden sie benötigt?
> Beziehung zwischen 3 [[Entität|Entitäten]]
> Benötigt, um Beziehungen zu modellieren, die nicht mit binären Beziehungen dargestellt werden können

> [!help]-  29\. Wozu benötigt man die Modellierung von rekursiven Beziehungen und was ist das Besondere daran?
> [[Rekursive Relationship]]
> - Wenn eine Entität eine Beziehung zu sich selbst hat
> - bildet eine Hieararchie ab ("ein Chef hat viele MItarbeiter")

> [!help]- 30\. Was versteht man unter Spezialisierung und wozu benötigt man diese?
> - Wenn es eine [[Teilmenge]] der Entitäten gibt, die extra Attribute hat
> - benötigt, damit man nicht unnötig viele Einträge mit leeren Feldern hat

> [!help]- 31\. Was ist in diesem Zusammenhang eine Vererbung?
> - Die Spezialisierung erbt die Attribute von der Ausgangs-Entität

> [!help]- 32\. Nennen Sie ein Beispiel für eine Partitionierung. Was ist eine Aggregation?
> - [[Partitionierung]] und [[Aggregation]] existieren, wenn mehrere Entitäten Teil einer ganzen sind
> - Beispiel: Fußballteam

> [!help]- 33\. Was versteht man unter einem existenzabhängigen Entitäts-Typ und wie wird diese identifiziert?
> - Sie nutzen einen Fremdschlüssel als ihren [[Schlüsselattribut]] - Können nicht existieren, wenn Vaterentität nicht mehr existiert

## 04 Fragenkatalog

> [!help]- 34\. Was sind Sichten in einem [[ERM]] und wie geht man damit um?
> Verschiedene Leute haben ihre eigene Miniwelt und Sicht darauf
> Man muss alle Sichten in eins vereinigen --> Widersprüche, [[Redundanz]], [[Homonym]] etc. aufklären

> [!help]- 35\.Was versteht man unter einem Logischen Datenbankentwurf?
> Transformation von [[ERM]] in [[Relation|Relationen]], mit Domänen und [[Schema einer Relation|Schema]]
> **!! NICHT IN TABELLEN DENKEN !!** 

> [!help]- 36\. Wie ist eine [[Relation]] aufgebaut?
> $R = \set{[Attribut_{1}: Domäne_{1},\ \dots]} \subset D_{1} \times D_{2}...$ 
> eine [[Relation]] ist eine [[Teilmenge]] der [[Kartesisches Produkt|Produktmenge]] aus jeweils Domänen und Mengen (= Attributen) 

> [!help]- 37\. Was versteht man unter einem Wertebereich oder Domäne?
> Wertebereich: Die Elemente der [[Menge]], die die Domäne beschreibt

> [!help]- 38\. Was ist im [[Relationales Modell|RM]] eine [[Instanz einer Relation|Instanz]] und ein [[Schema einer Relation|Schema]]?
> - [[Schema einer Relation]] $[R]$: Die [[Menge]] aller [[Attribut|Attribute]] der [[Relation]] (mitsamt Domäne):
> - [[Instanz einer Relation]] $R$: Die [[Menge]] aller [[Tupel]], die zu einem gegebenen Zeitpunkt in der [[Relation]] sind
> 

> [!help]- 39\. Wie setzt man einen [[Schwacher Entitätstyp|schwachen Entitätstyp]] in das RM um?
> - Man benutzt den [[Schlüsselattribut|Primärschlüssel]] der Vaterentität als zusätzliches [[Schlüsselattribut]] in der Kindentität

> [!help]- 40\. Wie wird eine binäre [[Relationship]] umgesetzt?
> - Die beiden [[Schlüsselattribut|Primärschlüssel]] der Entitäten in der Beziehung bilden den [[Schlüssel]] der Beziehungs-[[Relation]]
> 	- Ist die Relationship eine [[Abbildung]] ([[1-n Relation]]), reicht ein [[Fremdschlüssel]] im [[Urbild]] aus

## 05 Fragenkatalog
> [!help]- 41\. Wie verfährt man mit der Beziehungsrelation bei 1:1, 1:n, n:1 Beziehungen?
> - [[Beziehung als Relation]]: Man zieht den [[Schlüssel]] der [[Beziehung als Relation|Beziehungsrelation]] in die Entität, die denselben [[Schlüssel]] hat.

> [!help]- 42\. Was muss bei der Umsetzung von 1:1-Beziehungen in Relationen beachtet werden?
> - man muss über die [[Min-Max Kardinalität|Min Max Notation]] gehen
> - [[Schlüssel]] so vergeben, dass es möglichst wenige [[null]]-Werte gibt

> [!help]- 43\. Welche drei Möglichkeiten bieten sich bei der Umsetzung einer [[Is-a Relationship]]?
> [[Is-a Relationship als Relation]]
> 1. Alle Spezialisierungen in einer Tabelle speichern
> 2. Spezialisierungen als zusätzliche Tabelle, mit [[Fremdschlüssel]] als [[Schlüssel]]
> 3. Jede Spezialisierung in eigener Tabelle -> Manche Relationen haben viele gleiche Attribute

> [!help]- 44\. Warum kann bei einer [[n-m Relation]] die Beziehungsrelation nicht mit einer der beiden [[Entität]]-[[Relation|Relationen]] zusammen gezogen werden?
> - Man kann nur Relationen mit selbem [[Schlüssel]] zusammenfügen
> - Der Schlüssel der Beziehung setzt sich aus _beiden_ Primärschlüsseln zusammen, man kann sie also nicht in eine der Beiden Entitätsrelationen hinein ziehen

> [!help]- 45\. Zum Fick ist referenzielle Integrität?
> [[Referenzielle Integrität]]
> - Ein [[Fremdschlüssel]] muss zu einem **gültigen** [[Schlüsselattribut|Primärschlüssel]] der anderen [[Entität]] zeigen.

> [!help]- 46\. Wozu dient die Normalisierung als Prozess?
> [[Normalisierung]]
> - Verhinderrn von [[Anomalie|Anomalien]]; z.B. [[Referenzielle Integrität]] gewährleisten

> [!help]- 47\. Erklären Sie, was man unter [[Anomalie|Anomalien]] versteht, und welche bei einem schlecht designten Datenbankschema auftreten können?
> In einer [[Datenbank]] existiert ein inkonsistenter Zustand; etwas existiert, was dort nicht hingehört.
> Beispiel: Etwas wurde gelöscht, etwas wurde nicht gelöscht, etwas wurde verändert - was nicht hätte passieren sollen.

> [!help]- 48\. Was versteht man unter einer [[Funktionale Abhängigkeit]] bei einer [[Relation]]?
> Wenn man von einer [[Menge]] $X$ aus [[Attribut|Attributen]] eines Schemas  **immer** auf eine andere [[Menge]] $Y$ aus Attributen schließen kann.
> Kann man von $X$ auf die gesamte [[Relation]] schließen, ist $X$ ein [[Schlüssel]].

> [!help]- 49\. Was ist eine [[Triviale Funktionale Abhängigkeit]]?
> Ein Attribut ist immer [[Funktionale Abhängigkeit|funktional abhängigkeit]] von sich selbst, und seiner Obermenge.

> [!help]- 50\. Was ist die [[Hülle einer funktionalen Abhängigkeit]], und wie kann sie gebildet werden?
> - $F$ ist die [[Menge]] aller [[Funktionale Abhängigkeit|funktionalen Abhängigkeiten]] einer Relation. (Die kommen aus der realen Welt!!)
> - $F^{+}$ ist die [[Menge]] aller [[Funktionale Abhängigkeit|funktionalen Abhängigkeiten]], die daraus durch Anwendung der [[Armstrong Axiome|Interferenzregeln]] hergeleitet werden können.

## 06 Fragenkatalog

> [!help]- 51\. Was ist ein [[Superschlüssel]] und was ist ein [[Schlüsselkandidat]]?
> - [[Superschlüssel]]: Eine Teilmenge von $[R]$, die auf die gesamte Relation abbilden
> - [[Schlüsselkandidat]]: Ein **nicht minimierbarer** [[Superschlüssel]]

> [!help]- 52\. Warum kann die [[1NF]] bei einer [[Relation]] prinzipiell vorausgesetzt werden?
> Weil bei Relationen per Definition der Datenwert für jedes Attribut immer **atomar** ist.

> [!help]- 53\. Wann ist eine [[Relation]] immer in [[2NF]]?
> Wenn sie in [[1NF]] ist, und der [[Schlüssel]] nur aus _einem_ [[Attribut]] besteht.

> [!help]- 54\. Was ist eine [[transitiv|transitive]] [[Funktionale Abhängigkeit|Abhängigkeit]]?
> $$A \rightarrow B \land B \rightarrow C \Longrightarrow A \rightarrow C$$

> [!help]- 55\. Was ist ein [[Primattribut]]?
> Ein [[Attribut]], dass Element eines [[Schlüsselkandidat|Schlüsselkandidaten]] ist.

> [!help]- 56\. Wann ist eine Relation in [[BCNF]]?
> - Wenn sie in [[3NF]] ist, aber jede Determinante $X$ (= [[Urbild]] einer [[Funktionale Abhängigkeit|funktionalen Abhängigkeit]]) ist ein [[Superschlüssel]].
> => in der [[Prüfen auf 3NF|Prüfen auf 3NF]] ist "$a$ ist [[Primattribut|prim]]" **kein** valides Kriterium mehr.


## 07 Fragenkatalog
> [!help]- 57\. Wann sprincht man von einer gültigen Zerlegung einer Relation?
> [[Gültige Zerlegung]] - wenn man mit den neuen Relationen die alte Relation vollständig wieder bekommen kann. Es kommen auch keine neuen Attribute dazu.


> [!help]- 58\.  Wann ist eine Zerlegung [[Verlustlose Zerlegung|verlustlos]]?
> Wenn jede [[Instanz einer Relation|Instanz]] der ursprünglichen Relation in den neuen Relationen wiedergespiegelt wird.
> Prüfung: Man überprüft die **Schnittmenge** der beiden Relationen (= der [[Fremdschlüssel]])


> [!help]- 59\. Wann ist eine Zerlegung [[Hüllentreue Zerlegung|abhängigkeitsbewahrend]]?
> Jede [[Funktionale Abhängigkeit]] der ursprünglichen Relation existiert in den Zerlegungen immernoch.
