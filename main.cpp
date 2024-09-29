//COMSC-210 | Lab 15 | Abhishek Nanduri
//IDE used: VS code

#include<iostream>
#include<vector>
#include<array>
#include<fstream>
#include<string>
#include<iomanip>

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


int main() {

    vector<Movie> movies; 

    ifstream inputFile; 
    inputFile.open("input.txt"); 
    string t1;
    string y1; 
    string w1;  

    
    
    if(inputFile.is_open()) 
    {
        
        while ( getline(inputFile, t1) ) 
        {
            getline(inputFile, y1);
            getline(inputFile, w1);
            Movie film; 
            film.setTitle(t1); 
            film.setYear(y1);
            film.setWriter(w1); 
            movies.push_back(film); 

        }

        inputFile.close(); 
    }

    else
    {
        cout<<"Error, file not found!"<<endl; 
        return 1;
    }

    for(int i = 0; i < movies.size(); i++)
    {
        cout<<"Movie: "<<movies[i].getTitle()<<endl; 
        cout<<"Year Released: " <<movies[i].getYear()<<endl; 
        cout<<"Screenwriter: "<<movies[i].getWriter()<<endl<<endl;  
    }


return 0;
}
