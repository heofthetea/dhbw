SET DateStyle TO 'ISO, DMY'; -- Deusche Datumsformat setzen'

insert into abteilung
Values('EDM1','Abteilung für Spezialaufgaben', 'Leinfelden'),
      ('EDM2','Testabteilung', 'Stuttgart'),
      ('EDM3','Programmierung', 'Leinfelden')
;

INSERT INTO Mitarbeiter 
VALUES (1, 'Paul', 'Müller', Null, '28.01.1975','m', '28.05.2014','DBA',61000,'EDM1',NULL),
       (2, 'Rita', 'Schulze', 'Klein', '12.03.1981','w', '01.07.2016','Analy',48000,'EDM3',5),
       (3, 'Claudia', 'Franz', Null, '07.02.1986','w', '1.10.2017','Test',40000,'EDM2',6),
       (4, 'Karin', 'Schwarz', 'Breithans', '13.10.1978','w', '1.10.2011',default,56000,'EDM3',5),
       (5, 'Werner', 'Meier', Null, '20.03.1968','m', '01.02.2010','Analy',80000,'EDM3',NULL),
       (6, 'Klaus', 'Brecht', Null, '28.01.1977','m', '1.6.2011','PL',65000,'EDM2',Null),
       (7, 'Florian', 'Habrecht', Null, '28.01.1985','m', '1.9.2017','Test',46000,'EDM2',6),
       (8, 'Edith', 'Franz', 'Schmid', '17.03.1982','w', '1.3.2015',NULL,38000,'EDM1',6),
       (9, 'Manfred', 'Klein', Null, '28.01.1990','m', '1.12.2018',NULL,32000,'EDM2',5),
       (10,'Paul', 'Kunze', Null, '28.01.1975','m', '1.9.2014',NULL,55000,'EDM1',NULL)
;

insert into Kurs
Values(1312,'C#-Programmierung','Lern-Fix GmbH'),
      (1520,'Datenban-Entwurfs Methoden','Besser Lernen'),
      (4712,'Datenbank Administration','IT-Training GmbH')
;

insert into besucht_kurs
Values	(1, 4712, '13.6.2019'),
	(2, 1312, '1.10.2019'),
	(4, 1312, '1.10.2019'),
	(5, 1520, '15.5.2019')
;

insert into Mitarbeiter_Sekr 
Values	(8, 'Produktion', 5),
	(9, 'Vertrieb', 3)
;

insert into  Mitarbeiter_Finanzb  
Values	(10, 'Finanzwesen','ja','Steuerrecht')
;

insert into  Mitarbeiter_Projekt 
Values	(2, 80.00, 8),
	(3, 62.00, 7),
	(4, 70.00, 5),
	(5, 80.00, 10),
	(7, 65.00, 3),
	(6, 95.00, 12),
	(1, 90.00, 10)
;

insert into Projektleiter 
Values	(1, 2, 'PMI'),
	(6, 4, 'PRINCE2')
;

insert into Projekt
Values 	(4711, 'Neukonzeption der Vernetzung der gesamten Stadtverwaltung','15.3.2015', '15.3.2016', 312, 300, 1),
	(3050, 'Erweiterung Personal-Datenbank Firma Würth', '13.5.2018',NULL, 1100,500,6),
	(2020, 'Analyse Schnittstellen zwischen Produktion und Verkauf Firma Rema','1.2.2018', '31.07.2018', 330, 330, 6),
	(3091, 'Elektronische Erfassung der Prüfstandsdaten für Daimler', '1.9.2018', NULL, 980, 700,1)
;

insert into Kunde
Values	(1, 'Manfred', 'Schwarz', 'Rema GmbH Stuttgart'),
	(2, 'Claudia', 'Müller', 'Schrauben Würth Künzelsau'),
	(3, 'Klaus', 'Huber', 'Daimler AG Untertürkheim'),
	(4, 'Jan', 'Steiner', 'Stadtverwaltung Leinfelden')
;

insert into Auftrag
Values	(1,'15.3.2018', 'Personaldatenbank','FP',2),
	(2, '1.2.2018', 'Prüfstandsdaten', 'TM',3),
	(3, '15.1.2018', 'Schnittstelle Produktion', 'FP',1),
	(4, '1.2.2015', 'Konzeption Neuvernetzung', 'TM',4)
;

insert into Leistung
Values	(1,1, 'Systemanalyse','15.5.2018', '12.6.2018', 100,3050),
	(1,2, 'Datenbankentwurf','20.6.2018', '1.8.2018', 200,3050),
	(1,3, 'Programmierung','15.8.2018', NULL, 450,3050),
	(1,4, 'Test',NULL, NULL, 120,3050),
	(1,5, 'Integration',NULL, NULL, 80,3050),
	(1,6, 'Projektleitung','13.5.2018', NULL, 150,3050),
	(2,1, 'Anforderungsanalyse','1.9.2018', '1.11.2018', 170,3091),
	(2,2, 'Systemanalyse','15.11.2018', '31.12.2018', 80,3091),
	(2,3, 'Datenbankentwurf','15.1.2019', '15.2.2019', 120,3091),
	(2,4, 'Programmierung','20.2.2019', NULL, 290,3091),
	(2,5, 'Test',NULL, NULL, 80,3091),
	(2,6, 'Integration',NULL, NULL, 120,3091),
	(2,7, 'Projektleitung','1.9.2018', NULL, 120,3091),	
	(3,1, 'Pflichtenheft','15.2.2018', '1.7.2018', 330,2020),
	(4,1, 'Systemstudie','1.3.2015', '1.10.2015',250,4711)

;

insert into arbeitet_an
Values	(5,1,1,100),
	(1,1,2,150),
	(2,1,3,100),
	(4,1,3,120),
	(6,1,6,50),
	(5,2,1,100),
	(2,2,1,70),
	(1,2,2,75),
	(1,2,3,100),
	(2,2,4,100),
	(5,2,4,70),
	(1,2,7,66),
	(3,3,1,200),
	(2,4,1,100),
	(5,4,1,150)
;


