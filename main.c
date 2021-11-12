#include <stdio.h>
#include <math.h>

void calcularConsumoAgua(int cosumoLitros){
    int consumo;
    double adicional;
    int adicionales;
    int costoLitro = 150;
    consumo = cosumoLitros - 100;
    adicional = consumo / 50;
    // printf("%0.2f", adicional);
    // double redondeado = round(adicional);
    // printf("%0.2f", round(adicional));
    adicionales = (int) adicional;
    if(consumo%50>0){
        adicional = adicional+1;
    }
    adicionales = (int) adicional;
    printf("%.f", adicional);
    printf("%i", adicionales);

    for (int i = 0; i < adicionales; i++){
        costoLitro = costoLitro + 25;
    }

    printf("%i", costoLitro);
    
    
}

void facturaAgua(){
    int consumoLitros = 0;
    puts("INGRESE EL COSUMO MENSUAL EN LITROS:");
    scanf("%i", &consumoLitros);
    calcularConsumoAgua(consumoLitros);


}

int main() {
    int opc = 0;
    do {
        puts("EMPRESA DE SERVICIOS \n 1) FACTURAS AGUA \n 2) FACTURAS ELECTRICIDAD \n 3) SALIR");
        scanf("%i", &opc);
        if(opc == 1){
            facturaAgua();
        }else if(opc == 2){
        }
    } while (opc!=3);
    return 0;
}
