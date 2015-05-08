#include<iostream>
using namespace std;
int wczytaj(int A[3][3])
{
int w=1;
int x,y;
while (w==1)
	cout<<"podaj x "<<endl;
	cin>>y;
	cout<<"podaj y"<<endl;
	cin>>x;
	x=x-1;
	y=y-1;
    if ((x<3)&(x>-1)&(y<3)&(y>-1))
    {
        if (A[x][y]==0)
        {
            A[x][y]=1;
            w=0;
            }
        else
        {
                cout<<"juz zajete"<<endl;
                }
      }  
    else 
        cout<<"za duze wymiary";
    
   
}
int spr(int A[3][3])
{
int wynik=0;
for (int i=1;i<=3;i++)
{
    if ((A[i][0]==A[i][1])&(A[i][0]==A[i][2])&(A[i][0]!=0))
        wynik=1;
    if ((A[0][i]==A[1][i])&(A[0][i]==A[2][i])&(A[0][i]!=0))
        wynik=1;
}
if ((A[0][0]==A[1][1])&(A[0][0]==A[2][2])&(A[0][0]!=0))
    wynik=1;

if ((A[0][2]==A[1][1])&(A[0][2]==A[2][0])&(A[0][2]!=0))
    wynik=1;

}
int wys(int A[3][3])
{
}

int main()
{
int Z[8][8];

return 0;
}
