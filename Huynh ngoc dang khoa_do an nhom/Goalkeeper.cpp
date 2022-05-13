#include "Player.cpp"
class Goalkeeper:public Player
{
	private:
	string reflexesAble;
	int numOfKeptCleanSheet;
	int goalSaveRate;
	public:
	void setreflexesAble()
	    this->reflexesAble=reflexesAble;
	string getreflexesAble()
	    return this->reflexesAble;
	void setnumOfKeptCleanSheet()
	    this->numOfKeptCleanSheet=numOfKeptCleanSheet;
	int getnumOfKeptCleanSheet()
	    return this->numOfKeptCleanSheet;
	void setgoalSaveRate()
	    this->goalSaveRate=goalSaveRate;
	int getgoalSaveRate()
	    return this->goalSaveRate;
	Goalkeeper()
	{
	this->reflexesAble="";
	this->numOfKeptCleanSheet=0;
	this->goalSaveRate=0;
	}
	void input()
	{
		cout<<"Nhap kha nang phan xa:";
		getline(cin,this->reflexesAble);
		cout<<"Nhap so tran giu sach luoi:";
		cin>>this->numOfKeptCleanSheet;
		cout<<"Nhap ti le cuu thua:";
		cin>>this->goalSaveRate;
	}
	void output()
	{
		cout<<"reflexesAble:"<<this->reflexesAble<<"  "<<"numOfKeptCleanSheet:"
		<<this->numOfKeptCleanSheet<<"  "<<"goalSaveRate:"<<this->goalSaveRate<<endl;
	}
	string mission()
	{
		cout<<"\nNhiem vu chinh la giu sach luoi\n";
		cout<<"\nCung nen  gioi choi chan de ho tro luan chuyen bong\n";
	}
	double calculateWage()
	{
		int bonus,wage,salary;
		if(this->goalSaveRate>8 ||this->reflexesAble=="good")
		{
			salary=3000000;
		}else if(this->goalSaveRate>6 ||this->reflexesAble=="normal")
		{
			salary=1800000;
		}else
		{
			salary=1000000;
		}
		for(int i=1;i<this->numOfKeptCleanSheet;i++)
		{
			bonus+=100000;
		}
		wage=bonus+salary;
		cout<<"\nTong tien thuong la:"<<salary;
	}
	
	boolean signingCondition()
	{
		if(this->reflexesAble=="bad" && this->goalSaveRate<5 && this->numOfKeptCleanSheet<6)
		{
			return false;
			cout<<"\nKhong dat yeu cau\n";
		}else
		{
			return true;
			cout<<"\nO lai voi doi bong\n";
		}
	}
	void riskOfTerminateContract()
	{
		if(this->goalSaveRate<5 && this->reflexesAble=="bad" && this->numOfKeptCleanSheet<6)
		{
			cout<<"\nViec cham dut hop dong hoan toan co the xay ra\n";
		}else if(this->goalSaveRate<7 && this->reflexesAble=="normal" && this->numOfKeptCleanSheet<8)
		{
			cout<<"\nViec cham dut hop dong kho xay ra\n";
		}else
		{
			cout<<"\nViec cham dut hop dong khong the nao xay ra\n";
		}
	}
	void oppRenewContract()
	{
		if(this->goalSaveRate<9 && this->reflexesAble=="good" && this->numOfKeptCleanSheet<10)
		{
			cout<<"\nRat co the se ki hop dong gia han\n";
		}else if(this->goalSaveRate<7 && this->reflexesAble=="normal" && this->numOfKeptCleanSheet<8)
		{
			cout<<"\nCo the xem xet gia han\n";
		}else
		{
			cout<<"\nKho co the gia han\n";
		}
	}
	void valueBringgingLastSeason()
	{
		int Commerce=this->numOfKeptCleanSheet*20+this->goalSaveRate*40;
		cout<<"\nGia tri  ma cau thu mang lai cho doi bong:"<<Commerce;
	}
};

