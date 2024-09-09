package mitarbeiter_datenbank;

import java.util.Date;

abstract class Mitarbeiter implements GehaltBerechenbar{
    private int personalNummer;
    private String name;
    private Date geburtsdatum;

    public Mitarbeiter(int personalNummer, String name, Date geburtsdatum) {
        this.personalNummer = personalNummer;
        this.name = name;
        this.geburtsdatum = geburtsdatum;
    }

    //--------------------------------------------------

    public int getPersonalNummer() {
        return this.personalNummer;
    }

    public void setPersonalNummer(int personalNummer) {
        this.personalNummer = personalNummer;
    }

    public String getName() {
        return this.name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public Date getGeburtsdatum() {
        return this.geburtsdatum;
    }

    public void setGeburtsdatum(Date geburtsdatum) {
        this.geburtsdatum = geburtsdatum;
    }
    
}