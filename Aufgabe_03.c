#include <stdio.h>

int main(){
 float a,b,c,d,oB;
  
  //initalisieren der Variablen
  a = 0;
  b = 0;
  c = 0;
  d = 0;
  
  //abfragen des offenen Betrags
  printf("Geben sie den offenen Betrag in Euro ein:");
  scanf("%f", &oB);
  
  //ausrechnen wieviele Münzen gebraucht werden
  while (oB >= 2){
    oB = oB - 2;
    a++;
  } while (oB >= 0.5){
    oB = oB - 0.5;
    b++;
  } while (oB >= 0.10){
    oB = oB - 0.10;
    c++;
  } while (oB >= 0.05){
    oB = oB - 0.05;
    d++;
  }
  
  //ausgabe wieviele Münzen gebraucht werden
  printf("Man braucht %.0f 2 Euro Stücke, %.0f 50 Cent Stücke, %.0f 10 Cent Stücke und %.0f 5 Cent Stücke. \n", a,b,c,d);
  
  return 0;
}
