#include <stdio.h>
#include <string.h>

int main() {
    double var;
    char currency;

    printf("Geldbetrag mit Währung:\n");
    scanf("%lf %s", &var, &currency);
    double eur;

    //CVT Money value into Eur
    if(strcmp(&currency, "EUR") == 0){
       eur = var * 1;
       printf("%0.2lf€ in EURO: %0.2lf€\n",var, eur);
    }else if(strcmp(&currency, "USD") == 0){
       eur = var * 0.923088;
       printf("%0.2lf$ in EURO: %0.2lf€\n",var, eur);
    }else if(strcmp(&currency, "BPF") == 0){
       eur = var * 1.16;
       printf("%0.2lf£ in EURO: %0.2lf€\n",var, eur);
    }else if(strcmp(&currency, "CHF") == 0){
       eur = var * 1.02;
       printf("%0.2lfCHF in EURO: %0.2lf€\n",var, eur);
    }else if(strcmp(&currency, "JPY") == 0){
       eur = var * 0.0059;
       printf("%0.2lf¥ in EURO: %0.4lf€\n",var, eur);
    }else{
       printf("Währung nicht erkannt!");
    }

    char *toCurrency;
    printf("in welche Währung soll umgewandelt werden?\n");
    scanf("%s", &toCurrency);
    double res;

    if(strcmp(&toCurrency, "EUR") == 0){
        res = eur * 1;
        printf("%s: %0.2lf",&toCurrency, res);
    }else if(strcmp(&toCurrency, "USD") == 0){
        res = eur * 1.09;
        printf("%s: %0.2lf",&toCurrency, res);
    }else if(strcmp(&toCurrency, "BPF") == 0){
        res = eur * 0.86;
        printf("%s: %0.2lf",&toCurrency, res);
    }else if(strcmp(&toCurrency, "CHF") == 0){
        res = eur * 0.98;
        printf("%s: %0.2lf",&toCurrency, res);
    }else if(strcmp(&toCurrency, "JPY") == 0){
        res = eur * 168.33;
        printf("%s: %0.2lf",&toCurrency, res);
    }else{
        printf("Währung nicht erkannt!");
    }

   return 0;
}
