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
        printf(" 100 |  150  |  15000\n");
        for (int i = 0; i < adicional; i++) {
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
    printf("------------------------------------------\n");
    printf("Total a pagar: %d\n", costoTotal);
    printf("------------------------------------------\n");

    if (zonaResidencia == 1) {
        double num = costoTotal;
        int descuento = num * 0.15;
        puts("");
        printf("------------------------------------------\n");
        printf("Tipo de servicio: Agua\n");
        printf("Tipo de zona: Rural\n");
        printf("Consumo total: %i litros\n", consumoLitros);
        printf("Descuento: $%i\n", descuento);
        printf("Costo total: $%d\n", costoTotal - descuento);
        printf("------------------------------------------\n");
        puts("");
    }
    if (zonaResidencia == 2) {
        int alcantarillado = 10000;
        puts("");
        printf("------------------------------------------\n");
        printf("Tipo de servicio: Agua\n");
        printf("Tipo de zona: Urbana\n");
        printf("Consumo total: %i litros\n", consumoLitros);
        printf("Servicio de alcantarillado: $%i\n", alcantarillado);
        printf("Costo total: $%d\n", costoTotal + alcantarillado);
        printf("------------------------------------------\n");
        puts("");
    }
    if (zonaResidencia == 3) {
        double num = costoTotal;
        int incremento = num * 0.25;
        int alcantarillado = 30000;
        puts("");
        printf("------------------------------------------\n");
        printf("Tipo de servicio: Agua\n");
        printf("Tipo de zona: Rural\n");
        printf("Consumo total: %i litros\n", consumoLitros);
        printf("Incremento: $%i\n", incremento);
        printf("Servicio de alcantarillado: $%i\n", alcantarillado);
        printf("Costo total: $%d\n", costoTotal + incremento + alcantarillado);
        printf("------------------------------------------\n");
        puts("");
    }
}

void calcularConusmoLuz(int consumoKW, int zonaResidencia) {
    int consumo;
    int adicional;
    int costoKWBase = 200;
    int costoKWAdcional;
    int costoTotal;
    int reductor = -1;

    consumo = consumoKW - 100;
    adicional = consumo / 25;

    if (consumo % 25 > 0) {
        adicional--;
    }


    if (consumoKW <= 150) {
        costoTotal = consumoKW * 200;
        printf("%d  |  200  |  %d\n", consumoKW, costoTotal);
    } else {
        costoTotal = 30000;

        printf(" 100 |  200  |  30000\n");
        for (int i = 1; i < adicional; i++) {

            costoKWBase += 40;

            if (consumo > 25) {
                consumo -= 25;
                costoKWAdcional = 25 * costoKWBase;
                printf(" 25  |  %d  |  %d \n", costoKWBase, costoKWAdcional);
                costoTotal += costoKWAdcional;
            }

        }
        int adicionaN = adicional + 1;
        int costoUltimo = adicionaN * (costoKWBase + 40);
        costoTotal = costoTotal + costoUltimo;
        printf("  %i  |  %i  |  %i \n", adicionaN, (costoKWBase + 40), costoUltimo);
        printf("------------------------------------------\n");
        printf("Total a pagar: %d \n ", costoTotal);
        printf("------------------------------------------\n");

    }
    if (zonaResidencia == 1) {
        double num = costoTotal;
        int descuento = num * 0.20;
        puts("");
        printf("------------------------------------------\n");
        printf("Tipo de servicio: Luz\n");
        printf("Tipo de zona: Rural\n");
        printf("Consumo total: %i litros\n", consumoKW);
        printf("Descuento: $%i\n", descuento);
        printf("Costo total: $%d\n", costoTotal - descuento);
        printf("------------------------------------------\n");
        puts("");
    }
    if (zonaResidencia == 2) {
        int alumbradoPublico = 15000;
        puts("");
        printf("------------------------------------------\n");
        printf("Tipo de servicio: Luz\n");
        printf("Tipo de zona: Urbana\n");
        printf("Consumo total: %i litros\n", consumoKW);
        printf("Servicio de alumbrado publico: $%i\n", alumbradoPublico);
        printf("Costo total: $%d\n", costoTotal + alumbradoPublico);
        printf("------------------------------------------\n");
        puts("");
    }
    if (zonaResidencia == 3) {
        double num = costoTotal;
        int incremento = num * 0.35;
        int alumbradoPublico = 50000;
        puts("");
        printf("------------------------------------------\n");
        printf("Tipo de servicio: Luz\n");
        printf("Tipo de zona: Rural\n");
        printf("Consumo total: %i litros\n", consumoKW);
        printf("Incremento: $%i\n", incremento);
        printf("Servicio de alumbrado publico: $%i\n", alumbradoPublico);
        printf("Costo total: $%d\n", costoTotal + incremento + alumbradoPublico);
        printf("------------------------------------------\n");
        puts("");
    }


}

void facturaAgua() {
    int consumoLitros = 0;
    int zonaResidencia = 0;
    puts("INGRESE EL COSUMO MENSUAL EN LITROS:");
    scanf("%i", &consumoLitros);
    puts("INGRESE EL DIGITO DE LA ZONA DE SU RESIDENCIA: \n 1)Rural \n 2)Urbana \n 3)Industrial");
    scanf("%i", &zonaResidencia);
    if (zonaResidencia < 0 || zonaResidencia > 3) {
        printf("------------------------------------------\n");
        printf("Digite una opcion valida\n");
        printf("------------------------------------------\n");
    } else {
        calcularConsumoAgua(consumoLitros, zonaResidencia);
    }
}

void facturaLuz() {
    int consumoKW = 0;
    int zonaResidencial = 0;
    puts("INGRESE EL COSUMO MENSUAL EN KILOWATTS: ");
    scanf("%i", &consumoKW);
    puts("INGRESE EL DIGITO DE LA ZONA DE SU RESIDENCIA: \n 1)Rural \n 2)Urbana \n 3)Industrial");
    scanf("%i", &zonaResidencial);
    if (zonaResidencial < 0 || zonaResidencial > 3) {
        printf("------------------------------------------\n");
        printf("Digite una opcion valida\n");
        printf("------------------------------------------\n");
    } else {
        calcularConusmoLuz(consumoKW,zonaResidencial);
    }



}

int main() {
    int opc = 0;
    do {
        puts("EMPRESA DE SERVICIOS \n 1) FACTURAS AGUA \n 2) FACTURAS ELECTRICIDAD \n 3) SALIR");
        scanf("%i", &opc);
        if (opc == 1) {
            facturaAgua();
        } else if (opc == 2) {
            facturaLuz();
        }
    } while (opc != 3);
    return 0;
}
