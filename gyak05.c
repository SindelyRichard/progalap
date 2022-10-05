/*#include <stdio.h>
#include <stdlib.h>

#define MERET 5
int main()
{
    int tomb[MERET];
    int tomb2[] = {1,2,3,4,5,6};

    for (int i = 0; i < MERET; i++)
    {
        tomb[i] = 2*i;
    }
    for (int i = 0; i < MERET; i++)
    {
        printf("a %d elem: %d\n",i+1,tomb[i]);
    }
    int meret2 = sizeof(tomb2) / sizeof(int);
    for (size_t i = 0; i < meret2; i++)
    {
        printf("a %d elem %d\n", i+1, tomb2[i]);
    }
    
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h> // rand(), srand() függvényhíváshoz
#include <time.h> // time() függvényhíváshoz
#define MERET 5
int main()
{
 int i, j;
 int lotto[MERET], jelolt;
 srand(time(0)); // véletlenszám generátor inicializálása
 for (int i = 0; i < MERET; i++)
 {
    lotto[i] = rand() % 90 + 1;
 }
 for (i=0; i<MERET; ) 
 {
   jelolt = rand()%90+1; // rand()%x : [0...x) intervallumból ad vissza egy egész számot
   for(j=0; j<i; j++) 
   {
   if (lotto[j] == jelolt) // ismétlődés elkerülése
   break;
   }
   if (j==i) 
   {
   lotto[i] = jelolt;
   i++;
   }
 }
 //tömb kiírása
 for(i=0; i<MERET; i++) {
 printf("%d. szám: %d\n", i+1, lotto[i]);
 }
 return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
 int i;

 double tomb[ ] = {289.5, 292.6, 290.2, 295.5, 300.4, 300.3, 302.5, 303.3, 303.5, 299.9};
 int meret = sizeof(tomb)/sizeof(double); 
 int db = 0;
 for (i=0; i<meret; i++) {
 printf("\n A(z) %d elem: ", i, tomb[i]);
 }
 for (int i = 0; i < meret; i++)
 {
    if(tomb[i]<300)
    {db++;}
 }
 printf("\n300 alatt %d db volt.",db);
 int found=0;
 for (i=1; i<meret && !found; i+=1) {
if (tomb[i] < tomb[i-1]) found=1; 
 }
 printf("A sorozat monoton növő: %s", found ? "igaz" : "hamis");

 int minindex=0;
 for(i=0; i<meret; i++) {
 if(tomb[i]<tomb[minindex])
 minindex=i;
 }
 printf("\nA sorozat legkisebb eleme: %lf, sorszáma: %d", tomb[minindex], minindex+1);
 
 int maxindex=0;
 for(i=1; i<meret; i++) {
 if(tomb[i]>tomb[maxindex])
 maxindex=i;
 }
 printf("\nA sorozat legnagyobb eleme: %lf, sorszáma: %d", tomb[maxindex], maxindex+1);

 double osszeg = 0;
 double atlag = 0;
atlag = osszeg / meret;
printf("Az átlag: %.2lf",atlag);
double szoras = 0;
for (int i = 0; i < meret; i++)
{
    szoras = atlag - tomb[i];
    printf("A %d szórés értéke: %2.lf",i,szoras);
}

 return 0;
}
