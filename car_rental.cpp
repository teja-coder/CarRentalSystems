#include <bits/stdc++.h>
#include<fstream>
using namespace std;
string fname,lname;
long int contact;
int days,tcar=0,trent=0;
int dzireCost=3800,vernaCost=3000,indigoCost=3500,innovaCost=2800,scorpioCost=3000,fortunerCost=3500,indicaCost=1500,i10Cost=1800,swiftCost=1600;
class car
{
    public:
    int n;
    char ch;
    static int dzire,verna,indigo,innova,scorpio,fortuner,indica,i10,swift;
    void details()
    {
        cout<<endl<<"\t    "<<"Please Enter the customer details"<<endl<<endl;
        cout<<"\t    ";
        cout<<"Enter your First name: ";
        cin>>fname;
        cout<<"\t    ";
        cout<<"Enter your last name: ";
        cin>>lname;
        cout<<"\t    ";
        cout<<"Enter your contact: ";
        cin>>contact;
        cout<<endl;
    }
};
int car::dzire=1;
int car::verna=2;
int car::indigo=3;
int car::innova=1;
int car::scorpio=2;
int car::fortuner=3;
int car::indica=1;
int car::i10=2;
int car::swift=3;

class hatchback:public car
{
    public:
    void get()
    {
            cout<<endl<<"\t    "<<"Mileage provided by each car is as follows:"<<endl;
            cout<<"\t    ";
            cout<<"INDICA=16 "<<endl<<"\t    "<<"I10= 17"<<endl<<"\t    "<<"SWIFT=20"<<endl;
            cout<<"\t    ";
            cout<<endl<<"\t    "<<"The cost details for each car is as follows:"<<endl;
            cout<<"\t    ";
            cout<<"INDICA - Rs."<<indicaCost<<endl<<"\t    "<<"I10 - Rs."<<i10Cost<<endl<<"\t    "<<"SWIFT - Rs."<<swiftCost<<endl;

    }
    void rent()
    {
        cout<<endl<<"\t    "<<"If you want to rent a Hatchback car Then press Y for yes or N for no : ";
        cin>>ch;
        if(ch=='n' ||ch=='N')
        {
            return;
        }
        else
        {
            details();
            cout<<"\t    ";
            cout<<"Press 1 for INDICA, 2 for I10, 3 for SWIFT : ";
            cin>>n;
            cout<<endl<<"\t    ";
            cout<<"Enter number of days : ";
            cin>>days;
            switch(n)
            {
                case 1:
                if(indica==0)
                {
                    cout<<"\t    ";
                    cout<<"Sorry Out of Cars,Please go for another car"<<endl;
                }
                else
                {
                    tcar=7;
                    trent=days*indicaCost;
                    indica--;
                }
                break;
                case 2:
                if(i10==0)
                {
                    cout<<"\t    ";
                    cout<<"Sorry Out of Cars,Please go for another car"<<endl;
                }
                else
                {
                    tcar=8;
                    trent=days*i10Cost;
                    i10--;
                }
                break;
                case 3:
                if(swift==0)
                {
                    cout<<"\t    ";
                    cout<<"Sorry Out of Cars,Please go for another car"<<endl;
                }
                else
                {
                    tcar=9;
                    trent=days*swiftCost;
                    swift--;
                }
                break;
                default:
                cout<<"\t    ";
                cout<<"Invalid choice"<<endl;
            }
        }
    }
    void display()
    {
        system("clear");
        cout<<"\t\t\t___________________________________________________________________\n\n\n";
        cout<<"\t\t\t                    DETAILS OF HATCHBACK CARS                      \n\n\n";
        cout<<"\t\t\t___________________________________________________________________\n\n\n";
        cout<<"\t    ";
        cout<<"INDICA"<<"\t"<<"I10"<<"\t"<<"SWIFT"<<endl<<endl;
        int i;
        cout<<"\t    ";
        cout<<"INDICA - ";
        for(i=1;i<=indica;i++);
        cout<<i<<endl;
        cout<<"\t    ";
        cout<<"I10 - ";
        for(i=1;i<=i10;i++);
        cout<<i<<endl;
        cout<<"\t    ";
        cout<<"SWIFT - ";
        for(i=1;i<=swift;i++);
        cout<<i<<endl;
    }
};

