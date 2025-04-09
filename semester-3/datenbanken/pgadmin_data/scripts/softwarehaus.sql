-- Table: public.mitarbeiter

DROP TABLE IF EXISTS public.mitarbeiter;

CREATE TABLE IF NOT EXISTS public.mitarbeiter
(
    pers_nr integer NOT NULL,
    vorname character varying COLLATE pg_catalog."default",
    nachname character varying COLLATE pg_catalog."default",
    geb_name character varying COLLATE pg_catalog."default",
    geb_datum date,
    skill varchar,
    geschlecht character(1) COLLATE pg_catalog."default",
    eintrittsdatum date,
    gehalt int,

	primary key (pers_nr),
	check (geschlecht in ('m', 'w', 'd')),
    check (gehalt > 20000 and gehalt < 150000)
);

CREATE TABLE IF NOT EXISTS public.besucht
(
    pers_nr integer NOT NULL,
    kurs_nr integer NOT NULL,
    irgendwas text,
    
    primary key (pers_nr, kurs_nr)
);

CREATE TABLE IF NOT EXISTS public.kurs
(
    kurs_nr integer NOT NULL,
    kusr_name varchar,

    primary key (kurs_nr)
)

CREATE TABLE Finanzb_mitarbeiter (
    pers_nr integer not null,
    special_skill varchar,


    primary key (pers_nr)
)

TABLESPACE pg_default;

ALTER TABLE IF EXISTS public.mitarbeiter
    OWNER to postgres;
