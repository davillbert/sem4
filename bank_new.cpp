#include <iostream>
using namespace std;




class BankCell //мб зафрендить
{
	int num = 0;
	//умеет давать информацию о своих владельцах, пустая она или нет (нуллптр или нет), если нет, то смерть (не, оказывается не умеет)
	//умеет умирать если пустая (дэлитнуть указатель)
	//
public:
	BankCell() {
		std::cout << "BankCell exist\n";
		num++;
	}
	int getNumber() { return num; }
	~BankCell() { std::cout << "BankCell destroyed\n"; }
};

class Person
{
	//умеет давать информацию о ячейке, которой владеет - геттер
	//умеет давать информацию жив или мерт (в зони видимости или нет), дэлитнули или нет, создали или нет
	//умеет умирать
	//умеет получать ячейку, конструктор
	std::shared_ptr<BankCell> Piece;
public:

//	BankCell BC;
	

	Person() = default;//: BC(BC) { cout << "Person open Bank Cell" << endl; } //присваиваем челу ячейку
	
	
	 //даем челу ячейку

	std::shared_ptr<BankCell> getBankCell() { return Piece; }

	//BankCell& BankCell::operator =(const BankCell&)

	std::shared_ptr<BankCell> setBankCell() {
		auto Piece = std::make_shared<BankCell>();
	} //даем ячейку

};



int main()
{
	BankCell Exem1; //создали ячейку
	Person Alisa->setBankCell(std::make_shared<BankCell>(Exem1)), Bob->setBankCell(Alisa.getBankCell()); // присвоили
	return 0;
}
