#include<iostream>
using namespace std;
//建立抽象数据类型关于虚数的相关算法实现。
class  comples
{
public:
comples(float a, float b)
	{
		realpart = a;
		imagpart = b;
	}
void setxushu(float a, float b)
{
	    realpart = a;
		imagpart = b;
}
void xushu() 
{
	cout << realpart << "+ " << imagpart << "i" << endl;
}
void xiangjia(const comples &a) 
{
	    z1 = a.imagpart + imagpart;
		z2 = a.realpart + realpart;
	cout << z2 << "+ " << z1<< "i" << endl;
}
void xiangcheng(const comples &a) {

	z3 = a.imagpart * imagpart;
	z4 = a.realpart * realpart;
	cout << z4 << "+ " << z3 << "i" << endl;
}
void xiangchu()
{

	imagpart = z3 / z1;
	realpart = z4 / z2;
	cout << realpart << "+ " << imagpart << "i" << endl;
}

private:
	float z1;
	float z2;
	float z3;
	float z4;
	float realpart;
	float imagpart;

};
//使用遍历算法计算稀疏一元多项式



int main() 
{
	
	comples c(8,6);
	comples b(4, 3);
	c.xiangjia(b);
	c.xiangcheng(b);
	c.xiangchu();
}