/*
    Program : Implementation of Class, Object and Inheritence, Author.h
    Author  : Ashmita Kunwar
    Date    : 3/27/2015
*/

#include<iostream>
using namespace std;
#ifndef AUTHOR_H
#define AUTHOR_H


class Author
{
    private:
        string author;
        char gender;
        string email;

    public:
        Author (string n,char g, string email  );
        Author();
        string getauthor();
        char getGender();
        void setEmail(string e);
        string tostring();


};


#endif
