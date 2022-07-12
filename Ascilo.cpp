#include <string>
#include <stdio.h>

using namespace std;

void registro(int n);
int main()
{
    int numPersona;
    printf("\n Ingrese el numero de pacientes a registrar ");
    scanf("%d", &numPersona);
    registro(numPersona);
    return 0;
}

void registro(int n)
{
    string nombre[50];
    string apellido[50];
    int edad[50];
    int enfermedad[50];

    for (int i = 0; i < n; i++)
    {
        printf("\n ---PACIENTE [%i]---", i + 1);
        printf("\n Ingrese el nombre: ");
        scanf("%s", &nombre[i]);
        printf("\n Ingrese el apellido:");
        scanf("%s", &apellido[i]);
        fflush(stdin);
        printf("\n Ingrese la edad:");
        scanf("%d", &edad[i]);
        printf("\n SELECCIONE LA ENFERMEDAD");
        printf("\n 1. Hipertension");
        printf("\n 2. Diabetes");
        printf("\n 3. Osteoporosis");
        printf("\n 4. Alzheimer ");
        printf("\n Ingrese el numero: ");
        scanf("%d", &enfermedad[i]);
    }

    // Mostrar Datos
    printf("\n");
    printf("\n ------REGISTRO DE PACIENTES------");
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        if (enfermedad[i] == 1)
        {
            printf("\n DATOS DEL PACIENTE [%i] : ", i + 1);
            printf("\n Nombre y Apellido: %s %s", &nombre[i], &apellido[i]);
            printf("\n Edad: %d", edad[i]);
            printf("\n Enfermedad: Hipertension");
            printf("\n Medicamento: Diuretico - Nombre Medicamento: Hidroclorotiazida");
            printf("\n Dosis: 12.5 a 25 mg - Cuantos Dias/Horas: Diariamente una vez al dia");
            printf("\n--------------------------------------------------------------------------------------------");
        }
        else
        {
            if (enfermedad[i] == 2)
            {
                printf("\n DATOS DEL PACIENTE [%i] : ", i + 1);
                printf("\n Nombre y  Apellido: %s %s", &nombre[i], &apellido[i]);
                printf("\n Edad: %d", edad[i]);
                printf("\n Enfermedad: Diabetes");
                printf("\n Medicamento: Apidra - Nombre Medicamento: KwikPen Tempo");
                printf("\n Dosis: 3 ml Solucion - Cuantos Dias/Horas: Diariamente antes de cada comida 6h, 8h, 12h");
                printf("\n--------------------------------------------------------------------------------------------");
            }
            else
            {
                if (enfermedad[i] == 3)
                {
                    printf("\n DATOS DEL PACIENTE [%i] : ", i + 1);
                    printf("\n Nombre y  Apellido: %s %s", &nombre[i], &apellido[i]);
                    printf("\n Edad: %d", edad[i]);
                    printf("\n Enfermedad: Osteoporosis");
                    printf("\n Medicamento: Fosamax - Nombre Medicamento: Fosamax 70m");
                    printf("\n Dosis: 70 mg - Cuantos Dias/Horas: Semanalmente una dosis cada dia");
                    printf("\n--------------------------------------------------------------------------------------------");
                }
                else
                {
                    if (enfermedad[i] == 4)
                    {
                        printf("\n DATOS DEL PACIENTE [%i] : ", i + 1);
                        printf("\n Nombre y  Apellido: %s %s", &nombre[i], &apellido[i]);
                        printf("\n Edad: %d", edad[i]);
                        printf("\n Enfermedad: Alzheimer");
                        printf("\n Medicamento: Aricept - Nombre Medicamento: Aricept 50m");
                        printf("\n Dosis: 10 mg - Cuantos Dias/Horas: Diariamente una vez al dia durante un mes");
                        printf("\n--------------------------------------------------------------------------------------------");
                    }
                }
            }
        }
    }
}