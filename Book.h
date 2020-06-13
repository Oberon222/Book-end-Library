#pragma once
#include <iostream>
#include <string>
using namespace std;
class Library;

class Book
{
	string name;
	string author;
	string publishingHouse;
	string yar;
	string rating;

public:
	friend Library;

	Book()
	{
		name = " ";
		author = " ";
		publishingHouse = " ";
		yar = " ";
		rating = " ";
	}

	Book(string name, string author, string publishingHouse, string yar, string rating)
	{
		this->name = name;
		this->author = author;
		this->publishingHouse = publishingHouse;
		this->yar = yar;
		this->rating = rating;
	}

	void PrintBook()const;
};


class Library
{
	Book* books;
	int size;

public:
	friend Book;

	Library()
	{
		books = nullptr;
		size = 0;
	}

	Library(const Library& other) // copy c-tor
	{
		this->size = other.size;
		this->books = new Book[other.size];
		for (int i = 0; i < other.size; i++) {
			this->books[i] = other.books[i];
		}

	}

	~Library()
	{
		if (books != nullptr) delete[]books;
	}

	void AddBook(Book newBook);

	void Sort_By_Name();
	void Sort_By_Author();
	void Sort_By_Yar();

	void ShowShortInfoBook(Book book);
	void ShowAllInfoBooks();

	void Serch_By_Name(string letter_name);
	void Serch_By_Author(string letter_author);
	void Serch_By_Publishing_House(string letter_publishingHouse);
};
