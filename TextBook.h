/*
Program : Implementation of Class, Object and Inheritence , TextBook.h
Author  : Ashmita Kunwar
Date    : 3/27/2015
*/
#include<iostream>
using namespace std;
#include "Book.h"

class TextBook :public Book
{
    private:
        string subject;
        string level;

    public:
        TextBook(string Text_Subject, string Text_level,string NB, int p, Author A,int q);
        string getSubject();
        void setLevel(string Text_Level);
        string getLevel();
        string toString();
        float getValue();
};
