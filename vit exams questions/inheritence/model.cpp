#include<iostream>
using namespace std;

class model {
    public:
    int isbnNo , year;
    string title , author;
    
    void get() {
        cin>>isbnNo>>title>>author>>year;
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
     cout<<isbnNo<<endl<<title<<endl<<price<<endl;
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
       cout<<isbnNo<<endl<<title<<endl<<price<<endl;
    }
};

int main() {
    int type; cin>>type;
    int isn , year;
    string author , title;
    model m;
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