class CGoods
{
public:
	//��Ա����
	void InitGoods(char* n, float p, int c);
	void Setname(char n[]);
	void Getname(char n[]);
	float Getprice();
	int Getcount();
	float GetTotal();
private:
	//���ݳ�Ա
	char name[20];
	float price;
	int count;
};