class sedan:public car
{
    public:
    void get()
    {
        cout<<endl<<"\t    "<<"Mileage provided by each car is as follows:"<<endl;
        cout<<"\t    ";
        cout<<"DZIRE - 20 "<<endl<<"\t    "<<"VERNA - 11"<<endl<<"\t    "<<"INDIGO - 15";
        cout<<endl<<endl<<"\t    ";
        cout<<"The cost details for each car is as follows:"<<endl;
        cout<<"\t    ";
        cout<<"DZIRE - Rs."<<dzireCost<<endl<<"\t    "<<"Verna - Rs."<<vernaCost<<endl<<"\t    "<<"INDIGO - Rs."<<indigoCost<<endl;
    }
    void rent()
    {
        cout<<endl<<"\t    ";
        cout<<"If you want to rent a sedan car Then press Y for yes or N for no : ";
        cin>>ch;
        if(ch=='n' ||ch=='N')
        {
            return;
        }
        else
        {
            details();
            cout<<"\t    ";
            cout<<"Press 1 for DZIRE, 2 for VERNA, 3 for INDIGO : ";
            cin>>n;
            cout<<endl<<"\t    ";
            cout<<"Enter number of days : ";
            cin>>days;
            switch(n)
            {
                case 1:
                if(dzire==0)
                {
                    cout<<"\t    ";
                    cout<<"Sorry Out of Cars,Please go for another car"<<endl;
                }
                else
                {
                    tcar=1;
                    trent=days*dzireCost;
                    dzire--;
                }
                break;
                case 2:
                if(verna==0)
                {
                    cout<<"\t    ";
                    cout<<"Sorry Out of Cars,Please go for another car"<<endl;
                }
                else
                {
                    tcar=2;
                    trent=days*vernaCost;
                    verna--;
                }
                break;
                case 3:
                if(indigo==0)
                {
                    cout<<"\t    ";
                    cout<<"Sorry Out of Cars,Please go for another car"<<endl;
                }
                else
                {
                    tcar=3;
                    trent=days*indigoCost;
                    indigo--;
                }
                break;
                default:
                cout<<"\t    ";
                cout<<"Invalid choice"<<endl;
            }
        }
    };
    void display()
    {
        system("clear");
        cout<<"\t\t\t___________________________________________________________________\n\n\n";
        cout<<"\t\t\t                    DETAILS OF SEDAN CARS                          \n\n\n";
        cout<<"\t\t\t___________________________________________________________________\n\n\n";
        cout<<"\t    ";
        cout<<"DZIRE"<<"\t"<<"VERNA"<<"\t"<<"INDIGO"<<endl<<endl;
        int i;
        cout<<"\t    ";
        cout<<"DZIRE - ";
        for(i=1;i<=dzire;i++);
        cout<<i<<endl;
        cout<<"\t    ";
        cout<<"VERNA - ";
        for(int i=1;i<=verna;i++);
        cout<<i<<endl;
        cout<<"\t    ";
        cout<<"INDIGO - ";
        for(int i=1;i<=indigo;i++);
        cout<<i<<endl;
    }
};
class SUV:public car
{
    public:
    void get()
    {
            cout<<endl<<"\t    "<<"Mileage provided by each car is as follows:"<<endl;
            cout<<"\t    ";
            cout<<"INNOVA=11 "<<endl<<"\t    "<<"SCORPIO= 15"<<endl<<"\t    "<<"FORTUNER=10"<<endl;
            cout<<endl<<"\t    ";
            cout<<"The cost details for each car is as follows:"<<endl;
            cout<<"\t    ";
            cout<<"INNOVA - Rs."<<innovaCost<<endl<<"\t    "<<"SCORPIO - Rs."<<scorpioCost<<endl<<"\t    "<<"FORTUNER - Rs."<<fortunerCost;
            cout<<endl;
    }
    void rent()
    {
        cout<<endl<<"\t    ";
        cout<<"If you want to rent a SUV car Then press Y for yes or N for no : ";
        cin>>ch;
        if(ch=='n' ||ch=='N')
        {
            return;
        }
        else
        {
            details();
            cout<<"\t    ";
            cout<<"Press 1 for INNOVA, 2 for SCORPIO, 3 for FORTUNER : ";
            cin>>n;
            cout<<endl<<"\t    ";
            cout<<"Enter number of days : ";
            cin>>days;
            switch(n)
            {
                case 1:
                if(innova==0)
                {
                    cout<<"\t    ";
                    cout<<"Sorry Out of Cars,Please go for another car"<<endl;
                }
                else
                {
                    tcar=4;
                    trent=days*innovaCost;
                    innova--;
                }
                break;
                case 2:
                if(scorpio==0)
                {
                    cout<<"\t    ";
                    cout<<"Sorry Out of Cars,Please go for another car"<<endl;
                }
                else
                {
                    tcar=5;
                    trent=days*scorpioCost;
                    scorpio--;
                }
                break;
                case 3:
                if(fortuner==0)
                {
                    cout<<"\t    ";
                    cout<<"Sorry Out of Cars,Please go for another car"<<endl;
                }
                else
                {
                    tcar=6;
                    trent=days*fortunerCost;
                    fortuner--;
                }
                break;
                default:
                cout<<"\t    ";
                cout<<"Invalid choice"<<endl;
            }
        }
    }

