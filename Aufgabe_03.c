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
  printf("Man braucht %i zwei Euro Stücke, %i fünfzig Cent Stücke, %i zehn Cent Stücke und %i fünf Cent Stück. \n\n\n", a,b,c,d);

  return 0;
}
