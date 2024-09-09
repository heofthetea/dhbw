package mitarbeiter_datenbank;

import java.util.Date;

public class Arbeiter extends Mitarbeiter {
    private double stunden;
    private double stundenLohn;


    public Arbeiter(double stunden, double stundenLohn, String name, int personalNummer, Date geburtstag) {
        super(personalNummer, name, geburtstag);
        this.stunden = stunden;
        this.stundenLohn = stundenLohn;
    }

    public double berechneGehalt() {
        return this.stunden * this.stundenLohn;
    }



    public double getStunden() {
        return this.stunden;
    }

    public void setStunden(double stunden) {
        this.stunden = stunden;
    }

    public double getStundenLohn() {
        return this.stundenLohn;
    }

    public void setStundenLohn(double stundenLohn) {
        this.stundenLohn = stundenLohn;
    }

}
