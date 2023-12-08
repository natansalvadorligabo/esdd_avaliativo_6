#include "patient.h"

Patient init_patient(int SUS_number, int age, int priority_group){
    Patient patient = malloc(sizeof(struct patient));
    patient->SUS_number = SUS_number;
    patient->age = age;
    patient->priority_group = priority_group;
    patient->batch_vaccine = 0;
    return patient;
}

int get_priority_group(Patient patient){
    return patient->priority_group;
}

void set_batch_vaccine(Patient patient, int batch_vaccine){
    patient->batch_vaccine = batch_vaccine;
}

void print_patient(Patient patient){
    printf("Número SUS: %d\n", patient->SUS_number);
    printf("Idade: %d\n", patient->age);
    printf("Grupo de prioridade: %d\n", patient->priority_group);
    printf("Lote da vacina: %d\n", patient->batch_vaccine);
}