#include <iostream>
using namespace std;
int main()
  {
	int stq,ndq,rdq,mid,final;
	float Totalq,Total;
	cout<<"--------QUIZZES--------"<<endl;
	cout<<"Enter first quizz(10) :";
	cin>>stq;
	cout<<"Enter second quizz(10):";
	cin>>ndq;
	cout<<"Enter third quizz(10) :";
	cin>>rdq;
	cout<<"-------MID TERM-------"<<endl;
	cout<<"Enter mid-term(40):";
	cin>>mid;
	cout<<"---------FINAL---------"<<endl;
	cout<<"Enter final(50):";
	cin >>final;
	Totalq= float (stq+ndq+rdq)/3;
	cout<<"Quizz Total:"<<Totalq<<endl;
	cout<<"Mid term:"<<mid<<endl;
        cout<<"Final:"<<final<<endl;
	Total=Totalq+mid+final;
	cout<<"Total:"<<Total<<endl;
	cout<<"Your score is"<<(Total>=50?" pass":" fail");
	return(0);
}
