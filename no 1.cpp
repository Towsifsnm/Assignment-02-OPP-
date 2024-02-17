#include<bits/stdc++.h>
using namespace std;

class Book{
    public:
string title;
string author;
string ISBN;

Book(string t, string a,string I){

   title = t;
   author = a;
   ISBN = I;
cout<< title  << "Created"<< endl;

 }
 ~Book (){
 cout<< title << "Destroyed "<< endl;

 }

};

int main(){

Book b1("Introduction to OOP","John doe", "123456789" );
Book b2("Data structures and Algorithms","Jane smith", "987654321" );

return 0;

}
