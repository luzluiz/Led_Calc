#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Calculo para saber o resistor deste led usando a lei de ohms\n");
    printf("Conhecendo Vin: (tensao de entrada)\n");
    printf("Conhecendo led: (tensao que o led precisa)\n");

    printf("\n Led Calc    v1.0 \n\n");
    printf(" Autor: Luiz Felipe Luz Santos\n\n");

    double vin;
    printf(" Digite o valor de Vin (em volts): ");
    scanf("%lf", &vin);

    double vled;
    printf("Digite o valor de Vled (em volts): ");
    scanf("%lf", &vled);

    double iled;
    printf("Digite o valor de Iled (em amperes): ");
    scanf("%lf", &iled);

    printf("\n\n");

    double r = (vin - vled) / iled;

    printf("Vin = %.2lf\n\n", vin);
    printf("Vled = %.2lf\n\n", vled);
    printf("Iled = %.2lf\n\n", iled);
    printf("O Resistor para o Led tem o vaor de: %.2lf Ohms", r);

    return 0;
}
