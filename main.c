#include <stdio.h>

int main() {
    int opc = 0;
    do {
        puts("EMPRESA DE SERVICIOS \n 1) FACTURAS AGUA \n 2) FACTURAS ELECTRICIDAD \n 3) SALIR");
        scanf("%i", &opc);
        if(opc == 1){
        }else if(opc == 2){
        }
    } while (opc!=3);
    return 0;
}
