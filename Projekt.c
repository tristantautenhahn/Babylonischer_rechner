#include <stdio.h>

int main(){
    int eingabe;
    int teiler = 60;
    int zahl = 0;
    int rest;
        

    scanf("%dcat ", &eingabe);
         
    if(eingabe >= 60){
        zahl = eingabe / teiler; 
        rest = eingabe - (zahl * teiler); 
        printf(" %d mal die %d und", zahl, teiler); 

        while(rest > 0){
            teiler = teiler - 1; 
            zahl = rest / teiler; 
            if (zahl >= 1){
                rest = rest - (zahl * teiler);
                printf(" %d mal die %d und", zahl, teiler); 
            }
           
        }
    }else{
          while(zahl < 1){
            zahl = eingabe / teiler; 
            if(zahl == 1){
                printf(" %d mal die %d", zahl, teiler);
            }
            teiler = teiler - 1; 
          }
          // der Teil ist sinnlos weil man eine Zahl sucht die man ja schon kennt es würde auch reichen die eingabe einfach wieder auszugen aber ich bin zu Stolz das zu ändern. 
}
    return 0;
}