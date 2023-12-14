#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  

// Estrutura do paciente
typedef struct patient* Patient;

// Definição da estrutura do paciente
struct patient{
    int SUS_number;
    int age;
    int priority_group;
    int batch_vaccine;
};

// Função que inicializa o paciente
Patient init_patient(int SUS_number, int age, int priority_group);

// Função que retorna o grupo de prioridade do paciente
int get_priority_group(Patient patient);

// Função que retorna o número do SUS do paciente
int get_SUS_number(Patient patient);

// Função que retorna o lote da vacina do paciente
int get_batch_vaccine(Patient patient);

// Função que retorna a idade do paciente
int get_patient_age(Patient patient);

// Função que altera o lote da vacina do paciente
void set_batch_vaccine(Patient patient, int batch_vaccine);