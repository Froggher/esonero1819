//Federico Ranocchia
//Matricola 310813

#include<stdio.h>
#include<limits.h>

int n=INT_MIN;

int main(void){
int giorni;
int azioni;
int a;
int m;
int w;
int riscosso;

  printf("Indicare il numero di giorni\n");
scanf("%d",&giorni);

int valori[giorni];
int differenza[giorni-1];


  printf("Indicare il numero di azioni da acquistare\n");
      scanf("%d",&azioni);

for (int i = 0; i < giorni; i++) {

  printf("Inserire valore azioni del giorno N°%d\n", i+1);
      scanf("%d", &valori[i]);//si stanno dando i valori {conenuti qui} array[giorni]={i}
}
for (int u = 1; u <= giorni-1; u++) {

    differenza[u-1]=valori[u]-valori[u-1];

  printf("La differenza tra il giorno N°%d e il giorno N°%d è %d\n",u+1,u,differenza[u-1]);
//si compra di mattina e si vende di pomeriggio
}

for (int h = 0; h < giorni-1 ; h++) {

  a=0;

for (int p=h; p < giorni-1; p++){

  a+=differenza[p];
    //printf("Soluzioni possibili %d\n",a);
     if (a>n){
       n=a;
       m=p+1;     //if per calcolare l'intervallo con il valore massimo
       w=h+1;
  }
}
}
  if (n<=0){  //if per per sconsigliare di non comprare\vendere azioni
    printf("\nNon esiste nessun giorno tra quelli specificati in cui conviene comprare e vendere azioni\n");
    return 0;
}
 printf("\nValore Massimo %d\n\nLa mattina in cui conviene acquistare le azioni è il giorno N°%d\nIl pomeriggio in cui conviene vendere le azioni è il giorno N°%d\n",n,w,m);

  riscosso=valori[m]*azioni;
  azioni*=n;

 printf("\nGuadagno %d\nTotale riscosso %d\n",azioni, riscosso);
}
