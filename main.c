#include <stdio.h>

void calcularConsumoAgua(int cosumoLitros){
    int consumo;
    int adicional;
    int adicionales;
    int costoLitro;
    consumo = cosumoLitros - 100;
    if (consumo>0){
        adicional = consumo / 50;
        round(adicional);
        adicionales = round(adicional);
        puts(adicionales);
        for (int i = 0; i < adicionales; i++){
        
        }
    }
    
    
    
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
