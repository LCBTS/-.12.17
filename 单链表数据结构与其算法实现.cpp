#include<iostream>
using namespace std;
struct MyStruct
{
	int age=0;
	string name;
	string sex;

};
struct MyStruct2
{
	 MyStruct data;
	 MyStruct2 *next=NULL;

};

//����һ���յ�����
string jianli(MyStruct2 *L)
{
	L->next = NULL;
	return "�������";
}
//�ж������Ƿ�Ϊ�ձ�
int panduan(MyStruct2 *L)
{
	if (L->next==NULL)
	{
		cout<< "�ǿձ�"<<endl;
	}
	else
	{
		MyStruct2* p = new MyStruct2;
		p = L->next;
		int a = 0;
		while (p)
		{
			p = p->next;
			++a;
		}
		return a;		
	}
}
//����������
void xiaohui(MyStruct2* L) {

	MyStruct2 *p = new MyStruct2;
	while (L)
	{
		p = L;
		L=L->next ;
		delete p;
	}
	cout << "���ٳɹ�" << endl;



}
//��յ������Ϊһ���ձ�
void qingkong(MyStruct2* L) 
{
	MyStruct2* p = new MyStruct2;
	MyStruct2* q = new MyStruct2;
	p = L->next;
	while (p)
	{
		q = p->next;
		delete p;
		p = q;
	}
	L->next = NULL;
	cout << "�޸ĳɹ�" << endl;
}
//��������
int jian(MyStruct2* L,int i) {
	int B = 1;
	L->next = NULL;
	for ( i ; i>0; i--)
	{
	MyStruct2* m = new MyStruct2;
	cout << "���������" << endl;
	cin >> m->data.age;
	cout << "�������Ա�" << endl;
	cin >> m->data.sex;
	cout << "����������" << endl;
	cin >> m->data.name;
	m->next = L->next;
	L->next = m;
	B++;
	cout << "�����ɹ�" << endl;
	}
	return B;
	
};
//ȡ�������е�i��Ԫ�ص�����
void fanhui(MyStruct2 *L,int a)
{
	int num = 1;
	MyStruct2* p = new MyStruct2;
	p = L->next;
	for (int i=1;i< a; i++)
	{
		p = p->next;
		num++;
	}
	if (p==nullptr||(num>a))
	{
		cout << "��Ԫ�����ݲ�����" << endl;
	}
	else
	{
		cout << "��" << a << "��Ԫ��Ϊ:" << endl;
		cout << "���" << p->data.age<< endl;
		cout << "����" << p->data.name << endl;
		cout << "�Ա�" << p->data.sex << endl;
	}


}
//��ʾ���������е�����
void show(MyStruct2 *L) {
	int a=panduan(L);
	MyStruct2* p = new MyStruct2;;
	p = L->next;
	for (int i = 0; i < a; i++)
	{
		cout << "���" << p->data.age << "\t";
		cout << "�Ա�" << p->data.sex << "\t";
		cout << "����" << p->data.name << endl;
		p = p->next;
	}
	
}
//��ֵ����ָ�����ݻ�ȡ���������ڵ�λ��
int weiz(MyStruct2 *L,string name) 
{
	MyStruct2* p = new MyStruct2;
	p = L->next;
	int num = 1;
	while (!(p->data.name==name||p==nullptr))
	{
		p = p->next;
		num++;
	}
	if (p==nullptr)
	{
		cout << "δ�ҵ�������" << endl;
	}
	else
	{
		cout << "��������" << num  << "λ" << endl;
		return num;
	}


}
//�ڵ�i���ڵ�ǰ����ֵΪe���½ڵ�
void charu(MyStruct2* L, int i) {
	MyStruct2* p = new MyStruct2;
	MyStruct2* s= new MyStruct2;
	int num=1;
	p = L->next;
	while (!(num==i-1))
	{
		p = p->next;
		num++;
		if (num>i||p==nullptr)
		{
			cout << "�˽ڵ㲻����" << endl;
			break;
		}
	}
	cout << "���������" << endl;
	cin >> s->data.age;
	cout << "�������Ա�" << endl;
	cin >> s->data.sex;
	cout << "����������" << endl;
	cin >> s->data.name;
	s->next = p->next;
	p->next=s;
	cout << "�������ݳɹ�" << endl;
}
//ɾ����i���ڵ�
void shanhcu(MyStruct2* L, int a) {
	MyStruct2* p = new MyStruct2;
	MyStruct2 *q = new MyStruct2;
	p = L->next;
	int num=1;
	while (!(num==a-1))
	{
		p = p->next;
		num++;
	}
	q = p->next;
	p->next = q->next->next;
	delete q;
	cout << "ɾ���ɹ�" << endl;



}
int main()
{
	string a;
	MyStruct2 *l = new MyStruct2;
	int ss = jian(l, 4);
	fanhui(l, 3);
	cout << "��������������" << endl;
	cin >> a;
	weiz(l,a);
	charu(l, 2);
	show(l);
	shanhcu(l,3);
	show(l);
	system("pause");
}