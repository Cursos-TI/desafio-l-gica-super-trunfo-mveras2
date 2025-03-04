#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);


    //Declaração das variáveis
    
    char estado, estado2;
    char cod[4], cod2[4];     // No caso do código ter 3 caracteres o string tem que ser no mínimo [4]. Ao usar 3 estava retornando a o cod+nome_cidade
    char nome_cidade[20], nome_cidade2[20];
    int populacao = 0, pto_tur = 0, populacao2 = 0, pto_tur2 = 0;      
    float area = 0, PIB =0, area2 = 0, PIB2 =0;      
    float den_pop = 0, pib_cap = 0,  den_pop2 = 0, pib_cap2 = 0;           //novas variáveis para o nível Aventureiro       
    int atributo = 0;


    //Cabeçalho do terminal
    printf("_______________________________________________________________________________________\n");
    printf("//                    Desafio Super Trunfo - Tema 2 - Novato                           //\n");
    printf("//    Essa rotina coleta-rá os valores correspondentes de cada uma das cartas          /\n");
    printf("//  e fará a comparação entre os atributos selecionados, retornando a Carta ganhadora  //\n");
    printf("_______________________________________________________________________________________\n");

    /* Para facilitar a utilização da rotina pelo operador, antes de cada variável será apresentada
    uma instrução do que se espera coletar*/
    
    //Identificação da Carta 1
    printf("____________________________________________________________________________________________\n");
    printf("//                              Inserir Dados da Carta 1                                   //\n");
    printf("____________________________________________________________________________________________\n");
    printf("Para a identificação do País utilize uma letra de A-H: \n");
    scanf("%c", &estado);
    printf("O código da carta é composto por uma letra maiúscula variando de A à H e um número variando entre 1 e 4.\n");
    printf("Agora defina abaixo o código da Carta. Para isso, deve-se utilizar o seguinte formato [A01]:\n");
    scanf(" %[^\n]", cod);
    printf("Insira o nome da cidade:\n");
    scanf(" %[^\n]", nome_cidade);
    printf("Inserir o tamanho da população [Habitantes]:\n");
    scanf("%d", &populacao);
    printf("Inserir o tamanho da área da cidade [km²]:\n");
    scanf("%f", &area);
    printf("Inserir o PIB da cidade [Bilhões de R$]:\n");
    scanf("%f", &PIB);
    printf("Inserir o número de pontos turísticos da cidade:\n");
    scanf("%d", &pto_tur);
