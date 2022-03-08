#include <iostream>
#include <time.h>
#include <set>
#include <map>
#include <string>
using namespace std;

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "RUSSIAN");

	set <int> tree;  // �������� � ���������� � �������� ������ ���������
	tree.insert(5);
	tree.insert(7);
	tree.insert(10);
	tree.insert(2);
	tree.insert(23);
	tree.insert(18);

	for (auto &item:tree) // ����� ��������� ������
	{
		cout << item << endl;
	}
	cout << "==========================" << endl;
	// ����� ��������
	cout << boolalpha << (bool)tree.count(5) << endl;
	cout << boolalpha << (bool)tree.count(4) << endl;

	tree.erase(5);
	tree.erase(7);
	cout << "==========================" << endl;
	for (auto& item : tree) // ����� ��������� ������
	{
		cout << item << endl;
	}


	// ��� ������� 
	cout << "==========================" << endl;
	cout << "==========================" << endl;
	map <int, string> myMap;
	myMap.emplace( 157, "�������");
	myMap.emplace( 34,"�����");
	myMap.emplace( 55, "�������");
	myMap.emplace( 91,"�������");
	myMap.emplace( 17, "�������");
	map<int, string>::iterator iter = myMap.begin();
	for (int i = 0; iter!=myMap.end(); i++, iter++)
	{
		cout << i << ") " << iter->first << "\t- " << iter->second << endl;
	}
	cout << "==========================" << endl;
	// ����� ��������� 
	map<int, string>::iterator iter_2;
	iter_2 = myMap.find(55);  // � ������� ���������� �������� �����
	if (iter_2!=myMap.end())
	{
		cout << iter_2->second << " - ���� ���� �� ��������� " << iter_2->first << endl;
	}
	else
	{
		cout << "���� �� �������!" << endl;
	}
	cout << "==========================" << endl;

	// �������� ��������

	//������� ������� � ������ 34 � ������� �������
	map<int, string>::iterator iter_3;
	iter_3 = myMap.find(34);
	myMap.erase(iter_3);
	map<int, string>::iterator iter_4 = myMap.begin();
	for (int i = 0; iter_4 != myMap.end(); i++, iter_4++)
	{
		cout << i << ") " << iter_4->first << "\t- " << iter_4->second << endl;
	}
	cout << "==========================" << endl;
	//������� ������� � ������ 91 � ������� �������
	map<int, string>::iterator iter_5;
	iter_5 = myMap.find(91);
	myMap.erase(iter_5);
	map<int, string>::iterator iter_6 = myMap.begin();
	for (int i = 0; iter_6 != myMap.end(); i++, iter_6++)
	{
		cout << i << ") " << iter_6->first << "\t- " << iter_6->second << endl;
	}




	return 0;
}