

alter table besucht_kurs
	add foreign key (pers_nr) references mitarbeiter,
	add foreign key (kurs_nr) references kurs;


alter table mitarbeiter
	add if not exists arbeitet_in varchar(8),
	add foreign key (arbeitet_in) references abteilung;


alter table leistung
	add foreign key (auftrag_nr) references auftrag;