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
		P->数据库[P->数量].姓名;
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
		
		P->数据库[P->数量].性别;
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
 int main() 
{
	ADD ABS;
	ABS.数量 = 0;
	int 选择;
	while (true)
	{
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