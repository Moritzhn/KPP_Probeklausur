#include <stdio.h>

int main(){
 int a,b,c,d;
 float oB;
  
  //initalisieren der Variablen
  a = 0;
  b = 0;
  c = 0;
  d = 0;
  
  //abfragen des offenen Betrags
  printf("\n\nGeben sie den offenen Betrag in Euro ein:");
  scanf("%f", &oB);
  printf("\n");
  
  //ausrechnen wieviele Münzen gebraucht werden
  while (oB >= 2){
    oB = oB - 2;
    a++;
  } while (oB >= 0.5){
    oB = oB - 0.50;
    b++;
  } while (oB >= 0.1){
    oB = oB - 0.1;
    c++;
  } if (oB = 0.050){
    oB = oB - 0.050;
    d++;
  }
  
  //ausgabe wieviele Münzen gebraucht werden
  printf("Man braucht %i 2 Euro Stücke, %i 50 Cent Stücke, %i 10 Cent Stücke und %i 5 Cent Stücke. \n\n\n", a,b,c,d);
  printf("%f", oB);
  return 0;
}
