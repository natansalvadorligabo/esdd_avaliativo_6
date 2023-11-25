#include "pacient.h"
#include "queue.h"
#include "pilha.h"

void menu();

int main(){
    int option;
    Queue queue;

    do{
        menu();
        scanf("%d", &option);

        switch (option){
        case 1:
            int age, priority_group, SUS_number;
            printf("Insira seu número SUS: \n");
            scanf("%d", &SUS_number);
            printf("Insira sua idade: \n");
            scanf("%d", &age);
            if (age >= 60){
                priority_group = 2;
            }else{
                priority_group = get_pacient_priority_group();
            }

            Pacient pacient;
            new_pacient(&pacient, age, priority_group, SUS_number);
            print_pacient(pacient);
            
            if (is_empty_queue(queue)){
                enqueue(queue, pacient);
            }else{
                // logica fura fila
            }
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

int get_pacient_priority_group(){
/*  
    1 Trabalhadores da saúde
    2 Idosos (idade acima de 60 anos) 
    3 Indígena
    4 Ribeirinha e quilombola
    5 Grupo com comorbidades
    6 Trabalhadores da educação
    7 Pessoas com deficiência permanente severa
    8 Força de segurança e salvamento 
    9 Funcionários do sistema penitenciário 
    10 Detento
*/ 
    int priority_group;

    printf("Responda ao questionário a seguir:\n");
    printf("Trabalhador da saúde (1 - Sim | 0 - Não)\n");
    scanf("%d", &priority_group);
    if (priority_group == 1){
        return 1;
    }else{
        printf("Indígena (1 - Sim | 0 - Não)\n");
        scanf("%d", &priority_group);
        if (priority_group == 1){
            return 3;
        }else{
            printf("Ribeirinha (1 - Sim | 0 - Não)\n");
            scanf("%d", &priority_group);
            if (priority_group == 1){
                return 4;
            }else{
                printf("Quilombola (1 - Sim | 0 - Não)\n");
                scanf("%d", &priority_group);
                if (priority_group == 1){
                    return 4;
                }else{
                    printf("Comorbidades (1 - Sim | 0 - Não)\n");
                    scanf("%d", &priority_group);
                    if (priority_group == 1){
                        return 5;
                    }else{
                        printf("Trabalhador da educação (1 - Sim | 0 - Não)\n");
                        scanf("%d", &priority_group);
                        if (priority_group == 1){
                            return 6;
                        }else{
                            printf("Deficiência severa (1 - Sim | 0 - Não)\n");
                            scanf("%d", &priority_group);
                            if (priority_group == 1){
                                return 7;
                            }else{
                                printf("Força de segurança (1 - Sim | 0 - Não)\n");
                                scanf("%d", &priority_group);
                                if (priority_group == 1){
                                    return 8;
                                }else{
                                    printf("Funcionário do sistema penitenciário (1 - Sim | 0 - Não)\n");
                                    scanf("%d", &priority_group);
                                    if (priority_group == 1){
                                        return 9;
                                    }else{
                                        printf("Detento (1 - Sim | 0 - Não)\n");
                                        scanf("%d", &priority_group);
                                        if (priority_group == 1){
                                            return 10;
                                        }else{
                                            return 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}