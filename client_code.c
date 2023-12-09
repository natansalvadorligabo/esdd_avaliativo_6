#include <time.h>
#include "lde.h"

void menu();
int questionary();
int generate_batch_vaccine();
void print_patient(Patient patient);

int main(){
    int option, age, priority_group, SUS_number, batch_vaccine;
    List queue;
    List stack;
    
    queue = init_list();
    stack = init_list();

    do{
        menu();
        scanf("%d", &option);

        switch (option){
        case 1:
            printf("\nInsira seu número SUS: ");
            scanf("%d", &SUS_number);
            printf("Insira sua idade: ");
            scanf("%d", &age);

            if (age >= 60){
                priority_group = 2;
            }else{
                priority_group = questionary();
            }

            Patient patient = init_patient(SUS_number, age, priority_group);
            
            if(insert_ascend(queue, patient)){
                printf("\nPaciente cadastrado com sucesso!\n");
            }else{
                printf("\nErro ao cadastrar paciente!\n");
            }
            
            break;
        case 2:
            printf("\nVacinar o próximo da fila...\n");

            batch_vaccine = generate_batch_vaccine();
            // inserir lote no paciente

            if(is_empty_list(queue)){
                printf("\nNão há pacientes cadastrados!\n");
            }else{
                Patient patient_vaccinated = delete_first(queue);
                set_batch_vaccine(patient_vaccinated, batch_vaccine);
                
                print_patient(patient_vaccinated);

                if(insert_last(stack, patient_vaccinated)){
                    printf("\nPaciente vacinado com sucesso!\n");
                }else{
                    printf("\nNão foi possível vacinar o paciente.\n");
                }
            }

            break;
        case 3:
            printf("\nPacientes vacinados:\n");
            while(!is_empty_list(stack)){
                Patient patient;
                patient = delete_last(stack);
                print_patient(patient);
            }
            break;
        case 4:
            printf("\nEncerrando o programa...");
            break;
        
        default:
            break;
        }
        
    } while (option != 4);
    
    return 0;
}

void menu(){
    //system("cls");

    printf("\n===== Menu =====\n");
    printf("1. Cadastrar paciente\n");
    printf("2. Vacinar o próximo da fila\n");
    printf("3. Pacientes vacinados\n");
    printf("4. Sair\n");
    printf("Escolha sua opção: ");
}

int questionary(){
    int priority_group, answer;

    printf("\nResponda ao questionário a seguir:\n");

    printf("Trabalhador da saúde (1 - Sim | 0 - Não): ");
    scanf("%d", &answer);
    if (answer == 1){
        priority_group = 1;
    }else{
        printf("Indígena (1 - Sim | 0 - Não): ");
        scanf("%d", &answer);
        if (answer == 1){
            priority_group = 3;
        }else{
            printf("Ribeirinha (1 - Sim | 0 - Não): ");
            scanf("%d", &answer);
            if (answer == 1){
                priority_group = 4;
            }else{
                printf("Quilombola (1 - Sim | 0 - Não): ");
                scanf("%d", &answer);
                if (answer == 1){
                    priority_group = 4;
                }else{
                    printf("Comorbidades (1 - Sim | 0 - Não): ");
                    scanf("%d", &answer);
                    if (answer == 1){
                        priority_group = 5;
                    }else{
                        printf("Trabalhador da educação (1 - Sim | 0 - Não): ");
                        scanf("%d", &answer);
                        if (answer == 1){
                            priority_group = 6;
                        }else{
                            printf("Deficiência severa (1 - Sim | 0 - Não): ");
                            scanf("%d", &answer);
                            if (answer == 1){
                                priority_group = 7;
                            }else{
                                printf("Força de segurança (1 - Sim | 0 - Não): ");
                                scanf("%d", &answer);
                                if (answer == 1){
                                    priority_group = 8;
                                }else{
                                    printf("Funcionário do sistema penitenciário (1 - Sim | 0 - Não): ");
                                    scanf("%d", &answer);
                                    if (answer == 1){
                                        priority_group = 9;
                                    }else{
                                        printf("Detento (1 - Sim | 0 - Não): ");
                                        scanf("%d", &answer);
                                        if (answer == 1){
                                            priority_group = 10;
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

    return priority_group;
}

int generate_batch_vaccine(){
    int batch_vaccine;
    srand(time(NULL));

    batch_vaccine = (rand() % 1000) + 500;

    return batch_vaccine;
}

void print_patient(Patient patient){
    printf("\nNúmero SUS: %d\n", get_SUS_number(patient));
    printf("Idade: %d\n", get_patient_age(patient));
    printf("Grupo de prioridade: %d\n", get_priority_group(patient));
    printf("Lote da vacina: %d\n", get_batch_vaccine(patient));
}