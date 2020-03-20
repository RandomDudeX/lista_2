#include "Invoice.h"

Invoice::Invoice(double nItem, string desc = " ", double qItem, double preco)
{
    if(nItem >= 0)
        this->nItem = nItem;
    else
        nItem = 0.0;

    if(qItem >= 0)
        this->qItem = qItem;
    else
        qItem = 0.0;

    if(nItem >= 0)
        this->preco = preco;
    else
        nItem = 0.0;
}

void Invoice::SetNItem(double nItem){
    this->nItem = nItem; }

double Invoice::GetNItem() {return nItem;}

void Invoice::SetQItem(double qItem){
    this->qItem = qItem; }

double Invoice::GetQItem() {return qItem;}

void Invoice::SetDesc(string desc){
    this->desc = desc; }

string Invoice::GetDesc() {return desc;}

void Invoice::SetPreco(double preco){
    this->preco = preco; }

double Invoice::GetPreco() {return preco;}

GetInvoiceAmount(double qItem, double preco) {return qItem * preco; }

Invoice::~Invoice()
{
    //dtor
}
