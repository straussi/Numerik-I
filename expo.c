#include <stdio.h> 

int main(void){
    float x=0; //Variable x Element IR
    int n=0; //Länge der Partialreihe n Element IN
    printf("Berechne den Wert der natürlichen Exponentialfunktion an der Stelle x in IR auf n in IN Summanden genau. \n"); 
    printf("Gib zunächst x an: "); 
    scanf("%f", &x); //Scanf-Abfrage, um x eingeben zu lassen
    printf("Gib nun an, auf wie viele Summanden der Exponentialreihe genau berechnet werden soll: ");
    scanf("%d", &n); //Scanf-Abfrage, um n eingeben zu lassen
    float p=1.00000; //späterer Reihenwert, hier auf 1 gesetzt, weil der erste Summand der Exponentialreihe gerade ((x^0)/(0!))=1 ist.
    float glied=1.00000; //aktuelles Reihenglied, hier auf 1 gesetzt, wie bei p.
    
    for(int k=1; k <= n; k++){
        glied *= (x/k); //Berechne Reihenglied für ein k<=n.
        p += glied; //summiere das Glied zum aktuellen p.
    }

    printf("Der Wert der Exponentialfunktion an der Stelle %f beträgt bei einer Genauigkeit von %d gerade: %f \n", x, n, p);

    return 0;
}