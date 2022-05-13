#include "Player.cpp"
class Defender:public Player
{
	private:
	string tackleAbility;
	string defense1vs1;
	string offsideTrap;
	string areaDefense;
	public:
	void settackleAbility()
	    this->tackleAbility=tackleAbility;
	string gettackleAbility()
	    return this->tackleAbility;
	void setdefense1vs1()
	    this->defense1vs1=defense1vs1;
	string getdefense1vs1()
	    return this->defense1vs1;
	void setoffsideTrap()
	    this->offsideTrap=offsideTrap;
	string getoffsideTrap()
	    return this->offsideTrap;
	void setareaDefense()
	    this->areaDefense=areaDefense;
	string getareaDefense()
	    return this->areaDefense;   
	Defender()
	{
	this->tackleAbility="";
	this->defense1vs1="";
	this->offsideTrap="";
	this->areaDefense="";
	}
	void input()
	{
		cout<<"Nhap kha nang phan ung:";
		getline(cin,this->tackleAbility);
		cout<<"Nhap kha nang tranh chap tay doi:";
		getline(cin,this->defense1vs1);
		cout<<"Nhap kha nang bay viet vi:";
		getline(cin,this->offsideTrap);
		cout<<"Nhap tam hoat dong:";
		getline(cin,this->areaDefense);
	}
	void output()
	{
		cout<<"tackleAbility:"<<this->tackleAbility<<"  "<<"defense1vs1:"
		<<this->defense1vs1<<"  "<<"offsideTrap:"<<this->offsideTrap<<
		"areaDefense:"<<this->areaDefense<<endl;
	}
	string mission()
	{
		cout<<"\nNhiem vu chinh la khong de doi thu vuot qua\n";
		cout<<"\nCung nen  gioi choi chan de ho tro luan chuyen bong\n";
		if(this->tackleAbility=="good" || this->areaDefense=="good")
		{
			cout<<"\nCo the tham gia kien tao hoac lap cong\n";
		}
	}
	double calculateWage()
	{
		int bonus,wage,salary;
		if(this->areaDefense=="good" ||this->tackleAbility=="good" ||this->offsideTrap=="good"||this->defense1vs1=="good")
		{
			salary=2500000;
		}else if(this->areaDefense=="normal" ||this->tackleAbility=="normal" ||this->offsideTrap=="normal"||this->defense1vs1=="normal")
		{
			salary=1200000;
		}else
		{
			salary=800000;
		}
		
		if(this->areaDefense=="good" ||this->tackleAbility=="good" ||this->offsideTrap=="good"||this->defense1vs1=="good")
		{
			bonus=500000;
		}else if(this->areaDefense=="normal" ||this->tackleAbility=="normal" ||this->offsideTrap=="normal"||this->defense1vs1=="normal")
		{
			bonus=300000;
		}else
		{
			salary=150000;
		}
		wage=bonus+salary;
		cout<<"\nTong tien thuong la:"<<salary;
	}
	
	boolean signingCondition()
	{
		if(this->areaDefense=="bad" ||this->tackleAbility=="bad" ||this->offsideTrap=="bad"||this->defense1vs1=="bad")
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
		if(this->areaDefense=="bad" ||this->tackleAbility=="bad" ||this->offsideTrap=="bad"||this->defense1vs1=="bad")
		{
			cout<<"\nViec cham dut hop dong hoan toan co the xay ra\n";
		}else if(this->areaDefense=="normal" ||this->tackleAbility=="normal" ||this->offsideTrap=="normal"||this->defense1vs1=="normal")
		{
			cout<<"\nViec cham dut hop dong kho xay ra\n";
		}else
		{
			cout<<"\nViec cham dut hop dong khong the nao xay ra\n";
		}
	}
	void oppRenewContract()
	{
		if(this->areaDefense=="good" ||this->tackleAbility=="good" ||this->offsideTrap=="good"||this->defense1vs1=="good")
		{
			cout<<"\nRat co the se ki hop dong gia han\n";
		}else if(this->areaDefense=="normal" ||this->tackleAbility=="normal" ||this->offsideTrap=="normal"||this->defense1vs1=="normal")
		{
			cout<<"\nCo the xem xet gia han\n";
		}else
		{
			cout<<"\nKho co the gia han\n";
		}
	}
	void valueBringgingLastSeason()
	{
		int Commerce;
		if(this->areaDefense=="good" ||this->tackleAbility=="good" ||this->offsideTrap=="good"||this->defense1vs1=="good")
		{
			Commerce=50000000;
		}else if(this->areaDefense=="normal" ||this->tackleAbility=="normal" ||this->offsideTrap=="normal"||this->defense1vs1=="normal")
		{
			Commerce=25000000;
		}else
		{
			Commerce=5000000;
		}
		cout<<"\nGia tri  ma cau thu mang lai cho doi bong:"<<Commerce;
	}
};

