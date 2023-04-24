#include <iostream>
#include <string>
using namespace std;
class Marshrut
{
	//атрибуты
	string otpravlenie;
	string naznachenie;
	float vremy;
	
public:
	Marshrut();//конструктор без параметров
	Marshrut(string, string, float);//конструктор с параметрами
	Marshrut(const Marshrut&);//конструктор копирования
	~Marshrut();//деструктор
	string get_otpravlenie();//селектор
	void set_otpravlenie(string);//модификатор
	string get_naznachenie();//селектор
	void set_naznachenie(string); //модификатор
	float get_vremy();//селектор
	void set_vremy(float); //модификатор
	void show();//просмотр атрибутов
};
