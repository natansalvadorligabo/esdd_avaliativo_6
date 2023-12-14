#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "patient.h"

// Estrutura do nó
typedef struct list* List;

// Estrutura do paciente
typedef struct patient* Infotype;

// Função que inicializa a lista
List init_list();

// Função que verifica se a lista está vazia
bool is_empty_list(List list);

// Função que insere um elemento no final da lista
bool insert_last(List list, Infotype info);

// Função que insere um elemento em ordem crescente
bool insert_ascend(List list, Infotype info);

// Função que remove da lista o primeiro elemento
Infotype delete_first(List list);

// Função que remove da lista o último elemento
Infotype delete_last(List list);