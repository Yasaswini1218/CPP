#include<iostream>
using namespace std;
class sample{

	
		public:
			int x;
			void get(int n)
			{
			   x=n;	
			}
			int show()
			{
				return x;
			}
};
int main()
{
	sample s;
	s.get(427);
	int p=s.show();
	cout<<p;
	return 0;
}
