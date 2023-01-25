#include <stdio.h>

int main(){
 int a,b,c,d,e,f;
 float oB;
  
  //initalisieren der Variablen
  a = 0;
  b = 0;
  c = 0;
  d = 0;
  e = 0;
  f = 0;
  
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
  } while (oB >= 0.050){
    oB = oB - 0.050;
    d++;
  } while (oB >= 0.020){
    oB = oB - 0.020;
    e++;
  } while (oB >= 0.01){
    oB = oB - 0.010;
    f++;
  }
  
  //ausgabe wieviele Münzen gebraucht werden
  printf("Man braucht %i zwei Euro Stücke, %i fünfzig Cent Stücke, %i zehn Cent Stücke, %i fünf Cent Stücke, %i zwei Cent Stücke und %i ein Cent Stücke. \n\n\n", a,b,c,d,e,f);

  return 0;
}
