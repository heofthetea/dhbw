ALTER Table public.Mitarbeiter
drop constraint mitarbeiter_arbeitet_in_fkey,
    ADD CONSTRAINT mitarbeiter_arbeitet_in_fkey FOREIGN KEY (arbeitet_in)
    REFERENCES public.Abteilung (Abt_bez_kurz) MATCH SIMPLE
    ON UPDATE NO ACTION
    ON DELETE Set NULL
;

ALTER Table public.Mitarbeiter
drop constraint mitarbeiter_chef_nr_fkey,
    ADD CONSTRAINT mitarbeiter_chef_nr_fkey FOREIGN KEY (chef_nr)
    REFERENCES public.Mitarbeiter (Pers_nr) MATCH SIMPLE
    ON UPDATE NO ACTION
    ON DELETE Set NULL
;

ALTER TABLE public.besucht_kurs
drop constraint besucht_kurs_Pers_nr_fkey,
    ADD CONSTRAINT besucht_kurs_pers_nr_fkey FOREIGN KEY (pers_nr)
    REFERENCES public.Mitarbeiter (pers_nr) MATCH SIMPLE
    ON UPDATE NO ACTION
    ON DELETE CASCADE
;

ALTER TABLE public.besucht_kurs
drop constraint besucht_kurs_Kurs_nr_fkey,
    ADD CONSTRAINT besucht_kurs_kurs_nr_fkey FOREIGN KEY (kurs_nr)
    REFERENCES public.Kurs (Kurs_nr) MATCH SIMPLE
    ON UPDATE NO ACTION
    ON DELETE Restrict
;

ALTER Table public.Mitarbeiter_finanzb
drop constraint mitarbeiter_finanzb_pers_nr_fkey,
    ADD CONSTRAINT mitarbeiter_finanzb_pers_nr_fkey FOREIGN KEY (pers_nr)
    REFERENCES public.Mitarbeiter (Pers_nr) MATCH SIMPLE
    ON UPDATE NO ACTION
    ON DELETE Cascade
;

ALTER Table public.Mitarbeiter_projekt
drop constraint mitarbeiter_projekt_pers_nr_fkey,
    ADD CONSTRAINT mitarbeiter_projekt_pers_nr_fkey FOREIGN KEY (pers_nr)
    REFERENCES public.Mitarbeiter (Pers_nr) MATCH SIMPLE
    ON UPDATE NO ACTION
    ON DELETE Cascade
;

ALTER Table public.Projektleiter
drop constraint Projektleiter_pers_nr_fkey,
    ADD CONSTRAINT Projektleiter_pers_nr_fkey FOREIGN KEY (pers_nr)
    REFERENCES public.Mitarbeiter (Pers_nr) MATCH SIMPLE
    ON UPDATE NO ACTION
    ON DELETE Cascade
;

ALTER TABLE public.auftrag
drop constraint auftrag_erteilt_von_fkey,
    ADD CONSTRAINT auftrag_erteilt_von_fkey FOREIGN KEY (erteilt_von)
    REFERENCES public.kunde (kunden_nr) MATCH SIMPLE
    ON UPDATE NO ACTION
    ON DELETE CASCADE
;

ALTER TABLE public.Leistung
drop constraint leistung_auftrag_nr_fkey,
    ADD CONSTRAINT leistung_auftrag_nr_fkey FOREIGN KEY (auftrag_nr)
    REFERENCES public.Auftrag (auftrag_nr) MATCH SIMPLE
    ON UPDATE NO ACTION
    ON DELETE CASCADE
;

ALTER TABLE public.Leistung
drop constraint leistung_zu_projekt_fkey,
    ADD CONSTRAINT leistung_zu_projekt_fkey FOREIGN KEY (zu_projekt)
    REFERENCES public.Projekt (projekt_nr) MATCH SIMPLE
    ON UPDATE NO ACTION
    ON DELETE Set Null
;

ALTER TABLE public.Projekt
drop constraint projekt_geleitet_von_fkey,
    ADD CONSTRAINT projekt_geleitet_von_fkey FOREIGN KEY (geleitet_von)
    REFERENCES public.Projektleiter(pers_nr) MATCH SIMPLE
    ON UPDATE NO ACTION
    ON DELETE Set Null
;

ALTER TABLE public.arbeitet_an
drop constraint arbeitet_an_pers_nr_fkey,
    ADD CONSTRAINT arbeitet_an_pers_nr_fkey FOREIGN KEY (pers_nr)
    REFERENCES public.Mitarbeiter_Projekt (pers_nr) MATCH SIMPLE
    ON UPDATE NO ACTION
    ON DELETE Restrict
;

ALTER TABLE public.arbeitet_an
drop constraint arbeitet_an_Leistung_nr_fkey,
    ADD CONSTRAINT arbeitet_an_Leistung_nr_fkey FOREIGN KEY (auftrag_nr,leistung_nr)
    REFERENCES public.Leistung (auftrag_nr,leistung_nr) MATCH SIMPLE
    ON UPDATE NO ACTION
    ON DELETE CASCADE
;
