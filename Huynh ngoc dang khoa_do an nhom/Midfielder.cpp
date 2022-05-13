#include "Player.cpp"
class Midfielder:public Player
{
	private:
	string defenseSupport;
	string AttackSupport;
	string boxToBoxAble;
	float distanceMove;
	string cornerKick;
	public:
	void setdefenseSupport()
	    this->defenseSupport=defenseSupport;
	string getdefenseSupport()
	    return this->defenseSupport;
	void setAttackSupport()
	    this->AttackSupport=AttackSupport;
	string getAttackSupport()
	    return this->AttackSupport;
	void setboxToBoxAble()
	    this->boxToBoxAble=boxToBoxAble;
	string getboxToBoxAble()
	    return this->boxToBoxAble;
	void setdistanceMove()
	    this->distanceMove=distanceMove;
	float getdistanceMove()
	    return this->distanceMove;    
	void setcornerKick()
	    this->cornerKick=cornerKick;
	string getcornerKick()
	    return this->cornerKick;   
	Midfielder()
	{
	this->defenseSupport="";
	this->AttackSupport="";
	this->boxToBoxAble="";
	this->distanceMove=0;
	this->cornerKick="";
	}
	void input()
	{
		cout<<"Nhap kha nang ho tro phong ngu:";
		getline(cin,this->defenseSupport);
		cout<<"Nhap kha nang ho tro tan cong:";
		getline(cin,this->AttackSupport);
		cout<<"Nhap kha nang len cong ve thu:";
		getline(cin,this->boxToBoxAble);
		cout<<"Nhap quang duong di chuyen:";
		cin>>this->distanceMove;
		cout<<"Nhap kha nang phat goc";
		getline(cin,this->cornerKick);
	}
	void output()
	{
		cout<<"defenseSupport:"<<this->defenseSupport<<"  "<<"AttackSupport:"
		<<this->AttackSupport<<"  "<<"boxToBoxAble:"<<this->boxToBoxAble<<"  "<<
		"distanceMove:"<<this->distanceMove<<"  "<<"cornerKick:"<<this->cornerKick<<endl;
	}
	string mission()
	{
		cout<<"\nNhiem vu chinh la am trich loi choi\n";
		cout<<"\nCung nen  gioi choi chan de ho tro luan chuyen bong\n";
		if(this->AttackSupport=="good" || this->boxToBoxAble=="good" ||this->cornerKick=="good")
		{
			cout<<"\nCo the tham gia kien tao hoac lap cong\n";
			cout<<"\nCo the lui ve phong ngu khi can\n";
		}
	}
	double calculateWage()
	{
		int bonus,wage,salary;
		if(this->AttackSupport=="good" ||this->defenseSupport=="good" ||this->boxToBoxAble=="good"||this->cornerKick=="good")
		{
			salary=4000000;
		}else if(this->AttackSupport=="normal" ||this->defenseSupport=="normal" ||this->boxToBoxAble=="normal"||this->cornerKick=="normal")
		{
			salary=3000000;
		}else
		{
			salary=1800000;
		}
		
		for(int i=1;i<this->distanceMove;i++)
		{
			bonus+=1000000;
		}
		wage=bonus+salary;
		cout<<"\nTong tien thuong la:"<<salary;
	}
	
	boolean signingCondition()
	{
		if(this->AttackSupport=="bad" ||this->defenseSupport=="bad" ||this->boxToBoxAble=="bad"||this->cornerKick=="bad")
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
		if(this->AttackSupport=="bad" ||this->defenseSupport=="bad" ||this->boxToBoxAble=="bad"||this->cornerKick=="bad")
		{
			cout<<"\nViec cham dut hop dong hoan toan co the xay ra\n";
		}else if(this->AttackSupport=="normal" ||this->defenseSupport=="normal" ||this->boxToBoxAble=="normal"||this->cornerKick=="normal")
		{
			cout<<"\nViec cham dut hop dong kho xay ra\n";
		}else
		{
			cout<<"\nViec cham dut hop dong khong the nao xay ra\n";
		}
	}
	void oppRenewContract()
	{
		if(this->AttackSupport=="good" ||this->defenseSupport=="good" ||this->boxToBoxAble=="good"||this->cornerKick=="good")
		{
			cout<<"\nRat co the se ki hop dong gia han\n";
		}else if(this->AttackSupport=="normal" ||this->defenseSupport=="normal" ||this->boxToBoxAble=="normal"||this->cornerKick=="normal")
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
		if(this->AttackSupport=="good" ||this->defenseSupport=="good" ||this->boxToBoxAble=="good"||this->cornerKick=="good")
		{
			Commerce=70000000;
		}else if(this->AttackSupport=="normal" ||this->defenseSupport=="normal" ||this->boxToBoxAble=="normal"||this->cornerKick=="normal")
		{
			Commerce=45000000;
		}else
		{
			Commerce=6000000;
		}
		cout<<"\nGia tri  ma cau thu mang lai cho doi bong:"<<Commerce;
	}
};

