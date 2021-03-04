#include <iostream>
using namespace std;
class Person
{
	//умеет давать информацию о ячейке, которой владеет - геттер
	//умеет давать информацию жив или мерт (в зони видимости или нет), дэлитнули или нет, создали или нет
	//умеет умирать
	//умеет получать ячейку, конструктор
public:
	shared_ptr<BankCell> BC = nullptr(new BankCell); //даем челу ячейку

	Person(shared_ptr<BankCell> BC ) : BC(BC) { cout << "Person open Bank Cell" << endl; } //присваиваем челу ячейку

	shared_ptr<BankCell> getBankCell() { return BC; };


	void setBankCell(shared_ptr<BankCell> BC_) { this->BC = BC_; } //даем ячейку

};

class BankCell //мб зафрендить
{
	//умеет давать информацию о своих владельцах, пустая она или нет (нуллптр или нет), если нет, то смерть (не, оказывается не умеет)
	//умеет умирать если пустая (дэлитнуть указатель)
	//
public:
	BankCell() { std::cout << "BankCell exist\n"; }
	~BankCell() { std::cout << "BankCell destroyed\n"; }
};

int main()
{
	BankCell Exem1;
	Person Alisa(*Exem1), Bob(*Exem1);

}
