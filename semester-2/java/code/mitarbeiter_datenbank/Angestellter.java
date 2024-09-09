package mitarbeiter_datenbank;

import java.util.Date;

public class Angestellter extends Mitarbeiter{
    private int grundGehalt;
    private double bonus;

    public Angestellter(int personalNummer, String name, Date geburtstag, int grundGehalt, double bonus) {
        super(personalNummer, name, geburtstag);
        this.grundGehalt = grundGehalt;
        this.bonus = bonus;
    }

    public double berechneGehalt() {
        return this.grundGehalt + this.bonus;
    }


    public int getGrundGehalt() {
        return this.grundGehalt;
    }

    public void setGrundGehalt(int grundGehalt) {
        this.grundGehalt = grundGehalt;
    }

    public double getBonus() {
        return this.bonus;
    }

    public void setBonus(double bonus) {
        this.bonus = bonus;
    }

}
