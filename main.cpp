//COMSC-210 | Lab 15 | Abhishek Nanduri
//IDE used: VS code

#include<iostream>
#include<vector>
#include<array>
#include<fstream>

using namespace std; 

class Movie
{
    private:

        string title; 
        string year; 
        string writer; 

    public: 
        //setters
        void setTitle(string t) { title = t; }
        void setYear (string y) { year = y;}
        void setWriter (string w) { writer = w; } 
        //getters
        string getTitle() { return title;}
        string getYear() { return year; }
        string getWriter() { return writer; }

        void print()
        {
            cout<<"Movie: "<<title<<endl; 
            cout<<"Year: "<<year<<endl; 
            cout<<"Screenwriter: "<<writer<<endl; 

        }


};

