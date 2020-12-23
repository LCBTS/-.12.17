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

//建立一个空的链表
string jianli(MyStruct2 *L)
{
	L->next = NULL;
	return "创建完成";
}
//判断链表是否为空表
int panduan(MyStruct2 *L)
{
	if (L->next==NULL)
	{
		cout<< "是空表"<<endl;
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
//单链表销毁
void xiaohui(MyStruct2* L) {

	MyStruct2 *p = new MyStruct2;
	while (L)
	{
		p = L;
		L=L->next ;
		delete p;
	}
	cout << "销毁成功" << endl;



}
//清空单链表成为一个空表
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
	cout << "修改成功" << endl;
}
//建立链表
int jian(MyStruct2* L,int i) {
	int B = 1;
	L->next = NULL;
	for ( i ; i>0; i--)
	{
	MyStruct2* m = new MyStruct2;
	cout << "请输入年纪" << endl;
	cin >> m->data.age;
	cout << "请输入性别" << endl;
	cin >> m->data.sex;
	cout << "请输入姓名" << endl;
	cin >> m->data.name;
	m->next = L->next;
	L->next = m;
	B++;
	cout << "建立成功" << endl;
	}
	return B;
	
};
//取单链表中第i个元素的内容
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
		cout << "此元素数据不存在" << endl;
	}
	else
	{
		cout << "第" << a << "个元素为:" << endl;
		cout << "年纪" << p->data.age<< endl;
		cout << "姓名" << p->data.name << endl;
		cout << "性别" << p->data.sex << endl;
	}


}
//显示链表中所有的数据
void show(MyStruct2 *L) {
	int a=panduan(L);
	MyStruct2* p = new MyStruct2;;
	p = L->next;
	for (int i = 0; i < a; i++)
	{
		cout << "年纪" << p->data.age << "\t";
		cout << "性别" << p->data.sex << "\t";
		cout << "姓名" << p->data.name << endl;
		p = p->next;
	}
	
}
//按值查找指定数据获取该数据所在的位置
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
		cout << "未找到该数据" << endl;
	}
	else
	{
		cout << "该数据在" << num  << "位" << endl;
		return num;
	}


}
//在第i个节点前插入值为e的新节点
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
			cout << "此节点不存在" << endl;
			break;
		}
	}
	cout << "请输入年纪" << endl;
	cin >> s->data.age;
	cout << "请输入性别" << endl;
	cin >> s->data.sex;
	cout << "请输入姓名" << endl;
	cin >> s->data.name;
	s->next = p->next;
	p->next=s;
	cout << "插入数据成功" << endl;
}
//删除第i个节点
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
	cout << "删除成功" << endl;



}
int main()
{
	string a;
	MyStruct2 *l = new MyStruct2;
	int ss = jian(l, 4);
	fanhui(l, 3);
	cout << "请输入搜索姓名" << endl;
	cin >> a;
	weiz(l,a);
	charu(l, 2);
	show(l);
	shanhcu(l,3);
	show(l);
	system("pause");
}