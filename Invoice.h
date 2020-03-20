#ifndef INVOICE_H
#define INVOICE_H

#include <iostream>
#include <string>

class Invoice
{
    public:
        Invoice();
        virtual ~Invoice();
        SetNItem();
        GetNItem();
        SetQItem();
        GetQItem();
        SetDesc();
        GetDesc();
        SetPreco();
        GetPreco();
        GetInvoiceAmount();

    private:
        int nItem;
        string desc;
        int qItem;
        double preco;

};

#endif // INVOICE_H
