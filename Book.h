/*
    Program : Implementation of Class, Object and Inheritence, Book.h
    Author  : Ashmita Kunwar
    Date    : 3/27/2015
*/

#include<iostream>
#include "Author.h"
using namespace std;
#ifndef BOOK_H
#define BOOK_H


class Book
{
     private:
         string Name ;
         Author author;

    protected:
         int quantity;
         int price;

    public:
          Book (string NB, int p,Author A);
          Book (string NB, int p,int q,Author A);
          string getName();
          Author getauthor();
          void setPrice (int price );
          int getPrice();
          void setQuantity (int Quantty );
          int getQuantity();
          string tostring();

};
#endif









