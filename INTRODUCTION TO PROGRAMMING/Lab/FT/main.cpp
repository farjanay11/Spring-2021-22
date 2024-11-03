#include <iostream>
#include <cstring>

using namespace std;
class Book
{
private:
    string isbn;
    string bookTitle;
    string authorName;
    double price;
    int availableQuantity;
public:
    Book()
    {

    }
    Book(string isbn,string bookTitle,string authorName, double price, int availableQuantity)
    {
        this -> isbn=isbn;
        this -> bookTitle=bookTitle;
        this -> authorName=authorName;
        this -> price=price;
        this -> availableQuantity=availableQuantity;
    }
    void setIsbn (string isbn)
    {
        this->isbn=isbn;
    }
    string getIsbn()
    {
        return isbn;
    }
    void setbookTitle (string bookTitle)
    {
        this->bookTitle=bookTitle;
    }
    string getbookTitle()
    {
        return bookTitle;
    }
    void setauthorName (string authorName)
    {
        this->authorName=authorName;
    }
    string getauthorName()
    {
        return authorName;
    }
    void setPrice(double price)
    {
        this->price=price;
    }
    double getPrice()
    {
        return price;
    }

    void setavailableQuantity(int availableQuantity)
    {
        this -> availableQuantity=availableQuantity;
    }
    int getavailableQuantity()
    {
        return availableQuantity;
    }
    void addQuantity(int amount)
    {
        availableQuantity=availableQuantity+amount;
    }
    void sellQuantity(int amount)
    {
        availableQuantity=availableQuantity-amount;
    }
    void showDetails()
    {
        cout<<"ISBN:"<<isbn<<endl;
        cout<<"Book Title:"<<bookTitle<<endl;
        cout<<"Author Name:"<<authorName<<endl;
        cout<<"Price:"<<price<<endl;
        cout<<"Available Quantity:"<<availableQuantity<<endl;
    }

};


class StoryBook:public Book
{
private:
    string cataegory;
public:
    StoryBook()
    {

    }
    StoryBook(string isbn,string bookTitle,string authorName,double price,int availableQuantity,string cataegory):Book(isbn,bookTitle,authorName,price,availableQuantity)
    {
        this -> cataegory=cataegory;
    }
    void setCataegory(string cataegory)
    {
      this -> cataegory=cataegory;
    }
    string getcataegory()
    {
        return cataegory;
    }
    void showDetails()
    {
        Book::showDetails();
        cout<<"Cataegory"<<cataegory<<endl;
    }
};


class TextBook:public Book
{
private:
    int standard;
public:
    TextBook()
    {

    }
    TextBook(string isbn,string bookTitle,string authorName,double price,int availableQuantity,int standard):Book(isbn,bookTitle,authorName,price,availableQuantity)
    {
        this -> standard=standard;
    }
    void setstandard(int standard)
    {
      this->standard=standard;
    }
    int getStandard(int standard)
    {
        return standard;
    }
    void showDetails()
    {
        Book::showDetails();
        cout<<"Standard"<<standard<<endl;
    }
};

int main()
{
    StoryBook s1;
    s1.setIsbn("9876");
    s1.setbookTitle("X");
    s1.setauthorName("A");
    s1.setPrice(500);
    s1.setavailableQuantity(25);
    s1.setCataegory("B");
    s1.addQuantity(10);
    s1.sellQuantity(5);
    s1.showDetails();
    StoryBook s2("9876-1","X","A",500,25,"B");
    s2.showDetails();
    TextBook t1;
    t1.setIsbn("6789");
    t1.setbookTitle("Y");
    t1.setauthorName("O");
    t1.setPrice(600);
    t1.setavailableQuantity(22);
    t1.setstandard(6);
    t1.addQuantity(20);
    t1.sellQuantity(10);
    t1.showDetails();
    TextBook t2("6789-1","Y","O",600,22,6);
    t2.showDetails();
    return 0;
}


