#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas - Modo Aventureiro
// Siga os comentários para implementar cada parte do desafio.

int main(){
/*
Requisitos funcionais
Menu Interativo: 
Criar um menu interativo no terminal usando a estrutura switch que permita ao jogador escolher 
qual atributo será usado para comparar as cartas. O menu deve ser claro e fácil de usar.
 
Comparação de Atributos: 
Implementar a lógica de comparação entre duas cartas com base no atributo selecionado pelo jogador. 
Os atributos disponíveis são:
 
_ Nome do país (string - usado apenas para exibir informações, não para comparação direta)
_ População (int)
_ Área (float)
_ PIB (float)
_ Número de pontos turísticos (int)
_ Densidade demográfica (float - já calculada no desafio anterior).

Regras de Comparação: 
A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade 
Demográfica, a regra inverte: vence a carta com o menor valor.

Exibição do Resultado: 
Mostrar na tela, de forma clara, o resultado da comparação, incluindo: 

1. O nome dos dois países.
2. O atributo usado na comparação.
3. Os valores do atributo para cada carta.
4. Qual carta venceu.
5. Em caso de empate, exibir a mensagem "Empate!".

*/

    //Declaração das variáveis
    
    char estado, estado2;
    char cod[4], cod2[4];     // No caso do código ter 3 caracteres o string tem que ser no mínimo [4]. Ao usar 3 estava retornando a o cod+nome_cidade
    char nome_cidade[50], nome_cidade2[50];
    int populacao = 0, pto_tur = 0, populacao2 = 0, pto_tur2 = 0;      
    float area = 0, PIB =0, area2 = 0, PIB2 =0;      
    float den_pop = 0, pib_cap = 0,  den_pop2 = 0, pib_cap2 = 0;            //novas variáveis para o nível Aventureiro       
    int atributo = 0;


    //Cabeçalho do terminal
    printf("_______________________________________________________________________________________\n");
    printf("//                    Desafio Super Trunfo - Tema 2 - Aventureiro                      //\n");
    printf("//    Essa rotina realiza comparação das cartas, utilizando menus iterativoss          //\n");
    printf("//  e compara os atributos selecionados, retornando a Carta ganhadora                  //\n");
    printf("_______________________________________________________________________________________\n");

    /* Para facilitar a utilização da rotina pelo operador, antes de cada variável será apresentada
    uma instrução do que se espera coletar*/
    
    //Identificação da Carta 1
    /*
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
*/
    // inserção direta de valores das variáveis para teste das lógicas
    // Carta1
    estado = 'A';
    cod[4] = "A01";
    nome_cidade[50] = "Sao Paulo";                               
    populacao =1232500;
    area = 1521.11;
    PIB = 699.28;
    pto_tur = 50;      
/*
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
    
    */
    // inserção direta de valores das variáveis para teste das lógicas
    // Carta2
    estado2 = 'B';
    cod[4] = "B02";
    nome_cidade[50] = "Rio de Janeiro";                           
    populacao2 = 6748000;
    area2 = 1200.25;
    PIB2 = 300.50;
    pto_tur2 = 30;

    
    
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

    //escolha do atreibuto para validação

    switch (atributo)
    {
    case 1:
        {
            if (populacao > populacao2)
            {
                printf("\n//_______________________________________________________________________________________________________//\n");
                printf("A Carta 1 é a ganhadora - pop");
                printf("\n//_______________________________________________________________________________________________________//\n");    
            } else if (populacao == populacao2) {
                printf("As Cartas possuem o mesmo valor, deu empate\n");
                printf("\n//_______________________________________________________________________________________________________//\n");
                } else {
                printf("\n//_______________________________________________________________________________________________________//\n");
                printf("A Carta 2 é a ganhadora - pop2");  
                printf("\n//_______________________________________________________________________________________________________//\n");
                }
        }
        break;
        case 2:
        {
            if (area > area2)
                {
                    printf("\n//_______________________________________________________________________________________________________//\n");
                    printf("A Carta1 é a ganhadora - area");
                    printf("\n//_______________________________________________________________________________________________________//\n");
                } else if (area == area2) {
                    printf("As Cartas possuem o mesmo valor, deu empate\n");
                    printf("\n//_______________________________________________________________________________________________________//\n");
                    } else {
                    printf("\n//_______________________________________________________________________________________________________//\n"); 
                    printf("A Carta 2 é a ganhadora - area2");
                    printf("\n//_______________________________________________________________________________________________________//\n");
                    } 
        }
        break;
        case 3:
        {
            if (PIB > PIB2)
            {
                printf("\n//_______________________________________________________________________________________________________//\n");
                printf("A Carta1 é a ganhadora - PIP");
                printf("\n//_______________________________________________________________________________________________________//\n");
            } else if (PIB == PIB2) {
                printf("As Cartas possuem o mesmo valor, deu empate\n");
                printf("\n//_______________________________________________________________________________________________________//\n");
                } else {
                printf("\n//_______________________________________________________________________________________________________//\n"); 
                printf("A Carta 2 é a ganhadora - PIB2");
                printf("\n//_______________________________________________________________________________________________________//\n");
                } 
        }
        break;
        case 4:
        {
            if (pto_tur > pto_tur2)
            {
                printf("\n//_______________________________________________________________________________________________________//\n");
                printf("A Carta1 é a ganhadora - ponto tur");
                printf("\n//_______________________________________________________________________________________________________//\n");
            } else if (pto_tur == pto_tur2) {
                printf("As Cartas possuem o mesmo valor, deu empate\n");
                printf("\n//_______________________________________________________________________________________________________//\n");
                } else {
                printf("\n//_______________________________________________________________________________________________________//\n"); 
                printf("A Carta 2 é a ganhadora - ponto tur2");
                printf("\n//_______________________________________________________________________________________________________//\n");
                }  
        }
        break;
        case 5:
        {
            if (den_pop > den_pop2)
            {
                printf("\n//_______________________________________________________________________________________________________//\n");
                printf("A Carta2 é a ganhadora - den_pop2");
                printf("\n//_______________________________________________________________________________________________________//\n");
            } else if (den_pop== den_pop2) {
                printf("As Cartas possuem o mesmo valor, deu empate\n");
                printf("\n//_______________________________________________________________________________________________________//\n");
                } else {
                printf("\n//_______________________________________________________________________________________________________//\n"); 
                printf("A Carta 1 é a ganhadora - den_pop");
                printf("\n//_______________________________________________________________________________________________________//\n");
                }
        }
        break;
        case 6:
        {
            if (pib_cap > pib_cap2)
            {
                printf("\n//_______________________________________________________________________________________________________//\n");
                printf("A Carta 1 é a ganhadora - pib_cap");
                printf("\n//_______________________________________________________________________________________________________//\n");
            } else if (pib_cap== pib_cap2) {
                printf("As Cartas possuem o mesmo valor, deu empate\n");
                printf("\n//_______________________________________________________________________________________________________//\n");
                } else {
                printf("\n//_______________________________________________________________________________________________________//\n"); 
                printf("A Carta 2 é a ganhadora - pib_cap2");
                printf("\n//_______________________________________________________________________________________________________//\n");
                }
        }
        break;
        case 7:
        {
            if (sup_pder > sup_pder2)
            {
                printf("\n//_______________________________________________________________________________________________________//\n");
                printf("A Carta 1 é a ganhadora - sup");
                printf("\n//_______________________________________________________________________________________________________//\n");
            } else if (sup_pder == sup_pder2) {
                printf("As Cartas possuem o mesmo valor, deu empate\n");
                printf("\n//_______________________________________________________________________________________________________//\n");
                } else {
                printf("\n//_______________________________________________________________________________________________________//\n"); 
                printf("A Carta 2 é a ganhadora - sup2");
                printf("\n//_______________________________________________________________________________________________________//\n");
            }
        }
        break;
    default:
    {
        printf("\n//_______________________________________________________________________________________________________//\n"); 
        printf("Você escolheu um valor errado.");
        printf("\n//_______________________________________________________________________________________________________//\n");
    }
    break;
    }
return 0;
}


