#include <stdio.h>

int main() {

    int eta;

    printf("inserisci l'eta:\n");
    scanf("%d", &eta);

    if(eta > 26) {
        printf("l'importo da pagare e' 3.00 euro");
    }
    else if(eta >= 18 && eta <= 26) {
        printf("l'importo da pagare e' 2.00 euro");
    }
    else if(eta >= 11 && eta <= 17) {
        printf("l'importo da pagare e' 1.50 euro");
    }
    else {
        printf("l'importo da pagare e' 1 euro");
    }

    return 0;
}
