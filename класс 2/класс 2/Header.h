#include <iostream>
#include <string>
using namespace std;
class Marshrut
{
	//��������
	string otpravlenie;
	string naznachenie;
	float vremy;
	
public:
	Marshrut();//����������� ��� ����������
	Marshrut(string, string, float);//����������� � �����������
	Marshrut(const Marshrut&);//����������� �����������
	~Marshrut();//����������
	string get_otpravlenie();//��������
	void set_otpravlenie(string);//�����������
	string get_naznachenie();//��������
	void set_naznachenie(string); //�����������
	float get_vremy();//��������
	void set_vremy(float); //�����������
	void show();//�������� ���������
};
