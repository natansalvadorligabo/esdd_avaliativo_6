#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "patient.h"

typedef struct list* List;

typedef struct patient* Infotype;

List init_list();

bool is_empty_list(List list);

bool insert_last(List list, Infotype info);

bool insert_ascend(List list, Infotype info);

Infotype delete_first(List list);

Infotype delete_last(List list);