/*
    // inserção direta de valores das variáveis para teste das lógicas
    // Carta1
    estado = 'A';
    nome_estado[20] ='Sao_Paulo';
    cidade = 1;                   
    nome_cidade[20] = 'Sao_Jose';                    
    populacao = 2000,
    area = 1200;
    PIB = 2220;
    pto_tur = 11;      
*/
    printf("____________________________________________________________________________________________\n");
    printf("//                              Inserir Dados da Carta 2                                   //\n");
    printf("____________________________________________________________________________________________\n");
    
    printf("Para a identificação do País utilize uma letra de A-H: \n");
    scanf(" %c", &estado2);          // para evitar que esse comando pule foi inserido um espaço antes do especificador de formato para qq caracere em branco, tabulação e novas linhas sejam ignorados.
    printf("O código da carta é composto por uma letra maiúscula variando de A à H e um número variando entre 1 e 4.\n");
    printf("Agora defina abaixo o código da Carta. Para isso, deve-se utilizar o seguinte formato [A01]:\n");
    scanf(" %[^\n]", cod2);
    printf("Insira o nome da cidade:\n");
    scanf(" %[^\n]", nome_cidade2);
    printf("Inserir o tamanho da população [Habitantes]:\n");
    scanf("%d", &populacao2);
    printf("Inserir o tamanho da área da cidade [km²]:\n");
    scanf("%f", &area2);
    printf("Inserir o PIB da cidade [Bilhões de R$]:\n");
    scanf("%f", &PIB2);
    printf("Inserir o número de pontos turísticos da cidade:\n");
    scanf("%d", &pto_tur2);
    
    /*
    // inserção direta de valores das variáveis para teste das lógicas
    // Carta2
    estado2 = 'B';
    nome_estado2[20] = 'Rio de Janeiro'; 
    cidade2 = 2;                   
    nome_cidade2[20] = 'Rio de Jan';                    
    populacao2 = 2000,
    area2 = 2200;
    PIB2 = 2220;
    pto_tur2 = 11;
    */
    
    
    //Rotina de cálculo da densidade populacional e o PIB per capta

    den_pop = (float) populacao / area;
    pib_cap = (float) PIB*1000000000 / populacao;

    den_pop2 = (float) populacao2 / area2;
    pib_cap2 = (float) PIB2*1000000000 / populacao2;
    
    //Cálculo do Super Poder

    //Novas variáveis para o nível Mestre
    float sup_pder = 0, sup_pder2 = 0;

    sup_pder = (float) populacao/10000 + area + PIB + pto_tur + (1/den_pop) + pib_cap;
    sup_pder2 = (float) populacao2/10000 + area2 + PIB2 + pto_tur2 + (1/den_pop2) + pib_cap2;

    //Definição do atributo para comparação

    printf("\n//________________________________________________________________________________________//");
    printf("\n// Escolha o valor equivalente para o atributo da Carta a ser utilizado na comparação:    //");
    printf("\n// 1 - População                                                                          //");
    printf("\n// 2 - Área                                                                               //");
    printf("\n// 3 - PIP                                                                                //");
    printf("\n// 4 - Pontos Turísticos                                                                  //");
    printf("\n// 5 - Desnsidade Populacional                                                            //");
    printf("\n// 6 - PIB per Capta                                                                      //");
    printf("\n// 7 - SUPER PODER                                                                        //");
    printf("\n//________________________________________________________________________________________//\n");

    scanf("%d", &atributo);
    printf("\n//_______________________________________________________________________________________________________//\n");


    //Rotina de comparação e escolha da Carta ganhadora 
   
    if (atributo == 1) 
    {
        if (populacao > populacao2)
        {
            printf("\n//_______________________________________________________________________________________________________//\n");
            printf("A Carta 1 é a ganhadora - pop");
            printf("\n//_______________________________________________________________________________________________________//\n");    
        } else { if (populacao == populacao2) {
            printf("As Cartas possuem o mesmo valor, deu empate\n");
            printf("\n//_______________________________________________________________________________________________________//\n");
            } else {
            printf("\n//_______________________________________________________________________________________________________//\n");
            printf("A Carta 2 é a ganhadora - pop2");  
            printf("\n//_______________________________________________________________________________________________________//\n");
            }
        }
    } else { 
            if (atributo == 2)
            {
                if (area > area2)
                {
                    printf("\n//_______________________________________________________________________________________________________//\n");
                    printf("A Carta1 é a ganhadora - area");
                    printf("\n//_______________________________________________________________________________________________________//\n");
                } else {if (area == area2) {
                    printf("As Cartas possuem o mesmo valor, deu empate\n");
                    printf("\n//_______________________________________________________________________________________________________//\n");
                    } else {
                    printf("\n//_______________________________________________________________________________________________________//\n"); 
                    printf("A Carta 2 é a ganhadora - area2");
                    printf("\n//_______________________________________________________________________________________________________//\n");
                    }
                } 
            } else {
                    if (atributo == 3)
                        {
                        if (PIB > PIB2)
                        {
                            printf("\n//_______________________________________________________________________________________________________//\n");
                            printf("A Carta1 é a ganhadora - PIP");
                            printf("\n//_______________________________________________________________________________________________________//\n");
                        } else {if (PIB == PIB2) {
                            printf("As Cartas possuem o mesmo valor, deu empate\n");
                            printf("\n//_______________________________________________________________________________________________________//\n");
                            } else {
                            printf("\n//_______________________________________________________________________________________________________//\n"); 
                            printf("A Carta 2 é a ganhadora - PIB2");
                            printf("\n//_______________________________________________________________________________________________________//\n");
                            }   
                        }
                    } else {
                            if (atributo == 4)
                            {
                                if (pto_tur > pto_tur2)
                                {
                                    printf("\n//_______________________________________________________________________________________________________//\n");
                                    printf("A Carta1 é a ganhadora - ponto tur");
                                    printf("\n//_______________________________________________________________________________________________________//\n");
                                } else {if (pto_tur == pto_tur2) {
                                    printf("As Cartas possuem o mesmo valor, deu empate\n");
                                    printf("\n//_______________________________________________________________________________________________________//\n");
                                    } else {
                                    printf("\n//_______________________________________________________________________________________________________//\n"); 
                                    printf("A Carta 2 é a ganhadora - ponto tur2");
                                    printf("\n//_______________________________________________________________________________________________________//\n");
                                    }
                                }
                            } else {
                                if (atributo == 5)
                                {
                                    if (den_pop > den_pop2)
                                    {
                                        printf("\n//_______________________________________________________________________________________________________//\n");
                                        printf("A Carta2 é a ganhadora - den_pop2");
                                        printf("\n//_______________________________________________________________________________________________________//\n");
                                    } else {if (den_pop== den_pop2) {
                                        printf("As Cartas possuem o mesmo valor, deu empate\n");
                                        printf("\n//_______________________________________________________________________________________________________//\n");
                                        } else {
                                        printf("\n//_______________________________________________________________________________________________________//\n"); 
                                        printf("A Carta 1 é a ganhadora - den_pop");
                                        printf("\n//_______________________________________________________________________________________________________//\n");
                                        }
                                    }
                                } else {
                                        if (atributo == 6)
                                        {
                                            if (pib_cap > pib_cap2)
                                            {
                                                printf("\n//_______________________________________________________________________________________________________//\n");
                                                printf("A Carta 1 é a ganhadora - pib_cap");
                                                printf("\n//_______________________________________________________________________________________________________//\n");
                                            } else {if (pib_cap== pib_cap2) {
                                                printf("As Cartas possuem o mesmo valor, deu empate\n");
                                                printf("\n//_______________________________________________________________________________________________________//\n");
                                                } else {
                                                printf("\n//_______________________________________________________________________________________________________//\n"); 
                                                printf("A Carta 2 é a ganhadora - pib_cap2");
                                                printf("\n//_______________________________________________________________________________________________________//\n");
                                                }
                                            }                         
                                        } else {
                                                if (atributo == 7)
                                                {
                                                    if (sup_pder > sup_pder2)
                                                    {
                                                        printf("\n//_______________________________________________________________________________________________________//\n");
                                                        printf("A Carta 1 é a ganhadora - sup");
                                                        printf("\n//_______________________________________________________________________________________________________//\n");
                                                    } else {if (sup_pder == sup_pder2) {
                                                        printf("As Cartas possuem o mesmo valor, deu empate\n");
                                                        printf("\n//_______________________________________________________________________________________________________//\n");
                                                        } else {
                                                        printf("\n//_______________________________________________________________________________________________________//\n"); 
                                                        printf("A Carta 2 é a ganhadora - sup2");
                                                        printf("\n//_______________________________________________________________________________________________________//\n");
                                                    }
                                                    }                         
                                                } else {
                                                        printf("Esse atributo não existe.");
                                            }
                                        }                      
                                }
                            }
                    }
            }
    }
 
        
    
 


    return 0;
}



