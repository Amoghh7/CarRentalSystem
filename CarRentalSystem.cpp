#include <iostream>
#include <stdlib.h>
#include <unistd.h>

using namespace std;
class customer 
{
public:
string customername;
  string carmodel;
  string mobilenumber;
  char data;
  
    
};
class rent : public customer 
{
public:
int days=0,rentalfee=0;

void data()
{

  cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\tWelcome To CAR RENTAL SYSTEM \n\n";
   cout<<"\t\t\t----------------------------------------------------------\n\n";
cout << "\t\t\t\t\tPlease Enter your Name: "; 
    cin >> customername;
    cout<<endl;
    do
    {
        cout <<"\t\t\t\tPlease Select a Car"<<endl; 
        cout<<"\t\t\t\tEnter 'A' for Maruti Ciaz"<<endl;
        cout<<"\t\t\t\tEnter 'B' for Hyundai Verna"<<endl;
        cout<<"\t\t\t\tEnter 'C' for Kia Seltos"<<endl;
        cout<<endl;
        cout<<"\t\t\t\tChoose a Car from the above options: ";
        cin >>carmodel;
        cout<<endl;
        cout<<"--------------------------------------------------------------------------"<<endl;
        if(carmodel=="A")
        {
          system ("clear");
        
            cout<<"You have choosed Maruti Ciaz model"<<endl;
            cout <<"Specification:-"<<endl;
            cout<<"Mileage:- 20.4kmpl"<<endl;
            cout<<"Engine:- 1462cc"<<endl;
            
        
          sleep(2);
          }
          if(carmodel=="B")
          {
            system ("clear");
          
            cout<<"You have choosed Hyundai Verna model"<<endl;
            cout <<"Specification:-"<<endl;
            cout<<"Mileage:- 21.3kmpl"<<endl;
            cout<<"Engine:- 1497cc"<<endl;
                
            
            sleep(2);
          }
          if(carmodel=="C")
          {
            system ("clear");
            cout<<"You have choosed Kia Seltos model"<<endl;
            cout <<"Specification:-"<<endl;
            cout<<"Mileage:- 18kmpl"<<endl;
            cout<<"Engine:- 1493cc"<<endl;
              
            sleep(2);
          }  
          if(carmodel !="A" && carmodel !="B" &&  carmodel !="C" )
          {  
              cout<<"Invaild Car Model. Please try again!"<<endl;
          }
    }while(carmodel !="A" && carmodel !="B" &&  carmodel !="C" );
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout << "Please provide following information: "<<endl; 

    cout<<"Please Enter a Mobile No. : ";
    cin >> mobilenumber;
    cout<<"Number of days you wish to rent the car : ";
    cin >> days;
    cout<<endl;
}
void calculate()
{
sleep(1);
system ("clear");
cout<<"Calculating rent. Please wait......"<<endl;
sleep(2);
if(carmodel == "A"||carmodel=="a")
        rentalfee=days*100;
    if(carmodel == "B" ||carmodel=="b")
        rentalfee=days*150;
    if(carmodel == "C" ||carmodel=="c")
        rentalfee=days*200;
  
  }
void showrent()
    {
    system ("clear");
    cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
    cout << "\t\t ///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t | Invoice No. :"<<"------------------|"<<"   "<<"123"<<" |"<<endl;
    cout << "\t\t | Customer Name:"<<"-----------------|"<<"   "<<customername<<" |"<<endl;
    cout << "\t\t | Mobile No. :"<<"-------------------|"<<"   "<<mobilenumber<<" |"<<endl;
    cout << "\t\t | Car Model :"<<"--------------------|"<<"   "<<carmodel<<" |"<<endl;
    cout << "\t\t | Number of days :"<<"---------------|"<<"   "<<days<<" |"<<endl;
    cout << "\t\t | Your Rental Amount is :"<<"--------|"<<"   "<<rentalfee<<" |"<<endl;
    cout << "\t\t ____________________"<<endl;
    cout <<"\n";
    cout << "\t\t | Total Rental Amount is :"<<"-------|"<<"   "<<rentalfee<<" |"<<endl;
    cout << "\t\t ____________________"<<endl;
    cout << "\t\t # This is a computer generated invoce and it does not"<<endl;
    cout << "\t\t require an authorised signture #"<<endl;
    cout <<" "<<endl;
    cout << "\t\t ///////////////////////////////////////////////////////////"<<endl;
    
    
}
};
class welcome 
{
public:
void welcum()
{
      sleep(1);
      cout<<"\nStarting the program please wait....."<<endl;
      sleep(2); 
      system ("clear"); 
      
     }

};

int main()
{
welcome obj1; 
obj1.welcum(); 
rent obj2; 

obj2.data();
obj2.calculate();
obj2.showrent();

return 0; 
}