    void display()
    {
        system("clear");
        cout<<"\t\t\t___________________________________________________________________\n\n\n";
        cout<<"\t\t\t                    DETAILS OF SUV CARS                            \n\n\n";
        cout<<"\t\t\t___________________________________________________________________\n\n\n";
        cout<<"\t    ";
        cout<<"INNOVA"<<"\t"<<"SCORPIO"<<"\t"<<"FORTUNER"<<endl<<endl;
        int i;
        cout<<"\t    ";
        cout<<"INNOVA - ";
        for(i=1;i<=innova;i++);
        cout<<i<<endl;
        cout<<"\t    ";
        cout<<"SCORPIO - ";
        for(i=1;i<=scorpio;i++);
        cout<<i<<endl;
        cout<<"\t    ";
        cout<<"FORTUNER - ";
        for(i=1;i<=fortuner;i++);
        cout<<i<<endl;
    }
};

class rent:virtual public hatchback,virtual public sedan,virtual public SUV
{
    public:
    int m;
    void display()
    {
        cout<<endl<<"\t    ";
        cout<<"Please enter the kind of car u want"<<endl<<endl;
        cout<<"\t    ";
        cout<<"1.Hatchback"<<endl<<"\t    "<<"2.Sedan"<<endl<<"\t    "<<"3.SUV"<<endl<<endl;
        cout<<"\t    "<<"Enter choice : ";
        cin>>m;

        switch(m)
        {
            case 1: hatchback::display();
            hatchback::get();
            hatchback::rent();
            break;
            case 2: sedan::display();
            sedan::get();
            sedan::rent();
            break;
            case 3: SUV::display();
            SUV::get();
            SUV::rent();
            break;
        }
    }

};

