#include <iostream>
#include <string>

// Base Class
class LibraryItem {
protected:
    std::string title;
    std::string publicationDate;

public:
    LibraryItem(std::string t, std::string pDate) : title(t), publicationDate(pDate) {}

    virtual void displayInfo() const {
        std::cout << "Title: " << title << ", Published: " << publicationDate << std::endl;
    }
    
    virtual ~LibraryItem() = default; // Virtual destructor for proper inheritance cleanup
};

// Derived Class 1: Book
class Book : public LibraryItem {
private:
    std::string author;
    int pageCount;

public:
    Book(std::string t, std::string pDate, std::string auth, int pages)
        : LibraryItem(t, pDate), author(auth), pageCount(pages) {}

    void displayInfo() const override {
        LibraryItem::displayInfo(); // Call parent display function
        std::cout << "Author: " << author << ", Pages: " << pageCount << std::endl;
    }
};

// Derived Class 2: Magazine
class Magazine : public LibraryItem {
private:
    int issueNumber;
    std::string publisher;

public:
    Magazine(std::string t, std::string pDate, int issue, std::string pub)
        : LibraryItem(t, pDate), issueNumber(issue), publisher(pub) {}

    void displayInfo() const override {
        LibraryItem::displayInfo(); // Call parent display function
        std::cout << "Issue Number: " << issueNumber << ", Publisher: " << publisher << std::endl;
    }
};

int main() {
    Book b("The Great Gatsby", "1925", "F. Scott Fitzgerald", 180);
    Magazine m("National Geographic", "2026-10", 412, "Partners");

    b.displayInfo();
    std::cout << "-------------------------\n";
    m.displayInfo();

    return 0;
}
