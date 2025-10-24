//employee details
#include<iostream>
using namespace std;
class employee{
	private:
		string name;
		int eid;
		int salary;
		public:
			void get()
			{
				name="heena";
				eid=420;
				salary=100000;
			}
			void show()
			{
			cout<<"name:"<<name<<endl;
			cout<<"eid:"<<eid<<endl;
			cout<<"salary:"<<salary;
			}
};
int main()
{
	employee e;
	e.get();
	e.show();
	return 0;
	}
