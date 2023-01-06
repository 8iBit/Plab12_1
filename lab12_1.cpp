#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main()
{
    srand(time(0));
    string grade[9]={"A","B+","B","C+","C","D+","D","F","W"};
    int k=rand()%9;
    cout << "Press Enter 3 times to reveal your future.";
    for(int i=0;i<3;i++)
    {
        cin.get();
    }
    string g=grade[k];
    cout << "You will get "<< g << " in this 261102. ";
}