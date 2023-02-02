class CGoods
{
public:
	//成员方法
	void InitGoods(char* n, float p, int c);
	void Setname(char n[]);
	void Getname(char n[]);
	float Getprice();
	int Getcount();
	float GetTotal();
private:
	//数据成员
	char name[20];
	float price;
	int count;
};