void login()
{
    string userid,passwd,id="teja",pass="teja";
    int loginch,m;
    abc:
    system("clear");
    cout<<"\t\t\t___________________________________________________________________\n\n\n";
    cout<<"\t\t\t                            Login Portal                           \n\n\n";
    cout<<"\t\t\t___________________________________________________________________\n\n\n";
    cout<<"\t\t\t                                                                   \n\n\n";
    cout<<"\t |  Username : ";
    cin>>userid;
    cout<<endl<<endl;
    cout<<"\t |  Password : ";
    cin>>passwd;
    cout<<endl<<endl;
    if(userid==id && passwd==pass)
    {
        system("clear");
        cout<<"\t\t\t___________________________________________________________________\n\n\n";
        cout<<"\t\t\t                            CAR RENTALS                            \n\n\n";
        cout<<"\t\t\t___________________________________________________________________\n\n\n";
        cout<<endl<<"\t    ";
        cout<<"Update the rents of cars"<<endl;
        cout<<endl<<"\t    "<<"1. Dzire : Rs.";
        cin>>dzireCost;
        cout<<endl<<"\t    "<<"2. Verna : Rs.";
        cin>>vernaCost;
        cout<<endl<<"\t    "<<"3. Indigo : Rs.";
        cin>>indigoCost;
        cout<<endl<<"\t    "<<"4. Innova : Rs.";
        cin>>innovaCost;
        cout<<endl<<"\t    "<<"5. Scorpio : Rs.";
        cin>>scorpioCost;
        cout<<endl<<"\t    "<<"6. Fortuner : Rs.";
        cin>>fortunerCost;
        cout<<endl<<"\t    "<<"7. Indica : Rs.";
        cin>>indicaCost;
        cout<<endl<<"\t    "<<"8. I10 : Rs.";
        cin>>i10Cost;
        cout<<endl<<"\t    "<<"9. Swift : Rs.";
        cin>>swiftCost;
        ofstream renting;
        renting.open("pricing.txt");
        renting<<dzireCost<<endl;
        renting<<vernaCost<<endl;
        renting<<indigoCost<<endl;
        renting<<innovaCost<<endl;
        renting<<scorpioCost<<endl;
        renting<<fortunerCost<<endl;
        renting<<indicaCost<<endl;
        renting<<i10Cost<<endl;
        renting<<swiftCost<<endl;
        renting.close();
        cout<<endl<<endl<<"\t    "<<"Updated Successfully !"<<endl<<endl<<endl<<endl;
    }
    else
    {
        cout<<"\t    Invalid Credentials"<<endl;
        cout<<endl<<endl;
        cout<<"\t    Press 1 to try again"<<endl;
        cout<<endl;
        cout<<"\t    Press 0 to exit"<<endl;
        cout<<endl;
        cout<<"\t    Enter Choice : ";
        cin>>loginch;
        if(loginch==1)
        goto abc;
    }
    cout<<endl;
}

void cost()
{
    ifstream inrenting("pricing.txt");
    if(inrenting.is_open())
    {
        inrenting >> dzireCost;
        inrenting >> vernaCost;
        inrenting >> indigoCost;
        inrenting >> innovaCost;
        inrenting >> scorpioCost;
        inrenting >> fortunerCost;
        inrenting >> indicaCost;
        inrenting >> i10Cost;
        inrenting >> swiftCost;
    }
}

