#include<iostream>
#include<string>
using namespace std;
constexpr auto MAX = 1000;;
struct MyStruct
{
	string 姓名;
	int 年纪;
	int 性别;
	string 爱好;
	string 地址;
	string 电话;


};
struct ADD
{
	struct MyStruct 数据库[MAX];
	int 数量;
};
struct MyStruct 数组库[1000]={ };

void show() {

	cout << "1.添加联系人" << endl;
	cout << "2.显示联系人" << endl;
	cout << "3.删除联系人" << endl;
	cout << "4.查找联系人" << endl;
	cout << "5.修改联系人" << endl;
	cout << "6.清空联系人" << endl;
	cout << "0.退出通讯录" << endl;



}
void show(ADD *p) {

	if (p->数量==0)
	{
		cout << "当前通讯录为零" << endl;
		
	}
		for (int i = 0; i < p->数量; i++)
		{
			cout << "地址：" << p->数据库[i].地址 << "\t";
			cout << "姓名：" << p->数据库[i].姓名 << "\t";
			cout << "年纪：" << p->数据库[i].年纪 << "\t";
			cout << "性别：" << (p->数据库[i].性别 == 1 ? "男生" : "女生")<< "\t";
			cout <<"爱好：" << p->数据库[i].爱好 << "\t";
			cout << "电话：" << p->数据库[i].电话 << endl;

		}
		system("pause");
		system("cls");//清屏

}
void tianjia(ADD *P) {
	if (P->数量==MAX)
	{
		cout << "数据库已经满了" << endl;
	}
	else
	{ 
		string 姓名;
		int 年纪;
		int 性别=0;
		string 爱好;
		string 地址;
		string 电话;

		cout << "请输入姓名：" << endl;
		cin >> 姓名;
		P->数据库[P->数量].姓名=姓名;
		while (!(性别 == 1 || 性别 == 2))
		{
			cout << "请输入性别：1为男生，2为女生" << endl;
			cin >> 性别;
			if (性别 == 1 || 性别 == 2)
			{
				
				P->数据库[P->数量].性别;


			}
			else 
			{
				cout << "输入的有误请重新输入" << endl;

			}
		}
		
		P->数据库[P->数量].性别=性别;
		cout << "请输入年龄：" << endl;
		cin >> 年纪;
		P->数据库[P->数量].年纪 = 年纪;
		cout << "请输入爱好：" << endl;
		cin >> 爱好;
		P->数据库[P->数量].爱好 = 爱好;
		cout << "请输入地址"<<endl;
		cin >> 地址;
		P->数据库[P->数量].地址 = 地址;
		cout << "请输入电话:" << endl;
		cin >> 电话;
		P->数据库[P->数量].电话 = 电话;
		P->数量++;
		cout << "数据添加成功" << endl;
		system("pause");
		system("cls");//清屏
 
	}


}
int chaz(ADD *p,string a)
{
	for (int i = 0; i < p->数量; i++)
	{
		if (p->数据库[i].地址 == a || p->数据库[i].姓名 == a || p->数据库[i].年纪 || p->数据库[i].性别 || p->数据库[i].爱好 == a || p->数据库[i].电话 == a)
		{
			return i;
		}
	
	}
	return -1;

		}
int chazao(ADD* p, string a)
{
	int AA = 0;
	for (int i = 0; i < p->数量; i++)
	{
		if (p->数据库[i].地址==a||p->数据库[i].姓名==a|| p->数据库[i].年纪|| p->数据库[i].性别|| p->数据库[i].爱好==a|| p->数据库[i].电话==a)
		{
			 
			cout << "查询到数据在" << i+1 << "行" << endl;
			cout << "地址：" << p->数据库[i].地址 << "\t";
			cout << "姓名：" << p->数据库[i].姓名 << "\t";
			cout << "年纪：" << p->数据库[i].年纪 << "\t";
			cout << "性别：" << (p->数据库[i].性别 == 1 ? "男生" : "女生") << "\t";
			cout << "爱好：" << p->数据库[i].爱好 << "\t";
			cout << "电话：" << p->数据库[i].电话 << endl;
		
		}
		else
		{
			return 1;
		}


	}


}
void shanchu(ADD *p, string a,int i)
{


				for (i; i < p->数量; i++)
				{
					p->数据库[i] = p->数据库[i + 1];

				}
				p->数量--;
				cout << "该数据已删除" << endl;

	
}
void xiugai(ADD*P, string a,int i)
{
		string 姓名;
		int 年纪;
		int 性别 = 0;
		string 爱好;
		string 地址;
		string 电话;

		cout << "请输入姓名：" << endl;
		cin >> 姓名;
		P->数据库[i].姓名 = 姓名;
		while (!(性别 == 1 || 性别 == 2))
		{
			cout << "请输入性别：1为男生，2为女生" << endl;
			cin >> 性别;
			if (性别 == 1 || 性别 == 2)
			{

				P->数据库[i].性别;


			}
			else
			{
				cout << "输入的有误请重新输入" << endl;

			}
		}

		P->数据库[i].性别 = 性别;
		cout << "请输入年龄：" << endl;
		cin >> 年纪;
		P->数据库[i].年纪 = 年纪;
		cout << "请输入爱好：" << endl;
		cin >> 爱好;
		P->数据库[i].爱好 = 爱好;
		cout << "请输入地址" << endl;
		cin >> 地址;
		P->数据库[i].地址 = 地址;
		cout << "请输入电话:" << endl;
		cin >> 电话;
		P->数据库[i].电话 = 电话;
		P->数量++;
		cout << "数据修改成功" << endl;
		system("pause");
		system("cls");//清屏
	



}
void qingkong(ADD* p) {
	string aa;
	cout << "是否真的要清空数据，如果决定请输入YES否则请输入NO" << endl;
	cin >> aa;
	if (aa=="YES")
	{
		p->数量 = 0;
		cout << "数据库已经清空" << endl;
	}
	else
	{
		return;
	}
	


}
 int main() 
{
	ADD ABS;
	ABS.数量 = 0;
	int 选择;
	while (true)
	{
		string a;
		string b;
		string sss;
		show();
		cin >> 选择;
		switch (选择)
		{
		case 0:
			cout << "欢迎下次使用" << endl;
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
			cout << "请输入删除信息数据" << endl;
			cin >> b;
			int S = chaz(&ABS,b);
			if (S == -1)
			{
				cout << "未找到该数据" << endl;
			}
			else
			{
				shanchu(&ABS, b,S);
			}
			break;
		}
		case 4:
		{
			cout << "请输入查询信息数据" << endl;
			cin >> a;
			int as = chazao(&ABS, a);
			if (as == -1)
			{
				cout << "未找到您输入的数据" << endl;
			}
			break;
		}
		case 5:
		{		
			string cc;
			cout << "请输入要修改的数据" << endl;
			cin >> cc;
			int i = chaz(&ABS,cc);
			if (i == -1)
			{
				cout << "未找到该数据" << endl;
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