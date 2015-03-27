/*
Program : Implementation of Class, Object and Inheritence, Book.h
Author  : Ashmita Kunwar
Date    : 3/27/2015
*/

#include<iostream>
using namespace std;
#include "Book.h"


     Book::Book(string nameBook, int p,Author A)
         {
             Name= nameBook;
             author = A;
             price = p;

        }

     Book::Book(string nameBook, int p,int q,Author A)
        {
            Name= nameBook;
            author = A;
            price = p;
            setQuantity(q);

        }
    string Book:: getName()
             {
                 return Name;
             }

     Author Book:: getauthor()
             {
                 return author;

             }

    void Book:: setPrice (int p )
          {
              price = p;
          }
    int Book:: getPrice()
           {
               return price;
           }

    void Book:: setQuantity (int q )
          {
              quantity = q;
          }

    int  Book:: getQuantity()
           {
               return quantity;
           }

    string Book::tostring()
           {
              return Name + " by " + author.tostring();
           }









