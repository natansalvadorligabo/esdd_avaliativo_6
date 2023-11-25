#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  

// Estrutura de dados para armazenar os dados do paciente
typedef struct pacient* Pacient;

void new_pacient(Pacient *pacient, int age, int priority_group, int SUS_number);

int get_priority_group(Pacient pacient);

void print_pacient(Pacient pacient);