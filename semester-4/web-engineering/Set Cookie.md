> [[HTTP header]] Zeile

- Richtung: Server -> Client

> [!info] Ein [[Cookie]] wird gelöscht, indem das 'expire' Feld auf ein vergangenes Datum gesetzt wird.
### Fields:
- name - enthält namen _und_ Inhalt (_nicht_ optional)
- expires - [[UNIX epoch]]
- domain - nur gesendet, wenn die [[Domain]] stimmt
- path
- secure - nur über [[HTTPS]]

## in PHP
```php
<?php setcookie(string name, ...)?>
```