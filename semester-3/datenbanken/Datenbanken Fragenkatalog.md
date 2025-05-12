
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
> - Notation wird anders rum hin geschrieben - [[1-n Relationship]] wird "umgedreht"
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
> 	- Ist die Relationship eine [[Abbildung]] ([[1-n Relationship]]), reicht ein [[Fremdschlüssel]] im [[Urbild]] aus

## 05 Fragenkatalog
> [!help]- 41\. Wie verfährt man mit der Beziehungsrelation bei 1:1, 1:n, n:1 Beziehungen?
> - [[Relationship als Relation]]: Man zieht den [[Schlüssel]] der [[Relationship als Relation|Beziehungsrelation]] in die Entität, die denselben [[Schlüssel]] hat.

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

# Semester 2

## 08
> [!question]- 60\. Welches ist der Vorteil einer [[Client Server Architecture]] bei einem [[DBMS]]?
> **Flexibilität** 
> - Allgemein Austauschen: Server kann ausgetauscht werden, ohne dass die Clients mit ausgetauscht werden müssen
> - (Man kann mehrere Clients mit demselben [[Server]] verbinden)

> [!question]- 61\. Aus welchen Sprachteilen bestent [[SQL]]?
> [[DQL]] [[DML]] [[DDL]] [[TCL]] [[DCL]]

> [!question]- 62\. Welche fünf Anforderungen werden an das Anlegen von Tabellen an die [[DDL]] gestellt?
> - Man muss ein [[Schema einer Relation|Schema]] definieren können -> [[SQL create]]
> - [[Attribut|Attribute]] erstellen können
> - Trägermenge/Datentyp festlegen können
>- [[Referenzielle Integrität|Integritäts]]-Bedingungen festlegen können
>	- [[Schlüssel|Primär-]] und [[Fremdschlüssel]] festlegen können

> [!question]- 63\. Weshalb sollte man sich vor dem Anlegen von Tabellen Gedanken zur Konzeption ([[ERM]], [[Relationales Modell]],...) machen?
> [[Wasserfallmodell]] -> je später mir ein Fehler auffällt, desto teurer wird es, den Fehler rückwirkend zu korrigieren.

