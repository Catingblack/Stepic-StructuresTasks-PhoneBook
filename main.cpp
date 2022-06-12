#include <iostream>
#include <string>

using namespace std;

void add(int number, string name, string* Book) {
    Book[number] = name;
}

void del(int number, string* Book) {
    Book[number] = "not found";
}

void find(int number, string* Book) {
    if( Book[number] == "not found" or Book[number].empty() ){
        cout << "not found" << endl;
    }
    else {
        cout << Book[number] << endl;
    }
}

int main()
{

    int n;
    string cmnd;
    string name;
    int number;


    string* Book;
    Book = new string [10000000];

    cin >> n;

    for(int i = 0; i < n; i++) {

        cin >> cmnd;

        if( cmnd == "add" ) {

            cin >> number;
            cin >> name;

            add(number, name, Book);
        }

        if( cmnd == "del" ) {

            cin >> number;
            del(number, Book);
        }

        if( cmnd == "find" ) {

            cin >> number;
            find(number, Book);
        }

    }

    delete [] Book;

    return 0;
}
