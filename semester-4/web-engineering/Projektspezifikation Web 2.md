1) Multiplayer Applikation, die es ermöglicht, dass zwei Spieler gegeneinander Schach spielen können. Die Applikation basiert auf einer Client-Server Architektur.
2) Accounts anlegen, für jeden Account eine Historie an gespielten Spielen einsehen. Andere Spieler zu einem Spiel einladen können (vie Code oder URL). Spiel in Echtzeit - wenn Spieler A einen Zug macht, registriert Spieler B's Client automatisch, dass dieser Zug gemacht wurde.
3) Technologien:
	1) Web-Sockets für 'Echtzeit'
	2) Elementare Datenbank mit PostGres/MySQL/je nachdem; Hibernate als ORM
	3) Frontend: React + Vite
	4) Backend: Java Spring
