/*
    Program : Implementation of Class, Object and Inheritence, Novel.h
    Author  : Ashmita Kunwar
    Date    : 3/27/2015
*/
#include<iostream>
using namespace std;
#include "Book.h"

class Novel:public Book
{
    private :
            string genre;
            string agegroup;
            int bookRating;
            bool isHardCover;


    public :
            Novel(string G_Novel, string Age , int rating_Book, bool hardCover, string NB, int p,Author A, int q);
            string getGenre();
            string getAgeGroup();
            string getIsHardCover();
            void setBookRating(int rating_Book);
            int getBookRating();
            string toString();
            float getValue();
};

