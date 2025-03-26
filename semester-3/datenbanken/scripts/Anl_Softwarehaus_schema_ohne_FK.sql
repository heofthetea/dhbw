--
-- PostgreSQL database dump
--

SET statement_timeout = 0;
SET client_encoding = 'UTF8';
SET standard_conforming_strings = on;
SET check_function_bodies = false;
SET client_min_messages = warning;


--
-- Name: Softwarehaus; Type: COMMENT; Schema: -; Owner: postgres
--

COMMENT ON DATABASE Softwarehaus IS 'delete me asap';


--
-- Name: plpgsql; Type: EXTENSION; Schema: -; Owner: 
--

CREATE EXTENSION IF NOT EXISTS plpgsql WITH SCHEMA pg_catalog;


--
-- Name: EXTENSION plpgsql; Type: COMMENT; Schema: -; Owner: 
--

COMMENT ON EXTENSION plpgsql IS 'PL/pgSQL procedural language';


SET search_path = public, pg_catalog;

SET default_tablespace = '';

SET default_with_oids = false;

--
-- Löschen Tabellen des Softwarehauses
--
  	DROP TABLE if exists public.mitarbeiter cascade;
  	DROP TABLE if exists public.mitarbeiter_Sekr cascade; 
  	DROP TABLE if exists public.mitarbeiter_finanzb cascade;
  	DROP TABLE if exists public.mitarbeiter_projekt cascade;
  	DROP TABLE if exists public.Projektleiter cascade;
 	DROP TABLE if exists public.abteilung cascade;
	DROP TABLE if exists public.kurs cascade;
	DROP TABLE if exists public.besucht_kurs cascade;
	DROP TABLE if exists public.kunde cascade;
	DROP TABLE if exists public.auftrag cascade;
	DROP TABLE if exists public.leistung cascade;
	DROP TABLE if exists public.arbeitet_an cascade;
	DROP TABLE if exists public.projekt cascade;

-- Anlegen der Tabelle Mitarbeiter

CREATE TABLE IF NOT EXISTS Mitarbeiter 
 (
   	Pers_Nr integer,
    	Vorname varchar,
    	Nachname varchar NOT NULL,
   	Geb_Name varchar,
	Geb_Datum date,
	Geschlecht char(1) NOT NULL,
	Eintrittsdatum date NOT NULL,
	Skill varchar(5) default 'PR',
	Gehalt int,

	PRIMARY KEY (Pers_Nr),
	CHECK (Geschlecht IN ('m', 'w')),
	CHECK (Gehalt > 20000  and Gehalt < 150000) 
);	

-- DROP TABLE public.mitarbeiter;
----------------

-- Anlegen der Tabelle Sekretariat-Mitarbeiter

CREATE TABLE IF NOT EXISTS Mitarbeiter_Sekr 
(
    Pers_Nr integer,
    Sachgebiet varchar,
    Berufserfahrung smallint,
   	PRIMARY KEY (Pers_Nr)
);	

-- DROP TABLE public.mitarbeiter_Sekr;
----------------

-- Anlegen der Tabelle Finanzbuchhaltung-Mitarbeiter

CREATE TABLE IF NOT EXISTS Mitarbeiter_Finanzb 
(
    Pers_Nr integer,
    Sachgebiet varchar,
    Projektcontroling varchar (4),
    Spezialerfahrung varchar,
   	PRIMARY KEY (Pers_Nr),
	CHECK (Projektcontroling IN ('ja', 'nein'))
);	

-- DROP TABLE public.mitarbeiter_finanzb;

----------------

-- Anlegen der Tabelle Projekt-Mitarbeiter

CREATE TABLE IF NOT EXISTS Mitarbeiter_Projekt
(
    Pers_Nr integer,
    Stundensatz Numeric (5,2),
    Projekterfahrung smallint,
   	PRIMARY KEY (Pers_Nr)
);	

