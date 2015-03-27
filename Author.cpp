/*
Program : Author.cpp, From class AuthorBook Class
*/

#include<iostream>
#include "Author.h"
using namespace std;


    Author::Author(string n,char g, string email  )
    {
        author= n;
        gender= g;
        setEmail(email);


    }

    Author::Author(){
    }

    string  Author::getauthor()
    {
        return author;

    }
    char Author :: getGender()
    {
        return gender;

    }
    void Author :: setEmail(string e)
    {
        email= e;
    }
    string Author :: tostring()
    {
        return author + " at " + email;
    }