int main()
{
    char ch;
    int choice;
    rent r;
    system("clear");
    cost();
    cout<<"\t\t\t___________________________________________________________________\n\n\n";
    cout<<"\t\t\t                            CAR RENTALS                            \n\n\n";
    cout<<"\t\t\t___________________________________________________________________\n\n\n";
    cout<<"\t    Select Your Role"<<"   ";
    cout<<"1.Customer  2.Admin"<<endl<<endl;
    cout<<"\t    Enter choice : ";
    cin>>choice;
    if(choice==1)
    {
        r.display();


        ofstream file;
        file.open("Customer_details.txt");
        file<<"\t\t\t___________________________________________________________________\n\n\n";
        file<<"\t\t\t                            CAR RENTALS                            \n\n\n";
        file<<"\t\t\t___________________________________________________________________\n\n\n";
        file<<"\t\t\t                              RECEIPT                              \n\n\n";
        file<<"\t    "<<"CUSTOMER DETAILS"<<endl<<endl;
        file<<"\t    "<<"CUSTOMER NAME : "<<fname<<"  "<<lname<<endl<<endl;
        file<<"\t    "<<"CONTACT : "<<contact<<endl<<endl<<endl;
        file<<"\t    "<<"TYPE OF CAR ";
        file<<"\t    "<<"DAYS ";
        file<<"\t    "<<"COST ";
        file<<"\t    "<<"TOTAL(Rs)"<<endl<<endl;


        for(;;)
        {

            do
            {
                cout<<"\n";

                if(tcar==7)
                {
                    file<<"\t    "<<"INDICA    "<<"\t    ";
                    file<<"\t    "<<days<<"    ";
                    file<<"\t    "<<"Rs."<<indicaCost;
                    file<<"\t    "<<indicaCost*days<<endl;
                }

                if(tcar==8)
                {
                    file<<"\t    "<<"I10       "<<"\t    ";
                    file<<"\t    "<<days<<"    ";
                    file<<"\t    "<<"Rs."<<i10Cost;
                    file<<"\t    "<<i10Cost*days<<endl;
                }

                if(tcar==9)
                {
                    file<<"\t    "<<"SWIFT     "<<"\t    ";
                    file<<"\t    "<<days<<"    ";
                    file<<"\t    "<<"Rs."<<swiftCost;
                    file<<"\t    "<<swiftCost*days<<endl;
                }
                if(tcar==1)
                {
                    file<<"\t    "<<"DZIRE     "<<"\t    ";
                    file<<"\t    "<<days<<"    ";
                    file<<"\t    "<<"Rs."<<dzireCost;
                    file<<"\t    "<<dzireCost*days<<endl;
                }
                if(tcar==2)
                {
                    file<<"\t    "<<"VERNA     "<<"\t    ";
                    file<<"\t    "<<days<<"    ";
                    file<<"\t    "<<"Rs."<<vernaCost;
                    file<<"\t    "<<vernaCost*days<<endl;
                }
                if(tcar==3)
                {
                    file<<"\t    "<<"INDIGO    "<<"\t    ";
                    file<<"\t    "<<days<<"    ";
                    file<<"\t    "<<"Rs."<<indigoCost;
                    file<<"\t    "<<indigoCost*days<<endl;
                }
                if(tcar==4)
                {
                    file<<"\t    "<<"INNOVA    "<<"\t    ";
                    file<<"\t    "<<days<<"    ";
                    file<<"\t    "<<"Rs."<<innovaCost;
                    file<<"\t    "<<innovaCost*days<<endl;
                }
                if(tcar==5)
                {
                    file<<"\t    "<<"SCORPIO   "<<"\t    ";
                    file<<"\t    "<<days<<"    ";
                    file<<"\t    "<<"Rs."<<scorpioCost;
                    file<<"\t    "<<scorpioCost*days<<endl;
                }
                if(tcar==6)
                {
                    file<<"\t    "<<"FORTUNER"<<"\t    ";
                    file<<"\t    "<<days<<"    ";
                    file<<"\t    "<<"Rs."<<fortunerCost;
                    file<<"\t    "<<fortunerCost*days<<endl;
                }
                cout<<"\tDo you want to rent another car? If yes press 'Y' or press 'N' : ";
                cin>>ch;
                if(ch=='n'||ch=='N')
                break;

                r.display();
            } while(ch=='y'||ch=='Y');
            file.close();
            system("clear");
            string linesread;
            ifstream infile ("Customer_details.txt");
            if (infile.is_open())
            {
                while ( getline (infile, linesread) )
                {
                   cout << linesread << endl;
                }
                infile.close();
            }
            else cout << "\t    "<<"File cannot be read";

            cout<<endl<<endl<<"\t    "<<"TOTAL RENT : Rs. "<<trent<<endl;
            cout<<endl<<endl<<"\t\t\t                   🦸‍♂️ Thank You for visiting 🦸‍♂️           \n\n\n";
            cout<<endl<<endl<<endl;
            exit(0);
        }
    }
    else
    {
        login();
    }
    return 0;
}
