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
O projeto representa um sistema de gerenciamento de vacinação com um menu interativo. Os pacientes são cadastrados com base em informações como número SUS, idade e respostas a um questionário que determina seu grupo de prioridade. A estrutura principal utiliza uma lista duplamente encadeada para gerenciar a fila de espera e uma pilha para armazenar os pacientes vacinados. A vacinação ocorre retirando o próximo paciente da fila, associando um lote aleatório e movendo-o para a pilha de vacinados.

## Estratégia de Desenvolvimento
A estratégia de desenvolvimento consiste em primeiro compreender completamente os requisitos do projeto. Em seguida, planejar e implementar a estrutura de dados, incluindo a lista duplamente encadeada para a fila de espera e a pilha para os pacientes vacinados. Desenvolver as funções relacionadas aos pacientes, como inicialização e obtenção de informações específicas. Implementar o questionário para determinar o grupo de prioridade do paciente. Implementar o menu interativo que permite cadastrar pacientes, vacinar o próximo da fila, ver os pacientes vacinados ou encerrar o programa. Realizar testes unitários para garantir o funcionamento adequado de cada componente e, finalmente, integrar o sistema, realizando testes abrangentes para garantir a comunicação eficaz entre as funcionalidades.

## Interação entre Membros
Durante o desenvolvimento do projeto, utilizamos o Trello como principal ferramenta de colaboração. O backlog, contendo funcionalidades e tarefas, foi convertido em cartões no Trello. Atualizações regulares de status foram feitas, facilitando revisões periódicas para avaliar o progresso. A ferramenta serviu como um meio central para comunicação, resolução de problemas e ajustes nas prioridades.

## Divisão de Tarefas
A equipe utilizou a ferramenta Trello para organizar e atribuir as diferentes atividades do projeto. A colaboração foi facilitada por chamadas periódicas, onde a extensão de visualização compartilhada do código, "Live Share", foi utilizada. Durante essas chamadas, nós revisamos e implementamos o código juntos em tempo real, compartilhando telas e discutindo implementações específicas.

## Compilar e Executar o Sistema
1. Clone o repositório: `git clone https://github.com/natansalvadorligabo/esdd_avaliativo_6.git`
2. Execute o script de compilação: `gcc *.c`

## Screenshots e Video
Menu:

![image](https://github.com/natansalvadorligabo/esdd_avaliativo_6/assets/64981353/c270ba3e-08b6-49cf-b1c4-c0f1c8dd8276)

Operações no menu:

https://github.com/natansalvadorligabo/esdd_avaliativo_6/assets/64981353/f1434f8a-3616-41a8-a26d-f1f3d190fa87

## Tipos Abstratos de Dados (TAD)
1. **TAD Paciente**
- Operações: init_patient, get_priority_group, get_SUS_number, get_batch_vaccine, get_patient_age, set_batch_vaccine
```c
struct patient{
    int SUS_number;
    int age;
    int priority_group;
    int batch_vaccine;
};
```

2. **TAD Fila (LDE)**
- Operações: init_list, is_empty_list, insert_ascend, delete_first
```c

```

3. **TAD Pilha (LDE)**
- Operações:
```c

```

## Licença
Este projeto é licenciado sob a [Apache License 2.0](LICENSE). Leia o arquivo LICENSE para mais detalhes.

---

**Nota:** Este é um READ.md modelo e os comandos, estratégias e imagens são meramente ilustrativos.
