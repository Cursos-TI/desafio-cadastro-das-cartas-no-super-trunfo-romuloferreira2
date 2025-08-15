#include <stdio.h>

int main(){
    char estado;
    char nomedacidade[50], codigocarta[50];
    int populacao, pontosturisticos, numero;
    float areadacidade, pib;
    
    printf("Olá, bem-vindo ao SUPER TRUNFO.\n");
    printf("No jogo SUPER TRUNFO, você cadastra a cidade que deseja e elas viram cartas. \n");
    printf("PARA INCIAR O JOGO DEVEMOS CASATRAR A PRIMEIRA CARTA. \n");
    
    printf("Escolha uma letra referente ao estado da cidade escolhida.\n");
    printf("A : AMAZONAS \n");
    printf("B : SÃO PAULO \n");
    printf("C : RIO DE JANEIRO \n");
    printf("D : MINAS GERAIS \n");
    printf("E : ESPIRITO SANTO \n");
    printf("F : RIO GRANDE SO SUL \n");
    printf("G : BAHIA \n");
    printf("H : DF \n");
    printf("Digite a letra referente ao estado escolhido: ");
    
    printf("Escolha um número do 1 ao 4 para sua carta.\n");
    printf("E adicione antes do numero a letra escolhida de acordo com o estado: ");
    scanf("%s", &codigocarta);
    
    printf("Digite o nome da cidade: \n");
    printf("NÃO UTILIZA 'ESPAÇO' \n");
    scanf("%s", nomedacidade);
    
    printf("Insira o número de habitantes: \n");
    scanf("%d", &populacao);
    
    printf("Insira a área da cidade em km²: \n");
    scanf("%f", &areadacidade);
    
    printf("Insira o PIB da sua cidade: \n");
    scanf("%f", &pib);
    
    printf("Insira o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontosturisticos);
    
    printf("CARTA 1: \n");
    printf("Codigo da carta: %s \n", codigocarta);
    printf("Nome da CIDADE: %s \n", nomedacidade);
    printf("Sua cidae tem %d habitantes . \n", populacao);
    printf("Possui o PIB de : %f \n", pib);
    printf("Seu teritorio é de %f km². \n",areadacidade);
    printf("E possui %d pontos turisticos \n", pontosturisticos);
    printf("..................................... \n");
    
    printf("Agora vamos cadrastar a segunda carta. \n");
    printf("Escolha uma letra referente ao estado da cidade escolhida.\n");
    printf("A : AMAZONAS \n");
    printf("B : SÃO PAULO \n");
    printf("C : RIO DE JANEIRO \n");
    printf("D : MINAS GERAIS \n");
    printf("E : ESPIRITO SANTO \n");
    printf("F : RIO GRANDE SO SUL \n");
    printf("G : BAHIA \n");
    printf("H : DF \n");
    printf("Digite a letra referente ao estado escolhido: ");
    
    printf("Escolha um número do 1 ao 4 para sua carta.\n");
    printf("E adicione antes do numero a letra escolhida de acordo com o estado: ");
    scanf("%s", &codigocarta);
    
    printf("Digite o nome da cidade: \n");
    printf("NÃO UTILIZA 'ESPAÇO' \n");
    scanf("%s", nomedacidade);
    
    printf("Insira o número de habitantes: \n");
    scanf("%d", &populacao);
    
    printf("Insira a área da cidade em km²: \n");
    scanf("%f", &areadacidade);
    
    printf("Insira o PIB da sua cidade: \n");
    scanf("%f", &pib);
    
    printf("Insira o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontosturisticos);
    
    printf("CARTA 2: \n");
    printf("Codigo da carta: %s \n", codigocarta);
    printf("Nome da CIDADE: %s \n", nomedacidade);
    printf("Sua cidae tem %d habitantes . \n", populacao);
    printf("Possui o PIB de : %f \n", pib);
    printf("Seu teritorio é de %f km². \n",areadacidade);
    printf("E possui %d pontos turisticos \n", pontosturisticos);
    return 0;
}

