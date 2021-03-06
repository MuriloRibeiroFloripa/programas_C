#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_CLIENTES 5
 
// 1. Declarar a estrutura
struct s_cliente {
    char nome[50];
    char rg[15];
    char cpf[15];
    int idade;
    char sexo;
};
 
// 2. Declarar o vetor de 5 elementos
struct s_cliente clientes[MAX_CLIENTES];
int i;
int n_clientes = 0;
 
// Fun??o para cadastrar um novo cliente no vetor clientes
// Veja que n?o tem retorno, apenas faz o cadastro.
void cadastraCliente(struct s_cliente cliente) {
    clientes[n_clientes] = cliente;
    n_clientes++;
}
 
// Fun??o para ler as informa??es do novo cliente
// Retorna um cliente com os dados preenchidos.
struct s_cliente leDados() {
    struct s_cliente auxiliar;
    printf("\n\n");
    printf("Nome: ");
    fflush(stdin);
    fgets(auxiliar.nome, 50, stdin);
    printf("RG: ");
    fflush(stdin);
    fgets(auxiliar.rg, 15, stdin);
    printf("CPF: ");
    fflush(stdin);
    fgets(auxiliar.cpf, 15, stdin);
    printf("Sexo: ");
    fflush(stdin);
    scanf("%c", &auxiliar.sexo);
    printf("Idade: ");
    fflush(stdin);
    scanf("%d", &auxiliar.idade);
    return auxiliar;
}
// Fun??o para imprimir todos os clientes na tela
// Note que n?o tem retorno, apenas imprime
void imprimeClientes() {
    for (i=0; i<n_clientes; i++) {
        printf("Codigo: %d\n", i+1);
        printf("Nome..: %s", clientes[i].nome);
        printf("RG....: %s", clientes[i].rg);
        printf("CPF...: %s", clientes[i].cpf);
        printf("Sexo..: %c", clientes[i].sexo);
        printf("\nIdade.: %d", clientes[i].idade);
        printf("\n+++++++++++++++++++\n");
    }
}
 
// Fun??o para exibir o menu de op??es
// Note que retorna um valor int, que ? o
// n?mero digitado pelo usu?rio.
int menu() {
    int opcao;
 
    printf("\n\n ==== MENU DE OPCOES ====\n");
    printf("0 - SAIR \n");
    printf("1 - INSERIR \n");
    printf("2 - EXIBIR TODOS \n");
    printf("3 - EXCLUIR \n");
    printf("\nO que deseja fazer? ");
    scanf("%d", &opcao);
 
    return opcao;
}
 
// Fun??o para remover um cliente do vetor
// Note que n?o h? retorno, apenas remove.
void remover(int posicao) {
    int indice = posicao - 1;
    int i = 0;
 
    if ((posicao < 1) || (posicao > n_clientes)) {
        printf("\nPosicao invalida!\n");
        return;
    }
 
    // 1. caso - remover no final do vetor
    if (posicao == n_clientes) {
        n_clientes--;
        return;
    }
 
    // 2. remove qualquer outra posicao
    for (i=indice; i<n_clientes; i++) {
        clientes[i] = clientes[i+1];
    }
    n_clientes--;
}
 
// Fun??o principal, aqui come?a o programa.
int main()
{
    int opcao_selecionada;
    int rem = 0;
    struct s_cliente novo_cliente;
    int r;
 
    do {
        opcao_selecionada = menu();
        switch(opcao_selecionada) {
            case 0: break;
 
            case 1: // c?digo para inserir
                if (n_clientes == MAX_CLIENTES) {
                    printf("\nBANCO DE DADOS LOTADO!\n");
                    break;
                }
                novo_cliente = leDados();
                cadastraCliente(novo_cliente);
                break;
            case 2: // c?digo para exibir
                imprimeClientes();
                break;
            case 3: // c?digo para excluir
                printf("Digite a posicao que deseja excluir: ");
                scanf("%d", &r);
                remover(r);
                break;
            default:
                printf("----- OPCAO INVALIDA -----");
        }
    }
    while (opcao_selecionada != 0);
    return 0;
}
