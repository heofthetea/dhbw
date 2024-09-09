package mitarbeiter_datenbank;

import java.util.Date;

public class Manager extends Mitarbeiter {
    private double grundGehalt;
    private double provisionsSatz;
    private double umsatz;


    public Manager(double grundGehalt, double provisionsSatz, double umsatz, String name, int personalNummer, Date geburtstag) {
        super(personalNummer, name, geburtstag);
        this.grundGehalt = grundGehalt;
        this.provisionsSatz = provisionsSatz;
        this.umsatz = umsatz;
    }

    public double berechneGehalt() {
        return this.grundGehalt + this.umsatz * this.provisionsSatz;
    }

    public double getGrundGehalt() {
        return this.grundGehalt;
    }

    public void setGrundGehalt(double grundGehalt) {
        this.grundGehalt = grundGehalt;
    }

    public double getProvisionsSatz() {
        return this.provisionsSatz;
    }

    public void setProvisionsSatz(double provisionsSatz) {
        this.provisionsSatz = provisionsSatz;
    }

    public double getUmsatz() {
        return this.umsatz;
    }

    public void setUmsatz(double umsatz) {
        this.umsatz = umsatz;
    }

}
