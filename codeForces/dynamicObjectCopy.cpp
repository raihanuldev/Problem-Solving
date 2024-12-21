#include <bits/stdc++.h>
using namespace std;

class BookDetails{
    public:
    string name;
    string author;
    int price;
    //make constructoir
    BookDetails(string name,string author,int price)
    {
        this->author = author;
        this->name = name;
        this->price = price;
    }
};

int main()
{
    //create a object
    BookDetails* DSA = new BookDetails("DSA","BTEB",189);
    BookDetails *JAVA =new BookDetails("JAVA","TBoard",288);
    *DSA = *JAVA;
    cout << DSA->author <<" " <<JAVA->author<<endl;
    delete JAVA;
    cout << DSA->author <<" " <<DSA->name;
    return 0;
}