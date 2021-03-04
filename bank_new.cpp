#include <iostream>
using namespace std;




class BankCell //мб зафрендить
{
	//умеет давать информацию о своих владельцах, пустая она или нет (нуллптр или нет), если нет, то смерть (не, оказывается не умеет)
	//умеет умирать если пустая (дэлитнуть указатель)
	//
public:
	BankCell() { std::cout << "BankCell exist\n"; }
	~BankCell() { std::cout << "BankCell destroyed\n"; }
};

class Person
{
	//умеет давать информацию о ячейке, которой владеет - геттер
	//умеет давать информацию жив или мерт (в зони видимости или нет), дэлитнули или нет, создали или нет
	//умеет умирать
	//умеет получать ячейку, конструктор
public:

	BankCell BC;
	

	Person(BankCell BC) : BC(BC) { cout << "Person open Bank Cell" << endl; } //присваиваем челу ячейку
	
	
	std::shared_ptr<BankCell> Piece(BC); //даем челу ячейку

	std::shared_ptr<BankCell> getBankCell() { return& Piece; };

	//BankCell& BankCell::operator =(const BankCell&)

	void setBankCell(std::shared_ptr<BankCell> BC_) { this->BC = BC_; } //даем ячейку

};



int main()
{
	BankCell Exem1; //создали ячейку
	Person Alisa(Exem1), Bob(Exem1); // присвоили
	return 0;
}
