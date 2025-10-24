//student details
#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int roll_no;
		string branch;
		void get()
		{
			name="yash";
			roll_no=391;
			branch="cse";
		}
		void show()
		{
			cout<<"name:"<<name<<endl;
			cout<<"roll_no:"<<roll_no<<endl;
			cout<<"branch:"<<branch;
		}
};
int main()
{
	student s;
	s.get();
	s.show();
	return 0;	
}
