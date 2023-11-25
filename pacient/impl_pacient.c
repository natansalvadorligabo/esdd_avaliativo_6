#include "pacient.h"

struct pacient{
    int SUS_number;
    int age;
    int priority_group;
};

void new_pacient(Pacient *pacient, int age, int priority_group){
    *pacient = malloc(sizeof(struct pacient));
    (*pacient)->SUS_number = generate_SUS_number();
    (*pacient)->age = age;
    (*pacient)->priority_group = priority_group;
}

int generate_SUS_number(){
    int SUS_number = 0;
    return ++SUS_number;
}