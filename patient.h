#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  

typedef struct patient* Patient;

struct patient{
    int SUS_number;
    int age;
    int priority_group;
    int batch_vaccine;
};

Patient init_patient(int SUS_number, int age, int priority_group);

int get_priority_group(Patient patient);



void set_batch_vaccine(Patient patient, int batch_vaccine);

void print_patient(Patient patient);