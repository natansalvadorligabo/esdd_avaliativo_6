#include "pacient.h"

struct pacient{
    int SUS_number;
    int age;
    int priority_group;
};

void new_pacient(Pacient *pacient, int age, int priority_group, int SUS_number){
    *pacient = malloc(sizeof(struct pacient));
    (*pacient)->SUS_number = SUS_number;
    (*pacient)->age = age;
    (*pacient)->priority_group = priority_group;
}

int get_priority_group(Pacient pacient){
    return pacient->priority_group;
}

void print_pacient(Pacient pacient){
    printf("Número do SUS: %d\n", pacient->SUS_number);
    printf("Idade: %d\n", pacient->age);
    switch(pacient->priority_group){
        case 1:
            printf("Grupo prioritário: Trabalhador da saúde\n");
            break;
        case 2:
            printf("Grupo prioritário: Idoso\n");
            break;
        case 3:
            printf("Grupo prioritário: Indígena\n");
            break;
        case 4:
            printf("Grupo prioritário: Ribeirinha ou Quilombola\n");
            break;
        case 5:
            printf("Grupo prioritário: Comorbidades\n");
            break;
        case 6:
            printf("Grupo prioritário: Trabalhador da educação\n");
            break;
        case 7:
            printf("Grupo prioritário: Deficiência severa\n");
            break;
        case 8:
            printf("Grupo prioritário: Força de segurança\n");
            break;
        case 9:
            printf("Grupo prioritário: Funcionário do sistema penitenciário\n");
            break;
        case 10:
            printf("Grupo prioritário: Detento\n");
            break;
    }
}