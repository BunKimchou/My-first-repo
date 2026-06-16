#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    int Id,qty;
    int option;
    float payment1=0,payment2=0;
    cout<<"Enter name: ";
    getline(cin,name);
    cout<<"Enter ID: ";
    cin>>Id;
    cout<<"======================Menu==========================="<<endl;
    cout<<"1.Chocolate"<<endl;
    cout<<"2.Chip"<<endl;
    cout<<"3.Milk"<<endl;
    cout<<"4.Ice-Cream"<<endl;
    cout<<"==========================="<<endl;
    cout<<"Enter option: ";
    cin>>option;
    cout<<"Enter quantity: ";
    cin>>qty;
    switch (option)
    {
    case 1:
    payment1+=1*(qty*1.25);//$
    payment2+=1*(qty*1.25*4150);//Riel
        break;
    case 2:
    payment1+=1*(qty*2.25);//$
    payment2+=1*(qty*2.25*4150);//Riel
        break;
    case 3:
    payment1+=1*(qty*1.65);//$
    payment2+=1*(qty*1.65*4150);//Riel
        break;
    case 4:
    payment1+=1*(qty*3.75);//$
    payment2+=1*(qty*3.75*4150);//Riel
        break;
    
    default:
    cout<<"\033[31mInvalid option\033[0m"<<endl;
        break;
    }
    cout<<"\033[34m=========Invoice===========\033[0m"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"ID: "<<Id<<endl;
    cout<<"\033[34m............................\033[0m"<<endl;
    cout<<"Purchased: "<<qty<<" products"<<endl;
    cout<<"\033[31mtotal:\033[0m "<<payment1<<" ($)"<<endl;
    cout<<"       "<<payment2<<" (Riel)"<<endl;
    cout<<"\033[34m======= Thank you ========\033[0m"<<endl;




    return 0;
}