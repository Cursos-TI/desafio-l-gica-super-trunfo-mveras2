#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas - Modo Mestre
// Siga os comentários para implementar cada parte do desafio.

int main(){
/*
Requisitos funcionais
Menu Interativo: 
1.Escolha de Dois Atributos: O sistema deve permitir que o jogador escolha dois atributos 
numéricos diferentes para a comparação das cartas, através de menus interativos. Implemente a 
lógica necessária para garantir que o jogador não possa selecionar o mesmo atributo duas vezes.
 
2.Comparação com Múltiplos Atributos: Implemente a lógica para comparar as duas cartas com base 
nos dois atributos escolhidos. Para cada atributo, a regra geral é: vence a carta com o maior valor. A exceção continua sendo a Densidade Demográfica, onde vence a carta com o menor valor.
 
3.Soma dos Atributos: Após comparar os dois atributos individualmente, o sistema deve somar os 
valores dos atributos para cada carta. A carta com a maior soma vence a rodada.
 
4.Tratamento de Empates: Implemente a lógica para tratar empates. Se a soma dos atributos das 
duas cartas for igual, exiba a mensagem "Empate!".
 
5.Menus Dinâmicos: Crie menus interativos e dinâmicos usando switch. "Dinâmicos" significa que, 
por exemplo, após o jogador escolher o primeiro atributo, esse atributo não deve mais aparecer 
como opção para a escolha do segundo atributo.
 
6.Exibição Clara do Resultado: Mostre o resultado da comparação de forma clara e organizada, 
incluindo:
 
a.O nome dos dois países.
 
b.Os dois atributos usados na comparação.
 
c.Os valores de cada atributo para cada carta.
 
d.A soma dos atributos para cada carta.
 
e.Qual carta venceu (ou se houve empate).


Requisitos não funcionais:


_ Usabilidade: A interface do usuário deve ser intuitiva e fácil de navegar, com mensagens 
claras e instruções para cada etapa.
 
_Performance: O sistema deve executar as comparações e exibir os resultados rapidamente.
 
_Manutenibilidade: Escreva um código bem estruturado, organizado, com indentação consistente e 
comentários explicativos. Use nomes de variáveis descritivos.
 
_Confiabilidade: O sistema deve ser robusto e lidar com entradas inválidas do usuário de forma 
adequada, exibindo mensagens de erro apropriadas e evitando travamentos. Utilize o default no 
switch para tratar opções inválidas.

Simplificações para o nível avançado:

_Você pode continuar usando as cartas pré-cadastradas dos desafios anteriores. Não precisa 
reimplementar o cadastro.
 
_Foque na integração de todos os elementos: menus dinâmicos com switch, comparações com 
if-else (e aninhamentos), operador ternário, cálculo da soma dos atributos e tratamento de empates.
 
_A comparação é feita entre apenas duas cartas.
*/

    //Declaração das variáveis
    
    char estado, estado2;
    char cod[4], cod2[4];     // No caso do código ter 3 caracteres o string tem que ser no mínimo [4]. Ao usar 3 estava retornando a o cod+nome_cidade
    char nome_cidade[50], nome_cidade2[50];
    int populacao = 0, pto_tur = 0, populacao2 = 0, pto_tur2 = 0;      
    float area = 0, PIB =0, area2 = 0, PIB2 =0;      
    float den_pop = 0, pib_cap = 0,  den_pop2 = 0, pib_cap2 = 0;            //novas variáveis para o nível Aventureiro       
    int atributo1 = 0, atributo2 = 0;


    //Cabeçalho do terminal
    printf("_______________________________________________________________________________________\n");
    printf("//                    Desafio Super Trunfo - Tema 2 - Mestre                           //\n");
    printf("//    Essa rotina realiza comparação das cartas, utilizando menus dinâmicos            //\n");
    printf("// e lógica de decisão complexa com operadores ternários, retornando a Carta ganhadora.//\n");
    printf("_______________________________________________________________________________________\n");
    
    // Para simplificar o programa serão utilizados os valors das cartas pré-cadastrasdas.
    
    //Cadastro das Cartas:
    // Carta1
    estado = 'A';
    cod[4] = "A01";
    nome_cidade[50] = "Sao Paulo";                               
    populacao =1232500;
    area = 1521.11;
    PIB = 699.28;
    pto_tur = 50;      

    // Carta2
    estado2 = 'B';
    cod[4] = "B02";
    nome_cidade[50] = "Rio de Janeiro";                           
    populacao2 = 674800;
    area2 = 1200.25;
    PIB2 = 300.50;
    pto_tur2 = 30;
 
    //Rotina de cálculo da densidade populacional e o PIB per capta

    den_pop = (float) populacao / area;
    pib_cap = (float) PIB*1000000000 / populacao;

    den_pop2 = (float) populacao2 / area2;
    pib_cap2 = (float) PIB2*1000000000 / populacao2;
    
    //Cálculo do Super Poder
    
    float sup_pder = 0, sup_pder2 = 0;

    sup_pder = (float) populacao/10000 + area + PIB + pto_tur + (1/den_pop) + pib_cap;
    sup_pder2 = (float) populacao2/10000 + area2 + PIB2 + pto_tur2 + (1/den_pop2) + pib_cap2;

    //Escolha dos atributos para comparação

    printf("\n//____________________________________________________________________________//");
    printf("\n// Escolha dois valores de comparação entre as Cartas:                        //");
    printf("\n// 1 - População                                                              //");
    printf("\n// 2 - Área                                                                   //");
    printf("\n// 3 - PIP                                                                    //");
    printf("\n// 4 - Pontos Turísticos                                                      //");
    printf("\n// 5 - Desnsidade Populacional                                                //");
    printf("\n// 6 - PIB per Capta                                                          //");
    printf("\n// 7 - SUPER PODER                                                            //");
    printf("\n//____________________________________________________________________________//\n");

    printf("Digite o primeiro atributo:\n");
    scanf("%d", &atributo1);
    
    //Eliminação do atributo escolhido anteriormente

    switch (atributo1)
    {
    case 1:
        {
            printf("\n//____________________________________________________________________________//");
            printf("\n// Digite o segundo atributo:                                                 //");
            printf("\n// 2 - Área                                                                   //");
            printf("\n// 3 - PIP                                                                    //");
            printf("\n// 4 - Pontos Turísticos                                                      //");
            printf("\n// 5 - Desnsidade Populacional                                                //");
            printf("\n// 6 - PIB per Capta                                                          //");
            printf("\n// 7 - SUPER PODER                                                            //");
            printf("\n//____________________________________________________________________________//\n");
            scanf("%d", &atributo2);
            if (atributo2 == 1){
                atributo2 = 99;
            }
        }
        break;
        case 2:
        {
            printf("\n//____________________________________________________________________________//");
            printf("\n// Digite o segundo atributo:                                                 //");
            printf("\n// 1 - População                                                              //");
            printf("\n// 3 - PIP                                                                    //");
            printf("\n// 4 - Pontos Turísticos                                                      //");
            printf("\n// 5 - Desnsidade Populacional                                                //");
            printf("\n// 6 - PIB per Capta                                                          //");
            printf("\n// 7 - SUPER PODER                                                            //");
            printf("\n//____________________________________________________________________________//\n");
            scanf("%d", &atributo2);
        }
        break;
        case 3:
        {
            printf("\n//____________________________________________________________________________//");
            printf("\n// Digite o segundo atributo:                                                 //");
            printf("\n// 1 - População                                                              //");
            printf("\n// 2 - Área                                                                   //");
            printf("\n// 4 - Pontos Turísticos                                                      //");
            printf("\n// 5 - Desnsidade Populacional                                                //");
            printf("\n// 6 - PIB per Capta                                                          //");
            printf("\n// 7 - SUPER PODER                                                            //");
            printf("\n//____________________________________________________________________________//\n");
            scanf("%d", &atributo2);
        }
        break;
        case 4:
        {
            printf("\n//____________________________________________________________________________//");
            printf("\n// Digite o segundo atributo:                                                 //");
            printf("\n// 1 - População                                                              //");
            printf("\n// 2 - Área                                                                   //");
            printf("\n// 3 - PIP                                                                    //");
            printf("\n// 5 - Desnsidade Populacional                                                //");
            printf("\n// 6 - PIB per Capta                                                          //");
            printf("\n// 7 - SUPER PODER                                                            //");
            printf("\n//____________________________________________________________________________//\n");
            scanf("%d", &atributo2);
        }
        break;
        case 5:
        {
            printf("\n//____________________________________________________________________________//");
            printf("\n// Digite o segundo atributo:                                                 //");
            printf("\n// 1 - População                                                              //");
            printf("\n// 2 - Área                                                                   //");
            printf("\n// 3 - PIP                                                                    //");
            printf("\n// 4 - Pontos Turísticos                                                      //");
            printf("\n// 6 - PIB per Capta                                                          //");
            printf("\n// 7 - SUPER PODER                                                            //");
            printf("\n//____________________________________________________________________________//\n");
            scanf("%d", &atributo2);
        }
        break;
        case 6:{
            printf("\n//____________________________________________________________________________//");
            printf("\n// Digite o segundo atributo:                                                 //");
            printf("\n// 1 - População                                                              //");
            printf("\n// 2 - Área                                                                   //");
            printf("\n// 3 - PIP                                                                    //");
            printf("\n// 4 - Pontos Turísticos                                                      //");
            printf("\n// 5 - Desnsidade Populacional                                                //");
            printf("\n// 7 - SUPER PODER                                                            //");
            printf("\n//____________________________________________________________________________//\n");
            scanf("%d", &atributo2);
        } break;
        case 7:
        {
            printf("\n//____________________________________________________________________________//");
            printf("\n// Digite o segundo atributo:                                                 //");
            printf("\n// 1 - População                                                              //");
            printf("\n// 2 - Área                                                                   //");
            printf("\n// 3 - PIP                                                                    //");
            printf("\n// 4 - Pontos Turísticos                                                      //");
            printf("\n// 5 - Desnsidade Populacional                                                //");
            printf("\n// 6 - PIB per Capta                                                          //");
            printf("\n//____________________________________________________________________________//\n");
            scanf("%d", &atributo2);
        }
        break;
        default:
        {
            //printf("\n//_______________________________________________________________________________________________________//\n"); 
            //printf("Você escolheu um valor duplicado. O programa será encerrado.");
            //printf("\n//_______________________________________________________________________________________________________//\n");
            atributo2 = 99;
        }
        break;
    }
    
    //Comparação do primeiro atributo
    
    switch (atributo1)
    {
    case 1:
        {
            if (populacao > populacao2)
                atributo1 = 1;
            else if (populacao == populacao2)
                atributo1 = 0;
            else 
                atributo1 = 2;
        }
        break;
        case 2:
        {
            if (area > area2)
                atributo1 = 1;
                else if (area == area2) 
                atributo1 = 0;
            else 
            atributo1 = 2; 
        }
        break;
        case 3:
        {
            if (PIB > PIB2)
            atributo1 = 1;
                else if (PIB == PIB2) 
                atributo1 = 0;
            else 
            atributo1 = 2; 
        }
        break;
        case 4:
        {
            if (pto_tur > pto_tur2)
                atributo1 = 1; 
                else if (pto_tur == pto_tur2) 
                atributo1 = 0;
            else 
            atributo1 = 2;  
        }
        break;
        case 5:
        {
            if (den_pop > den_pop2)
                atributo1 = 2; 
                else if (den_pop== den_pop2) 
                atributo1 = 0;
            else 
            atributo1 = 1;
        }
        break;
        case 6:
        {
            if (pib_cap > pib_cap2)
                atributo1 = 2;
                else if (pib_cap== pib_cap2) 
                atributo1 = 0;
            else 
            atributo1 = 1;
        }
        break;
        case 7:
        {
            if (sup_pder > sup_pder2)
                atributo1 = 1;
                else if (sup_pder == sup_pder2) 
                atributo1 = 0;
            else 
            atributo1 = 2;
        }
        break;
    default:
    {
       /* printf("\n//_______________________________________________________________________________________________________//\n"); 
        printf("Você escolheu um valor errado para o atributo 1. O programa será encerrado.");
        printf("\n//_______________________________________________________________________________________________________//\n");
        */
        atributo1 = 99;
    }
    break;
    }

    //Comparação do segundo atributo
    switch (atributo2)
    {
    case 1:
        {
            if (populacao > populacao2)
                atributo2 = 1;
            else if (populacao == populacao2)
                atributo2 = 0;
            else 
                atributo2 = 2;
        }
        break;
        case 2:
        {
            if (area > area2)
                atributo2 = 1;
                else if (area == area2) 
                atributo2 = 0;
            else 
            atributo2 = 2; 
        }
        break;
        case 3:
        {
            if (PIB > PIB2)
            atributo2 = 1;
                else if (PIB == PIB2) 
                atributo2 = 0;
            else 
            atributo2 = 2; 
        }
        break;
        case 4:
        {
            if (pto_tur > pto_tur2)
                atributo2 = 1; 
                else if (pto_tur == pto_tur2) 
                atributo2 = 0;
            else 
            atributo2 = 2;  
        }
        break;
        case 5:
        {
            if (den_pop > den_pop2)
                atributo2 = 2; 
                else if (den_pop== den_pop2) 
                atributo2 = 0;
            else 
            atributo2 = 1;
        }
        break;
        case 6:
        {
            if (pib_cap > pib_cap2)
                atributo2 = 1;
                else if (pib_cap== pib_cap2) 
                atributo2 = 0;
            else 
            atributo2 = 2;
        }
        break;
        case 7:
        {
            if (sup_pder > sup_pder2)
                atributo2 = 1;
                else if (sup_pder == sup_pder2) 
                atributo2 = 0;
            else 
            atributo2 = 2;
        }
        break;
    default:
    {
    /*printf("\n//_______________________________________________________________________________________________________//\n"); 
    printf("Você escolheu um valor errado para o atributo 2. O programa será encerrado.\n");
    printf("\n//_______________________________________________________________________________________________________//\n");
    */atributo2 = 99;
    }
    break;
    }

// soma dos atributos, tratamento do empate

if ((atributo1 == 0 && atributo2 == 0) || (atributo1 == 1 && atributo2 == 2) || (atributo1 == 2 && atributo2 == 1)){
    printf("Deu Empate!\n");
    } else if (atributo1 == 1 && atributo2 == 1) {
        printf("A Carta 1 é a vencedora\n");
        } else if (atributo1 == 2 && atributo2 == 2) {
        printf("A Carta 2 é a vencedora\n");
        }
else {
printf("Foi escolhido um atributo incorreto e o programa foi encerrado\n");
}

return 0;

}

