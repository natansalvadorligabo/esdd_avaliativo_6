# Exercício Avaliativo 6

## Estudantes
- [Giovana Trevizan Barbosa](https://www.linkedin.com/in/giovanatrevizanbarbosa/)
- [Natan Salvador Ligabô](https://www.linkedin.com/in/natansalvadorligabo/)

## Curso
[Tecnologia em Sistemas para Internet](https://www.arq.ifsp.edu.br/superiores/tecnologia-em-sistemas-para-internet)

## Disciplina
Estrutura de Dados

## Professor
[Ednilson Geraldo Rossi](https://www.linkedin.com/in/ednilsonrossi/)

## Descrição do Projeto


## Estratégia de Desenvolvimento


## Interação entre Membros


## Divisão de Tarefas


## Compilar e Executar o Sistema
1. Clone o repositório: `git clone https://github.com/natansalvadorligabo/esdd_avaliativo_6.git`
2. Execute o script de compilação: `gcc *.c`

## Screenshots
![Menu](screenshots/login.png)

*Figura 1: Menu*

![Operações do client_code.c](screenshots/dashboard.png)

*Figura 2: Operações do Menu*

## Tipos Abstratos de Dados (TAD)
1. **TAD Paciente**
- Operações: ''
```c

```

2. **TAD Fila**
- Operações: init, is_full, is_empty, enqueue, dequeue.
```c
struct node{
    Element info;
    Node next;
};

struct queue{
    Node inicio; //HEAD
    Node fim;    //TAIL
};
```

3. **TAD Pilha**
- Operações: init, is_full, is_empty, push, pop.
```c
struct node{
    Tipo_Informacao info;
    Node next;
};

struct stack{
    Node topo;
};
```

## Licença
Este projeto é licenciado sob a [Apache License 2.0](LICENSE). Leia o arquivo LICENSE para mais detalhes.

---

**Nota:** Este é um READ.md modelo e os comandos, estratégias e imagens são meramente ilustrativos.