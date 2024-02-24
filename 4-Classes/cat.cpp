#include<iostream>
using namespace std;

class Cat{
//data members 
private:
    string name;
    string favoriteToy;
    string color;

//member functions
public:
//constructors & destructor 
Cat(string,string, string); 
Cat(const Cat& cat);
Cat();
~Cat();

//accessors & functions 
string getName() const;
string getFavoriteToy() const;
string getCatColor() const;
void displayInfo();
};

//Definition of member functions,constructor and destructors 

Cat::Cat(string catName,string favoriteCatToy,string catColor)   // parameter constructor
 : name(catName),favoriteToy(favoriteCatToy),color(catColor){
    cout<<"\nthe parameter constructor was called"<<endl;
 }
Cat:: Cat (const Cat& cat)                                      // copy constructor 
: name(cat.name),favoriteToy(cat.favoriteToy),color(cat.color){
    cout<<"\nThe copy constructor was called"<<endl;
}

Cat:: Cat(){                                                    // default constructor
    cout<<"\nthe default constructor was called"<<endl;
}
Cat :: ~Cat ()                                                  //destructor
{       
cout << "\nThe destructor was called for Cat"<<endl;
}

//functions
string Cat::getName() const{
    return name;
}
string Cat:: getFavoriteToy() const{
    return favoriteToy;
}
string Cat:: getCatColor() const{
    return color;
}
void Cat:: displayInfo(){
    cout<<"Name: "<<getName()<<endl;
    cout<<"Favorite Toy: "<<getFavoriteToy()<<endl;
    cout<<"color: "<<getCatColor()<<endl;
}

//Application
int main(){
    Cat cat1("Alice", "Mouse toy", "White and black");
    cout << "Cat 1 info:" << endl;
    cat1.displayInfo();

    Cat cat2(cat1);
    cout << "\nCat 2 info:" << endl;
    cat2.displayInfo();

    Cat cat3;
    cout << "\nCat 3 info:" << endl;
    cat3.displayInfo();

return 0;
}