/*
    Program : Implementation of Class, Object and Inheritence, Novel.cpp
    Author  : Ashmita Kunwar
    Date    : 3/27/2015
*/
#include <iostream>
using namespace std;
#include "Novel.h"

  Novel::Novel(string G_Novel, string Age, int rating_Book, bool hardCover, string NB, int p, Author A, int q):Book(NB, p,q, A)
        {
            genre=G_Novel;
            agegroup=Age;
            bookRating= rating_Book;
            isHardCover = hardCover;

        }


string Novel::getGenre()
        {
             return genre;
        }


string Novel::getAgeGroup()
        {
            return agegroup;
        }


void Novel::setBookRating(int rating_Book)
        {
            bookRating=rating_Book;
        }


  int Novel::getBookRating()
        {
            return bookRating;
        }

  string Novel::getIsHardCover()
        {
            string hardCover;

            if (isHardCover == 0) {
                hardCover = "Paperback";
            }else hardCover = "Hardcover";
            return hardCover;
        }


string Novel::toString()
        {
            return " The name of this novel is " + Book::getName() + " by " + Book::getauthor().getauthor() + " and Cover type: " + getIsHardCover();
        }


float Novel::getValue()
        {
            return quantity * price;
        }


