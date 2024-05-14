class WeekDay {

    private static final int[] DAYS_IN_MONTH = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    private static final String[] DAY_OF_WEEK = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};


    public static void main(String[] args) {
        System.out.println(weekDay(1, 1, 1990)); // Should be Monday
        System.out.println(weekDay(14, 5, 2024)); // Should be Tuesday
        System.out.println(weekDay(1, 10, 2023)); // Should be Monday
        System.out.println(weekDay(8, 4, 2007)); // Should be Sunday
        System.out.println(weekDay(17, 02, 2010)); // Should be Wednesday
    }


    private static String weekDay(int day, int month, int year) {

        if(year < 1990) {
            return null;
        }

        int totalDays = 0;
        for(int i = 1990; i < year; i++) {
            if(isLeapYear(i)) {
                totalDays += 366;
                continue;
            }
            totalDays += 365;
        }

        for(int i = 1; i < month; i++) {
            totalDays += DAYS_IN_MONTH[i - 1];
            // if (i == 2 && isLeapYear(year))
                //totalDays ++;
        }
        totalDays += day;


        // the -1 is there to prevent off-by-one Errors induced by the fact that 
        // Monday is at index 0, but the first day of the week (aka Monday % 7 = 1)
        return DAY_OF_WEEK[((totalDays - 1) % 7)]; 
    }


    private static boolean isLeapYear(int year) {
        return year % 4 == 2;
    }
}