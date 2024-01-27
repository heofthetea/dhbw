#include <stdio.h>
#include <string.h>
#include <math.h>
#include "Nimmzeit.c"
#include<stdbool.h>

#define Max_Zahl (long int) 1e9


int main (void){
    //Sieb 1 = PrimZahl
    //     0 = Keine
    bool sieb[Max_Zahl];
    long int i=0;
    int anz=0;  
    long int j;
    long int eingabe = Max_Zahl;

    double mw1, mw2, mw3;

    // printf("\nGeben sie einen bereich an : ");
    // scanf("%ld",&eingabe);
    mw1 = nimmzeit();

    //Inizialisirung
    for(i=0;i<eingabe;i++){
        sieb[i]=1;
    }
    mw2 = nimmzeit();

    //Primzahlen aus sieben
    for(i=2;i<eingabe;i++){
        if(sieb[i] == 1){
            j=i*2;
            anz++;
            while(j < eingabe){
                
                sieb[j] = 0;
                j = j+ i;
                
            }
        }
    }

    
    mw3 = nimmzeit();
    
    printf("\nvergangene Zeit Initialisirung : %.3f sec\n",mw2-mw1);
    printf("\nvergangene Zeit Sieben         : %.3f sec\n",mw3-mw2);
    printf("\nvergangene Zeit Gesamt         : %.3f sec\n",mw3-mw1);


    
    printf("%i",anz);
    return 0;
}
