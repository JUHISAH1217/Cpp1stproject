#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

class Lib {
public:
    char bookname[100], auname[50], sc[20], sc1[50];
    int q, B, p;

    Lib() {
        strcpy(bookname, "NO Book Name");
        strcpy(auname, "No Author Name");
        strcpy(sc, "No Book ID");
        strcpy(sc1, "No Book ID");
        q = 0;
        B = 0;
        p = 0;
    }

    void get();
    void student();
    void librarian();
    void getdata();
    void show(int);
    void booklist(int);
    void modify();
    void see(int);
    int branch(int);
    void issue();
    void der(char[], int, int);
    void fine(int, int, int, int, int, int);
};

void Lib::getdata() {
    int i;
    cin.ignore();
    cout << "\n\t\tEnter the details :-\n";
    cout << "\n\t\tEnter Book's Name : ";
    cin.getline(bookname, 100);
    for (i = 0; bookname[i] != '\0'; i++) {
        if (bookname[i] >= 'a' && bookname[i] <= 'z')
            bookname[i] -= 32;
    }
    cout << "\n\t\tEnter Author's Name : ";
    cin.getline(auname, 50);
    cout << "\n\t\tEnter Publication name : ";
    cin.getline(sc1, 50);
    cout << "\n\t\tEnter Book's ID : ";
    cin.getline(sc, 20);
    cout << "\n\t\tEnter Book's Price : ";
    cin >> p;
    cout << "\n\t\tEnter Book's Quantity : ";
    cin >> q;
}

void Lib::show(int i) {
    cout << "\n\t\tBook Name : " << bookname << endl;
    cout << "\n\t\tBook's Author Name : " << auname << endl;
    cout << "\n\t\tBook's ID : " << sc << endl;
    cout << "\n\t\tBook's Publication : " << sc1 << endl;
    if (i == 2) {
        cout << "\n\t\tBook's Price : " << p << endl;
        cout << "\n\t\tBook's Quantity : " << q << endl;
    }
}

void Lib::booklist(int i) {
    // Your implementation
}

void Lib::modify() {
    // Your implementation
}

void Lib::see(int x) {
    // Your implementation
}

int Lib::branch(int x) {
    // Your implementation
}

void Lib::issue() {
    // Your implementation
}

void Lib::der(char st[], int b, int x) {
    // Your implementation
}

void Lib::fine(int d, int m, int y, int dd, int mm, int yy) {
    // Your implementation
}

void Lib::get()  {
    // Your implementation
}

void Lib::student() {
    // Your implementation
}

void Lib::librarian() {
    // Your implementation
}

int main() {
    Lib obj;
    obj.get();
    cin.get(); // To keep the console window open
    return 0;
}

