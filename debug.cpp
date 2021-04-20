#include<iostream>
using namespace std;

class model {
    public:
    int isbnNo , year;
    string title , author;
    
    void get() {
        // this->isbnNo = isno;
        // this->year = year;
        // this->title = title;
        // this->author = author;
        cin>>isbnNo>>title>>author>>year;
        // cout<<isbnNo << " "<<title<<" "<<author<<" "<<year;
    }
};
class cd : public model {
    public:
    int dur;
    int price;
    void get() {
        model :: get();
        cin>>dur;
    }
    
    void print() {
        price = 2*dur;
                cout<<isbnNo << " "<<title<<" "<<price;
    //   cout<<isbnNo<<endl<<title<<endl<<price<<endl;
    }
};
class book : public model {
    public:
    int pages;
    int price;
    void get() {
        model :: get();
        cin>>pages;
    }
    void print() {
            price = pages;
       std :: cout<<isbnNo<<endl<<title<<endl<<price<<endl;
    }
};

int main() {
    int type; cin>>type;
    int isn , year;
    string author , title;
    model m;
    // m.get();
    book b;
    cd c;
    int p , l;
    if (type == 0)  {
        b.get();
        b.print();
    } else if(type == 1) {
        c.get();
        c.print();
    } else {
        cout<<"Invalid Input";
    }
    
}