> Schlüssel sind _einzigartige Daten_

| Operation                     | [[Doubly Linked List]]       | [[Singly Linked List]]       |
| ----------------------------- | ---------------------------- | ---------------------------- |
| Zugriff an Position $i$       | [[lineare Laufzeit]]         | [[lineare Laufzeit]]         |
| eeinfügen am Anfang           | [[Konstante Laufzeit]]       | [[Konstante Laufzeit]]       |
| Einfügen am Ende              | [[lineare Laufzeit]]         | [[Konstante Laufzeit]]       |
| Löschen am Anfang             | [[Konstante Laufzeit]]       | [[Konstante Laufzeit]]       |
| Löschen am Ende               | [[lineare Laufzeit]]         | [[Konstante Laufzeit]]       |
| Löschen einer gegebenen Zelle | [[lineare Laufzeit]] [^1]    | [[Konstante Laufzeit]]       |
| Liste sortieren               | [[linearithmische Laufzeit]] | [[linearithmische Laufzeit]] |
| **Schlüsselverwaltung**       |                              |                              |
| Schlüssel finden              | [[lineare Laufzeit]]         | [[lineare Laufzeit]]         |
| Schlüssel einfügen            | [[Konstante Laufzeit]]       | [[Konstante Laufzeit]]       |
| Schlüssel bedingt einfügen    | [[lineare Laufzeit]]         | [[lineare Laufzeit]]         |
| Schlüssel lpschen             | [[lineare Laufzeit]]         | [[lineare Laufzeit]]         |

[^1]: Trick: Bei [[Iteration]] über [[Liste]] immer direkt dein next-Pointer des Nachfolgers anschauen, dann hat man direkt den nächsten Pointer, wenn man ein Element löscht