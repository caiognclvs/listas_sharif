#include <stdio.h>
 
int main() {
 
    unsigned long int codigo, melhor_lucro, mais_vendida;
    float compra, venda, custo, receita, lucro, custo_total, receita_total, lucro_total, maior_lucro;
    int c, quantidade, faixa1, faixa2, faixa3, maior_venda;
    c = codigo = melhor_lucro = mais_vendida = compra = venda = custo = receita = lucro = custo_total = receita_total = lucro_total = maior_lucro = quantidade = faixa1 = faixa2 = faixa3 = maior_venda = 0;
 
    while(1) {
        scanf("%lu %f %f %d", &codigo, &compra, &venda, &quantidade);
 
        if(c > 0 && codigo == 0) {
            break;
        }
 
        custo = compra * quantidade;
        receita = venda * quantidade;
        lucro = receita - custo;
 
        if(lucro < custo * 0.1) {
            faixa1++;
        }
 
        else if(lucro >= custo * 0.1 && lucro <= custo * 0.2) {
            faixa2++;
        }
 
        else if(lucro > custo * 0.2) {
            faixa3++;
        }
 
        if(lucro > maior_lucro) {
            maior_lucro = lucro;
            melhor_lucro = codigo;
        }
 
        if(quantidade > maior_venda) {
            maior_venda = quantidade;
            mais_vendida = codigo;
        }
 
        custo_total += custo;
        receita_total += receita;
 
        codigo = 0;
        compra = 0;
        venda = 0;
        quantidade = 0;
 
        c++;
    }
 
    lucro_total = ((receita_total / custo_total) - 1) * 100.0;
 
    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n", faixa1);
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", faixa2);
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n", faixa3);
    printf("Codigo da mercadoria que gerou maior lucro: %lu\n", melhor_lucro);
    printf("Codigo da mercadoria mais vendida: %lu\n", mais_vendida);
    printf("Valor total de compras: %.2f, valor total de vendas: %.2f e percentual de lucro total: %.2f%%\n", custo_total, receita_total, lucro_total);
 
    return 0;
}
