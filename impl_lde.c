#include "lde.h"

struct node {
    struct node* prev;
    Infotype info;
    struct node* next;
};

typedef struct node* Node;

struct list {
    Node head;
};

List init_list(){
    List list = malloc(sizeof(struct list));
    list->head = NULL;
    return list;
}

bool is_empty_list(List list){
    return list->head == NULL;
}

bool insert_last(List list, Infotype info){
    if(list != NULL){
        Node new = malloc(sizeof(struct node));
        new->info = info;
        new->next = NULL;

        if(list->head == NULL){
            list->head = new;
            new->prev = NULL;
        }else{
            Node walker = list->head;

            while (walker->next != NULL){
                walker = walker->next;
            }

            new->prev = walker;
            walker->next = new;
        }
        return true;
    }
    return false;
}

Infotype delete_first(List list){
    Infotype answer;
    if (list != NULL){
        if (list->head != NULL){
            Node rip = list->head;
            answer = rip->info;
            list->head = rip->next;
            free(rip);
        }
    }
    return answer;
}

Infotype delete_last(List list){
    Infotype answer;
    if (list != NULL){
        if (list->head != NULL){
            Node rip = list->head;
            Node stalker = NULL;

            while (rip->next != NULL){
                stalker = rip;
                rip = rip->next;
            }

            answer = rip->info;
            free(rip);

            if (stalker == NULL){
                list->head = NULL;
            }else{
                stalker->next = NULL;
            }
        }
    }
    return answer;
}

bool insert_ascend(List list, Infotype info){
    if(list != NULL){
        Node node = malloc(sizeof(struct node));
        node->info = info;
        node->next = NULL;
        node->prev = NULL;
        if(list->head == NULL){
            list->head = node;
            return true;
        }else{
            Node walker = list->head;
            while (walker != NULL){
                if(get_priority_group(walker->info) > get_priority_group(info)){
                    if(walker->prev == NULL){
                        // inserir no inicio
                        node->next = walker;
                        walker->prev = node;
                        list->head = node;
                        return true;
                    }else{
                        // inserir no meio
                        node->next = walker;
                        node->prev = walker->prev;
                        walker->prev->next = node;
                        walker->prev = node;
                        return true;
                    }
                }
                walker = walker->next;
            }
            // inserir no final
            walker = list->head;
            while (walker->next != NULL){
                walker = walker->next;
            }
            node->prev = walker;
            walker->next = node;
            return true;
        }
    }
    return false;
}
