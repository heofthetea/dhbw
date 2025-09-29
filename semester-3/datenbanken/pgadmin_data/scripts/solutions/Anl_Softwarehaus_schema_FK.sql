------------

SET statement_timeout = 0;
SET client_encoding = 'UTF8';
SET standard_conforming_strings = on;
SET check_function_bodies = false;
SET client_min_messages = warning;


--
-- Name: Softwarehaus; Type: COMMENT; Schema: -; Owner: postgres
--




SET search_path = public, pg_catalog;

SET default_tablespace = '';

SET default_with_oids = false;

--
-- Foreign Keys einfügen
--
---- Mitarbeiter 

ALTER TABLE Mitarbeiter 
ADD if not exists arbeitet_in varchar (8),
ADD Chef_NR Int,
ADD FOREIGN KEY(arbeitet_in) REFERENCES Abteilung,
ADD FOREIGN KEY(Chef_Nr) REFERENCES Mitarbeiter
;


--Sekretariat-Mitarbeiter

ALTER TABLE Mitarbeiter_Sekr 
ADD FOREIGN KEY(Pers_Nr) REFERENCES Mitarbeiter
;


-- Finanzbuchhaltung-Mitarbeiter

ALTER TABLE Mitarbeiter_Finanzb  
ADD FOREIGN KEY(Pers_Nr) REFERENCES Mitarbeiter
;

-- Projekt-Mitarbeiter


ALTER TABLE Mitarbeiter_Projekt 
ADD FOREIGN KEY(Pers_Nr) REFERENCES Mitarbeiter
;

--Projektleiter

ALTER TABLE  Projektleiter 
ADD FOREIGN KEY(Pers_Nr) REFERENCES Mitarbeiter
;

-- Projekte

ALTER TABLE  Projekt 
ADD Column geleitet_von Int,
ADD FOREIGN KEY(geleitet_von) REFERENCES Projektleiter
;

-- Besucht_Kurs

ALTER TABLE  Besucht_Kurs
ADD FOREIGN KEY(Pers_Nr) REFERENCES Mitarbeiter,
ADD FOREIGN KEY(Kurs_Nr) REFERENCES Kurs
;

--  Auftrag

ALTER TABLE  Auftrag 
ADD Column erteilt_von Int Not Null,
ADD FOREIGN KEY(erteilt_von) REFERENCES Kunde
;


-- Leistung
ALTER TABLE  Leistung 
ADD Column zu_Projekt Int,
ADD FOREIGN KEY(Auftrag_Nr) REFERENCES Auftrag,
ADD FOREIGN KEY(zu_Projekt) REFERENCES Projekt
;


-- Arbeitet_an

ALTER TABLE  Arbeitet_an
ADD Constraint arbeitet_an_Leistung_nr_fkey FOREIGN KEY(Auftrag_Nr, Leistung_Nr) REFERENCES Leistung,
ADD FOREIGN KEY(Pers_Nr)  REFERENCES Mitarbeiter_Projekt
;


