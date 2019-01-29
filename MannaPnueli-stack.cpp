#include<iostream>
using namespace std;
class stack
{
      public:
      stack() {top = 0;}
      int push(int value)
      {
           if (top+1<=maxsize)  {
                top++;
                V[top]=value;
                return 1;}
        return 0;}
        int pop(int *old);
        int m() {return top;}
        int n() { return (top<0);}
        private :
        int top;
        int V[100];
        int maxsize=100;
};

int x;
stack somestack;

int main()
{
cout<<"x=";cin>>x;
somestack.push((x+1)-3);
int direction=1;
int oldval1;
while (somestack.m()>=1) {
    cout<<endl<<somestack.m();
    if (direction==1)
            {
            somestack.pop(&oldval1);
            somestack.push(oldval1);
            somestack.push(oldval1-1);
                                        if (oldval1==0) direction=0;}
                                        else
                                        {
                                            if(x >= 12)
        {
                        somestack.pop(&oldval1);
                        somestack.push(oldval1);
                        somestack.pop(&oldval1);
            }
                                            else{
                                            somestack.pop(&oldval1);
                                            somestack.push(oldval1+1);
                                            somestack.pop(&oldval1-1);
                                            }

                                        }

                                                     }
cout<<" Executa= "<<oldval1;
return 0;}

int stack::pop(int *old)
{if  (n()) { return 0;}
 *old=V[top];
 top--;
 return 1;}