> [!question]- 64\. Welche Vorteile bietet es, sich Gedanken um den richtigen Datentyp zu machen?
> [[SQL create table#Vorteile 'Richtiger Datentyp']]
> - Performance-Vorteil
> - Integritätssicherung - es kommt das zurück, was ich erwarte
## 09

> [!question]- 65\. Was versteht man unter einem [[SQL Constraints]] und welche kennen Sie in [[SQL]]?
> - Stellt Integritätsbedingungen sicher
> - [[PRIMARY KEY Constraint]], [[NOT NULL Constraint]], ...


> [!question]- 66\. Was macht das [[DBMS]] intern, wenn ein Primärschlüssel angelegt wird?
> - Legt einen [[Datenbank Indexierung|Index]] an
> - Legt UNIQUE und NOT NULL constraint an

> [!question]- 67\. Wie erfolgt die Verbindung zweier Tabellen in der [[DDL]]?
> - [[FOREIGN KEY Constraint]] - zeigt per default auf [[PRIMARY KEY Constraint|primary key]] der andern Tabelle, man kann aber ein spezifisches [[Attribut]] angeben.

> [!question]- 68\. Was muss beachtet werden, wenn bereits beim Create eine Fremdschlüsselbeziehung zu einer anderen Tabelle angelegt wird?
> - Die andere Tabelle muss bereits existieren.

> [!question]- 69\. Wie würde die nachfolgende Anforderung nachträglich in eine Tabelle einfügen (in der [[DDL]] formulieren): "Das Eintrittsdatum in der Tabelle Mitarbeiter dar nicht kleiner als das heutige Datum sein".
> [[CHECK Constraint]]
> ```sql
> CHECK (Mitarbieter.eintrittsdatum < now())

## 10
> [!question]- 70\. Welche drei Möglichkeiten gibt es in der [[DML]] Daten zu manipulieren?
> - Einfügen ([[SQL INSERT]]), Abändern ([[SQL UPDATE]]) und Löschen [[SQL DELETE]] 

> [!question]- 71\. Was ist beim [[SQL INSERT|INSERT]] von Daten zu beachten?
> - entweder alle [[Attribut|Attribute]] belegen (ggf. mit [[null]])
> - oder: Die attribute, die man einfügen will, angeben

> [!question]- 72\. An welcher Position in der Tabelle wird ein neuer Datensatz eingefügt?
> - nicht kontrollierbar; faktisch unsortiert
> - Warum ist das relevant? - es gibt keine Reihenfolge

> [!question]- 73\. Wie fügt man am besten Massendaten in eine [[Datenbank]] ein?
> - [[SQL COPY]]


## 11
> [!question]- 74\. Was bassiert bei `UPDATE mitarbeiter set skill = 'test';`?
> Es werden alle mitarbeiter geupdated. [[SQL UPDATE]]

> [!question]- 75\. Weshalb erhielten wir eine Fehlermeldung als wir den Mitarbeiter mit der Personalnummer 5 löschen wollten? 
> [[SQL DELETE]]
> Es gibt keine [[Löschregeln|Löschregeln]] -> default ist RESTRICT. Wird also von der Datenbank rejected, da ein [[Fremdschlüssel]] auf den Mitarbeiter 5 zeigt.

> [!question]- 76\. Wozu dienen die [[Löschregeln]]?
> - Damit [[DBMS]] weiß, wie es die [[Referenzielle Integrität]] überwachen soll
> - Spezifizieren, wie [[DBMS]] reagieren soll, wenn gelöscht wird, um diese Integrität realisiert zu halten.

> [!question]- 77\. In welchem Zusammenhang werwenden wir welche [[Löschregeln|Löschregel]]?
> - CASCADE - [[Schwacher Entitätstyp]]
> - set [[null]] - wenn "schwache" Entität auch ohne Beziehung existieren kann
> - RESTSRICT: wenn es keinen [[Semantik|semantischen]] Sinn ergibt, die Entität ohne eine Beziehung zu haben.

> [!question]- 78\. Was ist beim Aufstellen der Löschregeln in einer Beziehungsstruktur in einer Datenbank zu beachten?
> - In Miniwelt soll nirgends ein [[Zyklus]] entstehen, bei dem alles gelöscht werden kann

> [!question]- 79\. Warum ergibt ein SET NULL bei der Updateregel keinen Sinn?
> - [[Fremdschlüssel]] zeigt auf einen [[PRIMARY KEY Constraint|Primärschlüssel]] => [[null]] als Primärschlüssel gibt es nicht (??)

## 12
> [!question]- 80\. Was versteht man unter einer [[Relation]]?
> Eine [[Relation]] ist eine [[Teilmenge]] der [[Kartesisches Produkt|Produktmenge]].


> [!question]- 81\. Was ist das Ergebnis einer [[Operationen auf Relationen|Operation auf einer Relation]]?
> Eine neue [[Relation]].

> [!question]- 82\. Beschreiben Sie kurz, was in der [[Relationale Algebra|Relat. Algebra]] unter einer [[Selektion]] und einer [[Projektion]] verstanden wird.
> - [[Selektion]]: Wählt aus einer [[Relation]] alle [[Tupel]] aus, die einer Bedingung entsprechen
> - [[Projektion]]: Wählt aus einer [[Relation]] für **jedes** [[Tupel]] eine Menge aus [[Attribut|Attributen]] aus

> [!question]- 83\. Was ist das [[Prädikat]] einer Operation und was ist sein Ergebnis?
> - Ist eine Bedingung, und equates to either true or false.

> [!question]- 84\. Ist eine Verknüpfung der Operationen [[Selektion]] und [[Projektion]] [[Kommutativität|kommutativ]]?
> - Nein - Bei der [[Projektion]] geht Informatioin über Attribute verloren, diese Attribute könnten aber für die [[Selektion]] relevant sein

> [!question]- 85\. Was bedeutet der Satz: In der [[Relationale Algebra|Relationalen Algebra]] gibt es keine Multimengen?
> In jeder [[Relation]] kommen keine [[Tupel]] doppelt vor. (Kommt aus der [[Menge|Mengendefinition]]) => ist wichtig, weil das in [[SQL]] nicht gegeben ist.

> [!question]- 86\. Was muss bei der [[Vereinigung]] zweier [[Relation]]en gleich sein, damit dies erlaubt ist?
> - Das [[Schema einer Relation|Schema]] der Relationen.

> [!question]- 87\.Wie sieht das [[Schema einer Relation|Schema]] der Ergebnisrelation nach einem [[RelAlg Kreuzprodukt|Kreuzprodukt]] aus?
> $[R'] = [R_{1}]\cup [R_{2}]$

> [!question]- 88\. Wozu benötigt man die Operation [[Umbenennung]]?
> Um Verwirrung bei der Verbindung zweier [[Relation|Relationen]] zu verhindern, da zwei Attribute jeweils gleich heißen. Auch [[Relation|Relationen]] können umbenannt werden, z.B. um sie mit sich selbst zu verbinden.

## 13
> [!question]- 89\. Welche Möglichkeiten der Einschränkung in der WHERE-klausel kennen Sie?
> IN, reguläre [[Prädikat|Prädikate]], BETWEEN, LIKE -> [[SQL Prädikate]]

> [!question]- 90\.Wir suchen die Anzahl Mitarbeiter und das Durchschnittsgehalt. Wie schreiben Sie das in [[SQL]]?
> ```sql
> SELECT count(*), avg(gehalt) from mitarbeiter;

> [!question]- 91\. Was an dem nachfolgenden SQL-Statement ist falsch und warum?
> ![[Pasted image 20250507123202.png]]
> Gehalt wird ausgegeben, aber wird nicht gruppiert
> Lösung: in Group by clause einfügen, oder in [[Aggregatsfunktion]] verwenden

> [!question]- 92\. In welcher [[Abarbeitungsreihenfolge SELECT|Reihenfolge]] arbeitet das [[DBMS]] ein [[SQL select]] ab?
> 1. from
> 2. where
> 3. group by
> 4. having
> 5. select
> 6. order by

> [!question]- 93\. Was versteht man unter einer [[Unterabfragen|Unterabfragen]] und wozu verwendet man sie?
> - In einem SQL query einen weitere, logisch vollständigen Query verwenden, um dessen Ergebnis zu verwenden
> - Dynamisches Erhalten von Werten innerhalb einer Abfrage

> [!question]- 94\. Wie kann ich den Vergleich "jahr=1958 oder jahr=1980" in einer [[Unterabfragen|Unterabfragen]] schreiben?
> 1. in
> 2. exists und any

> [!question]- 95\. Warum verwenden wir bei der Unterabfrage ANY, ALL, EXISTS und IN?
> - um auch mit Unterabfragen arbeiten zu können, die [[Relation|Relationen]] zurück zu geben, anstatt eines einzelnen Wertes

> [!question]- 96\. Was lege ich mit dem Statement `CREATE SEQUENCE` an, und wozu verwenden wir dies?
> [[Postgres SERIAL]]
> - Eine Variable, die automatisch hochzählt -> [[Übung Serial durch Alter Table]]


