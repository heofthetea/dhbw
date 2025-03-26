## Unterschied zwischen:
```sq
UNIQUE NOT NULL
```

und
```SQL
PRIMARY KEY
```

- beim Anlegen eines [[PRIMARY KEY Constraint]] wird ein Index angelegt
	=> Query ist schneller
- **und**: Beim Referenzieren auf die Tabelle mit [[FOREIGN KEY Constraint]] muss der name des Attributs nicht angegeben werden!