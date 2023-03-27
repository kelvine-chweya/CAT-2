//A program that calculates the bonus points as per airtime amount at Safaricom Ltd.

#include<iostream>
#include<string>
using namespace std;

//creation of class details 
class Details
{
    protected:

    //declaration of the variables under protected access modifier.
    string subscriber_name;
    int phone_number;
    float A;
    float airtime = A;
    
    public:

    //creation of constuctor Details.
    Details()
    {
        cout<<"Enter the name of the subscriber: ";
        getline(cin,subscriber_name);
        cout<<"Enter the phone number: ";
        cin>>phone_number;
        cout<<"Input the Airtime amount: ";
        cin>>A;
    }

    //A function which computes the bonuspoints.
    int compute_bonuspoints()
    {
        if(A >= 2000.00)
        cout<<"AWARDED 500 POINTS.STAY WITH SAFARICOM THE BETTER OPTION!";

        else if(A >= 1000.00 && A <= 1999.00)
        cout<<"AWARDED 300 POINTS.STAY WITH SAFARICOM THE BETTER OPTION!";

        else if(A >= 500.00 && A <= 999.00)
        cout<<"AWARDED 100 POINTS.STAY WITH SAFARICOM THE BETTER OPTION!";

        else if(A >= 100.00 && A <= 499.00)
        cout<<"AWARDED 50 POINTS.STAY WITH SAFARICOM THE BETTER OPTION!";

        else if(A < 100.00)
        cout<<"AWARDED 0 POINTS.STAY WITH SAFARICOM THE BETTER OPTION!";

        else
        cout<<"NO BONUS AWARDED";
    }

    //function which desplays the full details of a subscriber and bonuspoints.
    int getdetails()
    {
        cout<<endl<<endl;
        cout<<subscriber_name<<":"<<"("<<"PHONE NO:"<<phone_number<<"):"<<compute_bonuspoints()<<endl;
        return 0;

    }
};

//main funtion which is used to call the functions in class Details.
int main()
{
    Details D;
    D.compute_bonuspoints();
    D.getdetails();
    system("pause>0");
}