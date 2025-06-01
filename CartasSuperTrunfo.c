#include <stdio.h>

struct Carta {
    char codigo[4];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

float calcularSuperPoder(struct Carta c) {
    float densidade = (float)c.populacao / c.area;
    float densidadeInvertida = 1.0f / densidade;
    return c.populacao + c.area + c.pib + c.pontosTuristicos + densidadeInvertida;
}

int main() {
    struct Carta carta1, carta2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Digite a população: ");
    scanf("%lu", &carta1.populacao);
    printf("Digite a área (em km²): ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Digite o código da cidade (ex: B02): ");
    scanf("%s", carta2.codigo);
    printf("Digite a população: ");
    scanf("%lu", &carta2.populacao);
    printf("Digite a área (em km²): ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibição
    printf("\n--- Dados das Cartas Cadastradas ---\n");

    printf("\nCarta 1 - Código: %s\n", carta1.codigo);
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\nCarta 2 - Código: %s\n", carta2.codigo);
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    // Comparações
    printf("\n--- Comparações ---\n");

    // População
    printf("População: %d\n", carta1.populacao > carta2.populacao ? 1 : 0);

    // Área
    printf("Área: %d\n", carta1.area > carta2.area ? 1 : 0);

    // PIB
    printf("PIB: %d\n", carta1.pib > carta2.pib ? 1 : 0);

    // Pontos turísticos
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos > carta2.pontosTuristicos ? 1 : 0);

    // Densidade populacional (menor vence)
    float densidade1 = (float)carta1.populacao / carta1.area;
    float densidade2 = (float)carta2.populacao / carta2.area;
    printf("Densidade Populacional: %d\n", densidade1 < densidade2 ? 1 : 0);

    // Super Poder
    float sp1 = calcularSuperPoder(carta1);
    float sp2 = calcularSuperPoder(carta2);
    printf("Super Poder: %d\n", sp1 > sp2 ? 1 : 0);

    return 0;
}