-- DROP TABLE public.mitarbeiter_projekt;

----------------

-- Anlegen der Tabelle Projektleiter


CREATE TABLE IF NOT EXISTS Projektleiter 
(
    Pers_Nr integer,
    Stufe integer,
    PL_Ausbildung varchar,
   	PRIMARY KEY (Pers_Nr)
);	

-- DROP TABLE public.Projektleiter;

----------------

-- Anlegen der Tabelle Abteilung

CREATE TABLE IF NOT EXISTS Abteilung 
(
    Abt_Bez_kurz varchar (8),
    Abt_Bez_lang varchar NOT NULL,
    Standort varchar NOT NULL,    
    	PRIMARY KEY (Abt_Bez_kurz)	    
);


-- DROP TABLE public.mitarbeiter_Sekr;

----------------

-- Anlegen der Tabelle Kurs

CREATE TABLE IF NOT EXISTS Kurs 
(

    Kurs_Nr integer,
    Kurs_Bez varchar NOT NULL,
    Institut varchar NOT NULL,    
   	 PRIMARY KEY (Kurs_Nr)	    
);

-- DROP TABLE public.kurs;

----------------

-- Anlegen der Tabelle Besucht_Kurs

CREATE TABLE IF NOT EXISTS Besucht_Kurs 
(

    Pers_Nr integer,
    Kurs_Nr integer,
    Termin_Kurs date,    
    	PRIMARY KEY (Pers_Nr, Kurs_Nr)	    
);

-- DROP TABLE public.besucht_kurs;

------------

-- Anlegen der Tabelle Kunde

CREATE TABLE IF NOT EXISTS Kunde
 (
    Kunden_Nr integer,
    Vorname varchar,
    Nachname varchar NOT NULL,
    Firma varchar Not NULL,
	PRIMARY KEY (Kunden_Nr)
);	

-- DROP TABLE public.Kunden;

----------------

-- Anlegen der Tabelle Auftrag

CREATE TABLE IF NOT EXISTS Auftrag 
(
    Auftrag_Nr integer,
    Auftrags_datum date,
    Bezeichnung varchar, 
    Abrechnungsart varchar,	   
   	 PRIMARY KEY (Auftrag_Nr),
	 CHECK (Abrechnungsart IN ('FP', 'TM'))	    
);

-- DROP TABLE public.Auftrag;

----------------

-- Anlegen der Tabelle Leistung

CREATE TABLE IF NOT EXISTS Leistung 
(
    Auftrag_Nr integer,
    Leistung_Nr integer,
    Bezeichung varchar, 
    Start_Termin date,
    Ende_Termin date,    
    Gepl_Std integer,	   
   	 PRIMARY KEY (Auftrag_Nr, Leistung_Nr)	    
);

-- DROP TABLE public.Leistung;

----------------

-- Anlegen der Tabelle Arbeitet_an

CREATE TABLE IF NOT EXISTS Arbeitet_an 
(
    Pers_Nr integer,
    Auftrag_Nr integer,
    Leistung_Nr integer,
    Std integer,
       	PRIMARY KEY (Pers_Nr, Auftrag_Nr, Leistung_Nr)	    
);

-- DROP TABLE public.arbeitet_an;

----------------

-- Anlegen der Tabelle Projekt

CREATE TABLE IF NOT EXISTS Projekt 
(
    Projekt_Nr integer,
    Bezeichung varchar, 
    Beginn date,
    Ende date,
    Plan_Std smallint,
    Ist_Std smallint,	   
   	 PRIMARY KEY (Projekt_Nr)	    
);

-- DROP TABLE public.Projekt;

----------------
-- PostgreSQL database dump comlete;



ALTER TABLE public.mitarbeiter
    add arbeitet_in varchar(8)
    ADD CHECK(Eintrittsdatum <= now())
    add constraint foreign key (arbeitet_in) references abteilung(abt_bez_kurz);
	
