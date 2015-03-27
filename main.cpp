/*
Program :Main.cpp, using AuthorBook Class, Implementation of Object, Class , Inheritence
Name : Ashmita Kunwar
Date : 3/23/2017
*/

#include <iostream>
using namespace std;
#include<cstdlib>
#include "Novel.h"
#include "TextBook.h"

void AuthorDetails(string &nameOfAuthor, string &authorEmail, char &authorGender);
void BookDetails(string &nameOfBook, int &quantity, int &bookPrice);
void NovelDetails(string &novelGenre, int &novelRating, string &ageGroup, bool &isHardCover);
void TextBookDetails(string &bookSubject, string &bookLevel);


int main()
{
        string nameOfBook, nameOfAuthor, authorEmail, novelGenre, bookLevel, bookSubject,  ageGroup;
        char bookType, authorGender;
        int bookPrice, quantity, novelRating;
        bool isHardCover;

        cout<<"Book Type is either Novel OR TextBook::\n Novel:: N \n TextBook: T\n ";
        cout<<"Book Type is : ";
        cin>>bookType;
        cout<<endl;


        if(bookType!='N' && bookType!='T')
        {
            cout<<"Invalid Entry! Try it again!";
            exit(0);
        }
else
{
        AuthorDetails(nameOfAuthor, authorEmail, authorGender);
        BookDetails(nameOfBook, quantity, bookPrice);
        Author a1(nameOfAuthor, authorGender,authorEmail);


 if(bookType=='N')
   {
        cout<<"\n-----------Novel--------------------\n"<<endl;
        NovelDetails(novelGenre, novelRating, ageGroup, isHardCover);
        Novel newNovel(novelGenre, ageGroup, novelRating, isHardCover, nameOfBook, quantity, a1, bookPrice);
         cout << newNovel.toString();
         cout<<endl;
         cout<<"The bookPrice for total Novel's are :" ;
         cout << newNovel.getValue();
         cout<<endl;

}

      else
      {
            cout<<"--------------------TextBook-------------------!\n";


        TextBookDetails(bookSubject, bookLevel);
        TextBook t( bookSubject,bookLevel,nameOfBook, bookPrice,a1,quantity);

        cout<<t.tostring();
        cout<<endl;
        cout<<"The total price for Text Book are:";
        cout << t.getValue();
        cout<<endl;
      }

}
}
  void AuthorDetails(string &nameOfAuthor, string &authorEmail, char &authorGender)
          {
            cout<<"Enter the Name of Author : ";
            cin.get();
            getline(cin, nameOfAuthor);
            cout<<endl;
            cout<<"Enter the Email Address of the Author: ";
            cin>>authorEmail;
            cout<<endl;
            cout<<"Enter the gender of Author: ";
            cin>>authorGender;
            cout<<endl;
          }
  void BookDetails(string &nameOfBook, int &quantity, int &bookPrice)
      {
           cout<<"Enter Name of Book: ";
           cin.get();
           getline(cin,nameOfBook);
           cout<<endl;
           cout<<"Enter  the bookPrice: ";
           cin>>bookPrice;
           cout<<endl;
           cout<<"Enter Quantity Of books available: ";
           cin>>quantity;
           cout<<endl;
      }


      void NovelDetails(string &novelGenre, int &novelRating, string &ageGroup, bool &isHardCover)
      {

               cout<<"Enter the Genre of the book: ";
               cin.get();
               getline(cin, novelGenre);
               cout<<endl;
               cout<<"Enter the age group :";
               cin>>ageGroup;
               cout<<endl;
               cout<<"Enter the rating of the book:";
               cin>>novelRating;
               cout<<endl;
               cout<<"Is it in Hardcover ? (1 For Yes, 0 For No)";
               cin >> isHardCover;
               cout << endl;
      }


  void TextBookDetails(string &bookSubject, string &bookLevel)
      {
               cout<<"Enter the Subject : ";
               cin>>bookSubject;
               cout<<endl;
               cout<<" Enter the level of book :";
               cin>>bookLevel;
               cout<<endl;
      }







