#include <numeric>
#include <cstdlib>
#include <sstream>
#include <stdio.h>
#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

int main()
{
    Invoice item1 (1, "Controle", 1, 7);
    Invoice item2 (2, "Pilha", 4, 2);

    GetDesc(item2.desc);
    GetInvoiceAmount(item1.qItem, item1.preco);
    SetQItem(item1.qItem);
    GetQItem(item1.qItem);
    return 0;
}
