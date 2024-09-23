#include <iostream>
#include <cstdlib> 
using namespace std;

int main()
{
    float valor;
    int horas;

    cout << "Insira o valor das horas trabalhadas: ";
    cin >> valor;

    cout << "Horas trabalhadas do funcionário: ";
    cin >> horas;

    float salario = valor * horas;
    float inss = 0.10;
    float fgts = 0.11;

    system("clear"); // ou system("cls"); se estiver em Windows
    cout << "\tFolha de Pagamento\n";

    cout << "\nSalário Bruto: (" << valor << " * " << horas << ")   : R$ " << salario;

    float IR, INSS2, FGTS2; // Variáveis que receberão os devidos descontos aplicados

    if (salario <= 900) {
        cout << "\n(-) IR (isento):      : R$ 0 ";
        IR = 0;
    } else if (salario > 900 && salario <= 1500) {
        cout << "\n(-) IR (5%)    : R$ " << 0.05 * salario;
        IR = 0.05 * salario; // Recebe o desconto de 5%
    } else if (salario > 1500 && salario <= 2500) {
        cout << "\n(-) IR (10%)    : R$ " << 0.1 * salario;
        IR = 0.1 * salario; // Recebe o desconto de 10%
    } else if (salario > 2500) {
        cout << "\n(-) IR (20%)    : R$ " << 0.2 * salario;
        IR = 0.2 * salario; // Recebe o desconto de 20%
    }

    cout << "\n(-) INSS (10%)   : R$ " << inss * salario;
    INSS2 = inss * salario; // INSS recebe um desconto de 10%

    cout << "\nFGTS (11%)   : R$ " << fgts * salario << "\n";
    FGTS2 = fgts * salario; // FGTS recebe um valor de 11%

    cout << "\nTotal de descontos     : R$ " << IR + INSS2;

    float desconto;
    desconto = salario - IR - INSS2; // Calcula o salário líquido

    cout << "\nSalário Líquido     : R$ " << desconto;

    return 0;
}
