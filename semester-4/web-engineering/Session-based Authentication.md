> [!error]- Problem: [[HTTP]] ist [[Stateless]]
> Lösungsansätze:
> - Übertragung von hidden fields in [[HTML form]]
> - Speichern in [[Cookie]]
> - Übertragung per [[URL]]
> - Speichern von Informationen in Datei
> - Speichern in [[Datenbank]]

- in der Regel realisiert durch eine session [[Schlüssel|ID]] in  [[Cookie|cookies]]
- Session Data werden temprorär in Server gecached



## in PHP
- konfiguriert in `php.ini`
- `session_start()` - [[Singleton]] -> bei jedem Skript aufrufen
- `session_destroy()` - löscht alle temporären Daten & [[Cookie]]