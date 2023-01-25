#include <stdio.h>

int main(){
 int a,b,c,d,oB;
  
  //initalisieren der Variablen
  a = 0;
  b = 0;
  c = 0;
  d = 0;
  
  //abfragen des offenen Betrags
  printf("Geben sie den offenen Betrag in Cent ein:");
  scanf("%d", &oB);
  
  //ausrechnen wieviele Münzen gebraucht werden
  while (oB >= 200){
    oB = oB - 200;
    a++;
  } while (oB >= 50){
    oB = oB - 50;
    b++;
  } while (oB >= 10){
    oB = oB - 10;
    c++;
  } while (oB >= 5){
    oB = oB - 5;
    d++;
  }
  
  //ausgabe wieviele Münzen gebraucht werden
  printf("Man braucht %d 2 Euro Stücke, %d 50 Cent Stücke, %d 10 Cent Stücke, %d 5 Cent Stücke. /n", a , b , c , d);
  
  return 0;
}
