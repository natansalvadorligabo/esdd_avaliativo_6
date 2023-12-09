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

int get_SUS_number(Patient patient){
    return patient->SUS_number;
}

int get_batch_vaccine(Patient patient){
    return patient->batch_vaccine;
}

int get_patient_age(Patient patient){
    return patient->age;
}

void set_batch_vaccine(Patient patient, int batch_vaccine){
    patient->batch_vaccine = batch_vaccine;
}