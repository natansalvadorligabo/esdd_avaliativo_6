#include "pacient.h"
#include "queue.h"
#include "pilha.h"

void menu();

int main(){
    int option;

    do{
        menu();
        scanf("%d", &option);

        switch (option){
        case 1:
            /* code */
            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        case 4:
            printf("Encerrando o programa...");
            break;
        
        default:
            break;
        }
        
    } while (option != 4);
    
    return 0;
}

void menu(){
    system("cls");

    printf("===== Menu =====\n");
    printf("1. Cadastrar paciente\n");
    printf("2. Vacinar o próximo da fila\n");
    printf("3. Pacientes vacinados\n");
    printf("4. Sair\n");
    printf("Escolha sua opção: ");
}