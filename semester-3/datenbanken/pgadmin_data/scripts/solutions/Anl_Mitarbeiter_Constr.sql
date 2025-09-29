-- Tabelle Mitarbeiter mit Costraints

CREATE TABLE Mitarbeiter 
 (
    Pers_Nr integer,
    Vorname varchar,
    Nachname varchar NOT NULL,
	 
    Geb_Name varchar,
	Geb_Datum date,
	Geschlecht char(1) NOT NULL,
--	Geschlecht text not null, check (char_length (Geschlecht) =1),
	Eintrittsdatum date NOT NULL,
	Skill varchar(5) default 'PR',
	Gehalt int,

	PRIMARY KEY (Pers_Nr),
	CHECK (Geschlecht IN ('m', 'w','d')),
	CHECK (Gehalt > 20000  and Gehalt < 150000) 
);	
	



