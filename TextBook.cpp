
/*
Program : Implementation of Class, Object and Inheritence , TextBook.cpp
Author  : Ashmita Kunwar
Date    : 3/27/2015
*/

#include<iostream>
using namespace std;
#include "TextBook.h"
#include<cstdlib>


    TextBook:: TextBook(string textSubject, string textLevel,string NB, int p, Author A, int q ):Book(NB, p, q,A)
        {
            subject=textSubject;
            level=textLevel;
        }

    string TextBook:: getSubject()
        {
            return subject;
        }

    void TextBook:: setLevel(string textLevel)
        {
            level=textLevel;
        }

    string TextBook:: getLevel()
        {
            return level;
        }

    string TextBook:: toString()
        {
            char charvalue[10];
            itoa(Book::getQuantity(),charvalue,10);
             return " This is " + level  + " text book  written by " + Book::getauthor().getauthor() + " with price " + charvalue + " are available ";
        }
    float TextBook::getValue()
        {
        return quantity * price;
        }

