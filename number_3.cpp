//A program used by Electoral Commission to input voter's details.
#include<iostream>
using namespace std;

//creating class called VoterDetails.
class VoterDetails
{
    //declaring the variables which by defalt are in private access permission.

    string FirstName, MiddleName, Surname;
    int dd, mm, yyyy;
    int DateOfBirth = dd-mm-yyyy;
    string gender;
    int ID_Num, VoterCard;
    string PollingStation;

    public:

    //creation of function SetDetails which anables the voter's details to be added.
    void SetDetails()
    {
        cout<<"Enter the First Name: ";
        getline(cin,FirstName);
        cout<<"Enter the Middle Name: ";
        getline(cin,MiddleName);
        cout<<"Enter the Surname: ";
        getline(cin,Surname);
        cout<<"Enter the day of birth: ";
        cin>>dd;
        cout<<"Enter the month of birth: ";
        cin>>mm;
        cout<<"Enter the year of birth: ";
        cin>>yyyy;
        cout<<"Enter the gender: ";
        cin>>gender;
        cout<<"Enter the National ID Number: ";
        cin>>ID_Num;
        cout<<"Enter the Voter card ID number: ";
        cin>>VoterCard;
        cout<<"Enter the polling station: ";
        cin>>PollingStation;
    }

    //creation of function DisplayDet which displays the added details in the SetDetails function.
    void DisplayDet()
    {
        cout<<endl<<endl<<"ELECTRONIC VOTING MANAGEMENT SYSTEM(EVMS)"<<endl<<endl;
        cout<<"FULL NAME: "<<FirstName<<" "<<MiddleName<<" "<<Surname<<endl;
        cout<<"DATE OF BIRTH: "<<dd<<"-"<<mm<<"-"<<yyyy<<endl;
        cout<<"GENDER: "<<gender<<endl;
        cout<<"NATIONAL ID NUMBER: "<<ID_Num<<endl;
        cout<<"VOTER'S CARD ID: "<<VoterCard<<endl;
        cout<<"POLLING STATION: "<<PollingStation<<endl;
    }
};

//creation of the main function which anables the user to interact with the program.
int main()
{
    VoterDetails v;
    v.SetDetails();
    v.DisplayDet();
    system("pause>0");
}