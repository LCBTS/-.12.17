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
void show(ADD *p) {

	if (p->����==0)
	{
		cout << "��ǰͨѶ¼Ϊ��" << endl;
		
	}
		for (int i = 0; i < p->����; i++)
		{
			cout << "��ַ��" << p->���ݿ�[i].��ַ << "\t";
			cout << "������" << p->���ݿ�[i].���� << "\t";
			cout << "��ͣ�" << p->���ݿ�[i].��� << "\t";
			cout << "�Ա�" << (p->���ݿ�[i].�Ա� == 1 ? "����" : "Ů��")<< "\t";
			cout <<"���ã�" << p->���ݿ�[i].���� << "\t";
			cout << "�绰��" << p->���ݿ�[i].�绰 << endl;

		}
		system("pause");
		system("cls");//����

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
		P->���ݿ�[P->����].����=����;
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
		
		P->���ݿ�[P->����].�Ա�=�Ա�;
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
int chaz(ADD *p,string a)
{
	for (int i = 0; i < p->����; i++)
	{
		if (p->���ݿ�[i].��ַ == a || p->���ݿ�[i].���� == a || p->���ݿ�[i].��� || p->���ݿ�[i].�Ա� || p->���ݿ�[i].���� == a || p->���ݿ�[i].�绰 == a)
		{
			return i;
		}
	
	}
	return -1;

		}
int chazao(ADD* p, string a)
{
	int AA = 0;
	for (int i = 0; i < p->����; i++)
	{
		if (p->���ݿ�[i].��ַ==a||p->���ݿ�[i].����==a|| p->���ݿ�[i].���|| p->���ݿ�[i].�Ա�|| p->���ݿ�[i].����==a|| p->���ݿ�[i].�绰==a)
		{
			 
			cout << "��ѯ��������" << i+1 << "��" << endl;
			cout << "��ַ��" << p->���ݿ�[i].��ַ << "\t";
			cout << "������" << p->���ݿ�[i].���� << "\t";
			cout << "��ͣ�" << p->���ݿ�[i].��� << "\t";
			cout << "�Ա�" << (p->���ݿ�[i].�Ա� == 1 ? "����" : "Ů��") << "\t";
			cout << "���ã�" << p->���ݿ�[i].���� << "\t";
			cout << "�绰��" << p->���ݿ�[i].�绰 << endl;
		
		}
		else
		{
			return 1;
		}


	}


}
void shanchu(ADD *p, string a,int i)
{


				for (i; i < p->����; i++)
				{
					p->���ݿ�[i] = p->���ݿ�[i + 1];

				}
				p->����--;
				cout << "��������ɾ��" << endl;

	
}
void xiugai(ADD*P, string a,int i)
{
		string ����;
		int ���;
		int �Ա� = 0;
		string ����;
		string ��ַ;
		string �绰;

		cout << "������������" << endl;
		cin >> ����;
		P->���ݿ�[i].���� = ����;
		while (!(�Ա� == 1 || �Ա� == 2))
		{
			cout << "�������Ա�1Ϊ������2ΪŮ��" << endl;
			cin >> �Ա�;
			if (�Ա� == 1 || �Ա� == 2)
			{

				P->���ݿ�[i].�Ա�;


			}
			else
			{
				cout << "�������������������" << endl;

			}
		}

		P->���ݿ�[i].�Ա� = �Ա�;
		cout << "���������䣺" << endl;
		cin >> ���;
		P->���ݿ�[i].��� = ���;
		cout << "�����밮�ã�" << endl;
		cin >> ����;
		P->���ݿ�[i].���� = ����;
		cout << "�������ַ" << endl;
		cin >> ��ַ;
		P->���ݿ�[i].��ַ = ��ַ;
		cout << "������绰:" << endl;
		cin >> �绰;
		P->���ݿ�[i].�绰 = �绰;
		P->����++;
		cout << "�����޸ĳɹ�" << endl;
		system("pause");
		system("cls");//����
	



}
void qingkong(ADD* p) {
	string aa;
	cout << "�Ƿ����Ҫ������ݣ��������������YES����������NO" << endl;
	cin >> aa;
	if (aa=="YES")
	{
		p->���� = 0;
		cout << "���ݿ��Ѿ����" << endl;
	}
	else
	{
		return;
	}
	


}
 int main() 
{
	ADD ABS;
	ABS.���� = 0;
	int ѡ��;
	while (true)
	{
		string a;
		string b;
		string sss;
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
			show(&ABS);
			break;
		case 3:
		{
			cout << "������ɾ����Ϣ����" << endl;
			cin >> b;
			int S = chaz(&ABS,b);
			if (S == -1)
			{
				cout << "δ�ҵ�������" << endl;
			}
			else
			{
				shanchu(&ABS, b,S);
			}
			break;
		}
		case 4:
		{
			cout << "�������ѯ��Ϣ����" << endl;
			cin >> a;
			int as = chazao(&ABS, a);
			if (as == -1)
			{
				cout << "δ�ҵ������������" << endl;
			}
			break;
		}
		case 5:
		{		
			string cc;
			cout << "������Ҫ�޸ĵ�����" << endl;
			cin >> cc;
			int i = chaz(&ABS,cc);
			if (i == -1)
			{
				cout << "δ�ҵ�������" << endl;
			}
			else
			{
				xiugai(&ABS, sss,i);
				break;
			}		
		}
		case 6:
			qingkong(&ABS);
			break;
		default:
			break;
		}
	}


}