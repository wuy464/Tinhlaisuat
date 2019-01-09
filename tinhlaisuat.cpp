#include <iostream>
using namespace std;

int main()
{
	float s;	 //so tien gui ban dau
	float ls; 	// lai suat
	float stkv;	// so tien ki vong
	int sn;		// so nam can co de dat duoc so tien ki vong
	
	cout<<"nhap vao so tien, lai suat, so tien ki vong  =";
	cin>>s>>ls>>stkv;
	while(s<0||ls<0||stkv<0||stkv<s)
	{
		cout<<"ban da nhap sai, moi nhap lai "<<endl;
		cout<<"nhap vao so tien, lai suat, so tien ki vong  =";
		cin>>s>>ls>>stkv;
		
	}
	while(s<=stkv)
		{
			s=s+(s*ls)/100;
			sn++;
		}
		cout<<"sau"<< sn <<"nam ban nhan duoc so tien la = "<<stkv<<endl;
		return 0;
}


