#include<iostream>
#include<string>
using namespace std;
constexpr auto MAX = 1000;;
struct MyStruct
{
	string ����;
	int ���;
	int �Ա�;
	string ����;
	string ��ַ;
	string �绰;


};
struct ADD
{
	struct MyStruct ���ݿ�[MAX];
	int ����;
};
struct MyStruct �����[1000]={ };
void show() {

	cout << "1.�����ϵ��" << endl;
	cout << "2.��ʾ��ϵ��" << endl;
	cout << "3.ɾ����ϵ��" << endl;
	cout << "4.������ϵ��" << endl;
	cout << "5.�޸���ϵ��" << endl;
	cout << "6.�����ϵ��" << endl;
	cout << "0.�˳�ͨѶ¼" << endl;



}
void tianjia(ADD *P) {
	if (P->����==MAX)
	{
		cout << "���ݿ��Ѿ�����" << endl;
	}
	else
	{ 
		string ����;
		int ���;
		int �Ա�=0;
		string ����;
		string ��ַ;
		string �绰;

		cout << "������������" << endl;
		cin >> ����;
		P->���ݿ�[P->����].����;
		while (!(�Ա� == 1 || �Ա� == 2))
		{
			cout << "�������Ա�1Ϊ������2ΪŮ��" << endl;
			cin >> �Ա�;
			if (�Ա� == 1 || �Ա� == 2)
			{
				
				P->���ݿ�[P->����].�Ա�;


			}
			else 
			{
				cout << "�������������������" << endl;

			}
		}
		
		P->���ݿ�[P->����].�Ա�;
		cout << "���������䣺" << endl;
		cin >> ���;
		P->���ݿ�[P->����].��� = ���;
		cout << "�����밮�ã�" << endl;
		cin >> ����;
		P->���ݿ�[P->����].���� = ����;
		cout << "�������ַ"<<endl;
		cin >> ��ַ;
		P->���ݿ�[P->����].��ַ = ��ַ;
		cout << "������绰:" << endl;
		cin >> �绰;
		P->���ݿ�[P->����].�绰 = �绰;
		P->����++;
		cout << "������ӳɹ�" << endl;
		system("pause");
		system("cls");//����
 
	}


}
 int main() 
{
	ADD ABS;
	ABS.���� = 0;
	int ѡ��;
	while (true)
	{
		show();

		cin >> ѡ��;
		switch (ѡ��)
		{
		case 0:
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			break;
		case 1:
			tianjia(&ABS);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;


		default:
			break;
		}
	}


}