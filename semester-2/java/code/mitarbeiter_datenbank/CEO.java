package mitarbeiter_datenbank;

import java.util.Date;

public class CEO extends Manager {
    private double ceoZulage;

    public CEO(double grundGehalt, double provisionsSatz, double umsatz, String name, int personalNummer, Date geburtstag, double ceoZulage) {
        super(grundGehalt, provisionsSatz, umsatz, name, personalNummer, geburtstag);
        this.ceoZulage = ceoZulage;
    }

    public double berechneGehalt() {
        return super.berechneGehalt() + this.ceoZulage;
    }



    public double getCeoZulage() {
        return this.ceoZulage;
    }

    public void setCeoZulage(double ceoZulage) {
        this.ceoZulage = ceoZulage;
    }

}
