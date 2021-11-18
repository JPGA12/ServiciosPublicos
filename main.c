#include <stdio.h>


void calcularConsumoAgua(int consumoLitros, int zonaResidencia) {

    int consumo;
    int adicional;
    int costoLitroBase = 150;
    int costolitroAdcional;
    int costoTotal;

    consumo = consumoLitros - 100;
    adicional = consumo / 50;


    if (consumo % 50 > 0) {
        adicional++;

    }
    if (consumoLitros <= 100) {
        costoTotal = consumoLitros * 150;
        printf("%d  |  150  |  %d\n", consumoLitros, costoTotal);
    } else {
        costoTotal = 15000;
        printf("%i \n ", adicional);
        printf("100 |  150  |  15000\n");
        for (int i = 1; i <= adicional; i++) {
            costoLitroBase += 25;
            if (consumo < 50) {
                costolitroAdcional = consumo * costoLitroBase;
                printf(" %d  |  %d  |  %d\n", consumo, costoLitroBase, costolitroAdcional);
                costoTotal += costolitroAdcional;
            } else {
                consumo -= 50;
                costolitroAdcional = 50 * costoLitroBase;
                printf(" 50  |  %d  |  %d \n", costoLitroBase, costolitroAdcional);
                costoTotal += costolitroAdcional;

            }
        }

    }
    printf("Total a pagar: %d \n ", costoTotal);
}

void facturaAgua() {
    int consumoLitros = 0;
    int zonaResidencia = 0;
    puts("INGRESE EL COSUMO MENSUAL EN LITROS:");
    scanf("%i", &consumoLitros);
//    puts("INGRESE EL DIGITO DE LA ZONA DE SU RESIDENCIA: \n 1)Rural \n 2)Urbana \n 3)Industrial");
//    scanf("%i",&zonaResidencia);

    calcularConsumoAgua(consumoLitros, zonaResidencia);


}
void facturaLuz(){
    int consumoKW =0;
    int zonaResidencial =0;
    puts("INGRESE EL COSUMO MENSUAL EN KILOWATTS: ");
    scanf("%i",&consumoKW);




}

int main() {
    int opc = 0;
    do {
        puts("EMPRESA DE SERVICIOS \n 1) FACTURAS AGUA \n 2) FACTURAS ELECTRICIDAD \n 3) SALIR");
        scanf("%i", &opc);
        if (opc == 1) {
            facturaAgua();
        } else if (opc == 2) {

        }
    } while (opc != 3);
    return 0;
}
