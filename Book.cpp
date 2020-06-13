#include "Book.h"
#include <iostream>
#include <string>
using namespace std;

void Book::PrintBook()const
{
	cout << "Book name: " << this->name << endl;
	cout << "Book author: " << this->author << endl;
	cout << "Publishing House: " << this->publishingHouse << endl;
	cout << "Yar of publication: " << this->yar << endl;
	cout << "Rating: " << this->rating << endl;
}

void Library::AddBook(Book newBook)
{
	Book* tmp = new Book[size + 1];
	for (int i = 0; i < size; i++) {
		tmp[i] = books[i];
	}
	tmp[size] = newBook;
	delete[]books;
	books = tmp;
	++size;
}

void Library::Sort_By_Name() // Select
{
	for (int i = 0; i < size; i++) {
		string tmp = books[0].name;
		for (int j = i + 1; j < size; j++) {
			if (books[i].name > books[j].name) {
				tmp = books[i].name;
				books[i].name = books[j].name;
				books[j].name = tmp;
			}
		}
	}
}

void Library::Sort_By_Author() // Select
{
	for (int i = 0; i < size; i++) {
		string tmp= books[0].author;
		for (int j = i + 1; j < size; j++) {
			if (books[i].author > books[j].author) {
				tmp = books[i].author;
				books[i].author = books[j].author;
				books[j].author = tmp;
			}
		}
	}
	
}

void Library::Sort_By_Yar() //Bubble :)
{
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (books[j].yar > books[j + 1].yar) {
				string tmp = books[j].yar;
				books[j].yar = books[j + 1].yar;
				books[j + 1].yar = tmp;
			}
		}
	}
}

void Library::ShowShortInfoBook(Book book)
{
	cout << "-" << book.name << "::" << book.author << endl;

}

void Library::ShowAllInfoBooks()
{
	for (int i = 0; i < size; i++) {
		cout << i + 1 << ")" << books[i].name << endl;
		cout<< books[i].author << endl;
		cout << books[i].publishingHouse << endl;
		cout << books[i].yar << endl;
		cout << books[i].rating << endl;
	}
}

void Library::Serch_By_Name(string letter_name)
{
	for (int i = 0; i < size; i++) {

		string tmp = books[i].name;
		tmp.erase(tmp.begin() + 1, tmp.end());
		if (tmp == letter_name) {
			ShowShortInfoBook(books[i]);
		}
	}
}

void Library::Serch_By_Author(string letter_author)
{
	for (int i = 0; i < size; i++) {

		string tmp = books[i].author;
		tmp.erase(tmp.begin() + 1, tmp.end());
		if (tmp == letter_author) {
			ShowShortInfoBook(books[i]);
		}
	}
}

void Library::Serch_By_Publishing_House(string letter_publishingHouse)
{
	for (int i = 0; i < size; i++) {

		string tmp = books[i].author;
		tmp.erase(tmp.begin() + 1, tmp.end());
		if (tmp == letter_publishingHouse) {
			ShowShortInfoBook(books[i]);
		}
	}
}
