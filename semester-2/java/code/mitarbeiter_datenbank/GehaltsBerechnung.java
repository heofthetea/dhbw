package mitarbeiter_datenbank;

import java.util.ArrayList;
import java.util.Date;

public class GehaltsBerechnung {

    public static ArrayList<GehaltBerechenbar> mitarbeiter = new ArrayList<GehaltBerechenbar>();

    public static void main(String[] args) {
        Manager m1 = new Manager(5000, 0.1, 100000, "Max Mustermann", 1, new Date());
        Manager m2 = new Manager(6000, 0.1, 200000, "Maria Musterfrau", 2, new Date());
        Angestellter a1 = new Angestellter(3, "Hans Meier", new Date(), 3000, 500);
        Angestellter a2 = new Angestellter(4, "Hanna Maier", new Date(), 4000, 600);
        Arbeiter ar1 = new Arbeiter(160, 20, "Hans Müller", 5, new Date());
        Arbeiter ar2 = new Arbeiter(160, 25, "Hanna Müller", 6, new Date());
        CEO ceo = new CEO(10000, 0.1, 500000, "Max Mustermann", 1, new Date(), 1000);

        mitarbeiter.add(m1);
        mitarbeiter.add(m2);
        mitarbeiter.add(a1);
        mitarbeiter.add(a2);
        mitarbeiter.add(ar1);
        mitarbeiter.add(ar2);
        mitarbeiter.add(ceo);

        System.out.println("Gesamtgehalt: " + berechneGesamtGehalt(mitarbeiter.toArray(new GehaltBerechenbar[0])));  
    }



    public static double berechneGesamtGehalt(GehaltBerechenbar[] mitarbeiter) {
        double gesamtGehalt = 0;
        for (GehaltBerechenbar m : mitarbeiter) {
            gesamtGehalt += m.berechneGehalt();
        }
        return gesamtGehalt;
    }

}
