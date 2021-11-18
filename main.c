#include <stdio.h>


void calcularConsumoAgua(int cosumoLitros, int zonaResidencia) {
    int listrosBase = 100;
    int consumo;
    double adicional;
    int adicionales;
    int costoLitroBase = 150;
    int adiconalLitros = 50;
    int costolitroAdcional = 25;
    int sumaCosto;
    int costolitro;
    int costoTotal;



    consumo = cosumoLitros - listrosBase;
    adicional = consumo / adiconalLitros;


    adicionales = (int) adicional;
    if (consumo % adiconalLitros > 0) {
        printf(" resultante: %d \n ", consumo % adiconalLitros);
        adicional = adicional + 1;
    }
    adicionales = (int) adicional;

    printf("-------------------------------------------------\n");
    printf("%i \n", listrosBase);
    for (int i = 0; i < adicionales - 1; ++i) {
        printf("%i \n", adiconalLitros);
    }
    printf("%d \n ", consumo % adiconalLitros);
    printf("-------------------------------------------------\n");

    //ADICIONAR 25

    printf("Costo total  %i \n", listrosBase * costoLitroBase);

    for (int i = 0; i < (adicionales); ++i) {
        costolitro = costoLitroBase + (costolitroAdcional * i);

        if (costolitro > 150) {

            costoTotal = adiconalLitros * costolitro;
            printf("Costo total: %i \n", costoTotal);
            sumaCosto+=costoTotal;
            printf("SUMA: %i\n",sumaCosto);

        }

    }
    printf("SUMA: %i\n",sumaCosto);

    printf("Costo total : %i \n", (consumo % adiconalLitros) * (costolitro + costolitroAdcional));
    printf("-------------------------------------------------\n");


    //OPERACIONES

    printf("Costo total: \n |  %i |  %i  |  %i  \n", listrosBase, costoLitroBase, listrosBase * costoLitroBase);


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
