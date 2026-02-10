#include<iostream>
using namespace std;
#include"banking.h"
#include"shopping.h"
#include "new1.cpp"
int main()
{
        Bank obj;
        Shopping sobj;
        cout<<"1:BANKING 2: SHOPPING"<<endl;
        cout<<"enter the choice"<<endl;
        int choice;
        cin>>choice;
        switch(choice)
        {
        case 1:obj.menu(sobj);
                break;
        case 2:sobj.menu(obj);
                break;
        }
}