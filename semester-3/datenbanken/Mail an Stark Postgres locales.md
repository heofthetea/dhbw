Guten Morgen,
Sie hatten mich gebeten, Ihnen eine kurze Übersicht von dem zu schicken, was ich bezogen auf das Einstellen der PostgreSQL locale herausgefunden habe. Ich habe mein bestes gegeben, das möglichst präzise zusammenzufassen:

1. Sicherstellen, dass eine deutsche Locale auf dem System installiert ist (`locale -a`), **bevor** Postgres sich initialisiert (Dockerfile hierfür befindet sich im Anhang)
2. Das SQL-Statement `select datname, datcollate from pg_database` zeigt für alle Datenbanken die locale an, die in Postgres aktiv sind 
	1. Sind die template-Datenbanken mit deutscher Locale initialisiert, sollte alles reibungslos funktionieren
3. wenn nicht: Datenbanken müssen per SQL-Script im Query-Tool oder per psql-CLI angelegt werden, da PGadmin die deutsche lokale nicht zur Auswahl anbietet
	1. Hierbei explizit template0 als Template-Datenbank angeben - Beispiel SQL-Skript ist im Anhang.
	2. Bei dieser Variante funktioniert ggf. die String-zu-Datum Konvertierung nicht wie erwartet. Hier hilft der SQL-Befehl `set datestyle = dmy;`

Im Anhang habe ich ein Beispiel SQL-Skript zum erzeugen einer Datenbank mit deutscher locale via template-datenbank (welches einfach copy-pasted werden kann, um neue Tabellen zu erstellen), und ein Dockerfile, welches das Postgres Docker image um die Installation einer deutschen locale erweitert.

Mit freundlichen Grüßen,
Emil Schläger

[[dhlgres-Dockerfile]], [[SQL create#Create a Database]] 