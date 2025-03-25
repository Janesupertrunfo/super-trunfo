1  #include <stdio.h>
2  
3  // Estrutura para armazenar as informações da carta
4  struct Carta {
5      char estado;
6      char codigo[5];
7      char nome_cidade[50];
8      int populacao;
9      float area;
10     float pib;
11     int pontos_turisticos;
12 };
13 
14 int main() {
15     struct Carta carta1, carta2;
16 
17     // Cadastro da primeira carta
18     printf("Cadastro da primeira carta:\n");
19     printf("Estado (letra de A a H): ");
20     scanf(" %c", &carta1.estado);
21     printf("Codigo da carta (Ex: A01): ");
22     scanf("%s", carta1.codigo);
23     printf("Nome da cidade: ");
24     scanf(" %[^\n]s", carta1.nome_cidade);
25     printf("Populacao: ");
26     scanf("%d", &carta1.populacao);
27     printf("Area em km²: ");
28     scanf("%f", &carta1.area);
29     printf("PIB: ");
30     scanf("%f", &carta1.pib);
31     printf("Numero de pontos turisticos: ");
32     scanf("%d", &carta1.pontos_turisticos);
33 
34     // Cadastro da segunda carta
35     printf("\nCadastro da segunda carta:\n");
36     printf("Estado (letra de A a H): ");
37     scanf(" %c", &carta2.estado);
38     printf("Codigo da carta (Ex: B03): ");
39     scanf("%s", carta2.codigo);
40     printf("Nome da cidade: ");
41     scanf(" %[^\n]s", carta2.nome_cidade);
42     printf("Populacao: ");
43     scanf("%d", &carta2.populacao);
44     printf("Area em km²: ");
45     scanf("%f", &carta2.area);
46     printf("PIB: ");
47     scanf("%f", &carta2.pib);
48     printf("Numero de pontos turisticos: ");
49     scanf("%d", &carta2.pontos_turisticos);
50 
51     // Exibição dos dados da primeira carta
52     printf("\n--- Informacoes da primeira carta ---\n");
53     printf("Estado: %c\n", carta1.estado);
54     printf("Codigo: %s\n", carta1.codigo);
55     printf("Cidade: %s\n", carta1.nome_cidade);
56     printf("Populacao: %d habitantes\n", carta1.populacao);
57     printf("Area: %.2f km²\n", carta1.area);
58     printf("PIB: %.2f\n", carta1.pib);
59     printf("Pontos turisticos: %d\n", carta1.pontos_turisticos);
60 
61     // Exibição dos dados da segunda carta
62     printf("\n--- Informacoes da segunda carta ---\n");
63     printf("Estado: %c\n", carta2.estado);
64     printf("Codigo: %s\n", carta2.codigo);
65     printf("Cidade: %s\n", carta2.nome_cidade);
66     printf("Populacao: %d habitantes\n", carta2.populacao);
67     printf("Area: %.2f km²\n", carta2.area);
68     printf("PIB: %.2f\n", carta2.pib);
69     printf("Pontos turisticos: %d\n", carta2.pontos_turisticos);
70 
71     return 0;
72 }
