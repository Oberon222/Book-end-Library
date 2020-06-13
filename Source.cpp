#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

int main() {

	Library one; 
	Book b1("Name", "Autor", "House", "yar", "rating");
	Book b2("Poetry", "Lina Kostenko", "Pegasus", "2017", "****");
	/*b1.PrintBook();
	b2.PrintBook();*/

	one.AddBook(b1);
	one.AddBook(b2);
	one.AddBook({ "Poetry bla-bla","Pavlo Kostenko","NoPegasus","2017","****" });
	one.AddBook({ "NoPoetry","Dima","Fly","2018","****" });
	one.AddBook({ "gPoetry","Lina Kostenko","Pegasus","2017","****" });

	one.ShowAllInfoBooks();

	one.Serch_By_Name("N");

	one.Serch_By_Author("L");

	one.Serch_By_Publishing_House("P");



	system("pause");
	return 0;
}