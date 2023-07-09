#include <stdio.h>

int main() {
    int voto1 = 0, voto2 = 0, voto3 = 0, voto4 = 0, voto5 = 0;
    int menu;

    do {
        printf("Bienvenido al contador de votos\n");
        printf("1. Candidato 1\n");
        printf("2. Candidato 2\n");
        printf("3. Candidato 3\n");
        printf("4. Candidato 4\n");
        printf("5. Candidato 5\n");
        printf("Presione 0 para salir\n");
        printf("Ingrese el numero: ");
        scanf("%d", &menu);

        while (menu < 0 || menu > 5) {
            printf("Error, no se acepta este numero.\n");
            printf("Por favor intente de nuevo: ");
            scanf("%d", &menu);
        }

        switch (menu) {
            case 1:
                voto1++;
                break;
            case 2:
                voto2++;
                break;
            case 3:
                voto3++;
                break;
            case 4:
                voto4++;
                break;
            case 5:
                voto5++;
                break;
        }
    } while (menu != 0);

    int votosTotal = voto1 + voto2 + voto3 + voto4 + voto5;

    printf("La cantidad de votos total es %d\n", votosTotal);
    printf("Por el primer candidato votaron %d\n", voto1);
    printf("Por el segundo candidato votaron %d\n", voto2);
    printf("Por el tercer candidato votaron %d\n", voto3);
    printf("Por el cuarto candidato votaron %d\n", voto4);
    printf("Por el quinto candidato votaron %d\n", voto5);

    return 0;
}
