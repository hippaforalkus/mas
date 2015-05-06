#include<iostream>
using namespace std;
int silnia(int x)
{
  if(x<1)
    return 1;

  return x*silnia(x-1);
}
int main()
{
	int a,s,m,x;
	cout<<"podaj liczbe \n";
	cin>>a;
	x=a;
	cout<<"ktory sposob?\n";
	cin>>m;
	switch(m)
	{
		case 1:{
				s=1;
				for(x=1;x<=a;x++)
				s=s*x;
			break;

		}
		case 2:{
				s=1;
				for(x=a;x>=1;x--)
				s=s*x;
			break;
		}
		case 3:{
				s=1;
				while(x>0){
				s=s*x;
				x--;
			}
			break;
		}
		case 4:{
				s=1;
				do
				{
					s=s*x;
					x--;
				}while(x!=0);
			break;
		}
		case 5:{
				s=1;
				start1:
					s=x*s;
					x--;
					if (x>0) goto start1;
			break;
		}
		case 6:{
				s=silnia(x);
			break;
		}
	}
cout<<"Silnia to "<<s;

return 0;
}
