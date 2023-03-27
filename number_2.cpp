//The program that input vehicle details at DT Dobie (K) Ltd and calculates sale profit.

#include<iostream>
#include<string>
using namespace std;

//creation of class Vehicle.
class Vehicle
{
    //Declaration of varaibles under private access modifier.
    string Make, Model;
    int Engine_Number;
    int Sale_Price;
    
    public:

    //creation of function set_vehicle which asks for vehicle details.
    void set_vehicle()
    {
        cout<<"Enter the Make of the vehicle: ";
        getline(cin,Make);
        cout<<"Enter the Model of the vehicle: ";
        getline(cin,Model);
        cout<<"Enter the Engine Number: ";
        cin>>Engine_Number;
        cout<<"Enter the Sale price of the vehicle: ";
        cin>>Sale_Price;
    }
    
    //creation of function get_profit which calculates the profit from car sale.
    float get_profit()
    {
        int profit;
        profit = Sale_Price*0.15;
        cout<<"The profit from the sale of "<<Make<<" is "<<profit;
        return (profit);
    }

    //function vehicle details displays the car detail input.
    void vehicle_details()
    {
        cout<<"MAKE: "<<Make<<endl;
        cout<<"MODEL: "<<Model<<endl;
        cout<<"ENGINE NUMBER: "<<Engine_Number<<endl;
        cout<<"SALE PRICE: "<<Sale_Price<<endl;
    }
};

//creation of the main fuction which calls the created functions using objects.
int main()
{
    Vehicle v;
    v.set_vehicle();
    cout<<endl<<"THE FULL DETAILS OF THE VEHICLE: "<<endl<<endl;
    v.vehicle_details();
    v.get_profit();
    system("pause>0");
}