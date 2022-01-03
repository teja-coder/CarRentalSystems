#include <bits/stdc++.h>
#include<fstream>
using namespace std;
string fname,lname;
long int contact;
int days,tcar=0,trent=0;
class car
{
    public:
    int n;
    char ch;
    static int dzire,verna,indigo,innova,scorpio,fortuner,indica,i10,swift;
    void details()
    {
        cout<<endl<<"Please Enter the customer details"<<endl;
        cout<<"Enter your First name: ";
        cin>>fname;
        cout<<"Enter your last name: ";
        cin>>lname;
        cout<<"Enter your contact: ";
        cin>>contact;
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
        if(trent==0)
        {
            cout<<endl<<"Mileage provided by each car is as follows:"<<endl;
            cout<<"INDICA=16 "<<endl<<"I10= 17"<<endl<<"SWIFT=20"<<endl;
            cout<<endl<<"The cost details for each car is as follows:"<<endl;
            cout<<"INNOVA=2800 Rs"<<endl<<"SCORPIO=3000 Rs"<<endl<<"FORTUNER=3500"<<endl;
        }

    }
    void rent()
    {
        cout<<endl<<"If you want to rent a sedan car Then press Y for yes or N for no"<<endl;
        cin>>ch;
        if(ch=='n' ||ch=='N')
        {
            return;
        }
        else
        {
            details();
            cout<<"Press 1 for INDICA,2 for I10,3 for SWIFT"<<endl;
            cin>>n;
            cout<<"Enter number of days"<<endl;
            cin>>days;
            switch(n)
            {
                case 1:
                if(indica==0)
                {
                    cout<<"Sorry Out of Cars,Please go for another car"<<endl;
                }
                else
                {
                    tcar=7;
                    trent=days*2800;
                    indica--;
                }
                break;
                case 2:
                if(i10==0)
                {
                    cout<<"Sorry Out of Cars,Please go for another car"<<endl;
                }
                else
                {
                    tcar=8;
                    trent=days*3000;
                    i10--;
                }
                break;
                case 3:
                if(swift==0)
                {
                    cout<<"Sorry Out of Cars,Please go for another car"<<endl;
                }
                else
                {
                    tcar=9;
                    trent=days*3500;
                    swift--;
                }
                break;
                default:cout<<"Invalid choice"<<endl;
            }
        }
    }
    void display()
    {
        cout<<"DETAILS OF HATCHBACK CARS"<<endl;
        cout<<"INDICA"<<"\t"<<"I10"<<"\t"<<"SWIFT"<<endl<<endl;
        int i;
        cout<<"INDICA - ";
        for(i=1;i<=indica;i++);
        cout<<i<<endl;
        cout<<"I10 - ";
        for(i=1;i<=i10;i++);
        cout<<i<<endl;
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
        if(trent==0)
        {
        cout<<endl<<"Mileage provided by each car is as follows:"<<endl;
        cout<<"DZIRE=20 "<<endl<<"VERNA= 11"<<endl<<"INDIGO=15";
        cout<<"The cost details for each car is as follows:"<<endl;
        cout<<"DZIRE=3800 Rs"<<endl<<"Verna=3000 Rs"<<endl<<"INDIGO=3500";
        }

    }
    void rent()
    {
        cout<<"If you want to rent a sedan car Then press Y for yes or N for no"<<endl;
        cin>>ch;
        if(ch=='n' ||ch=='N')
        {
            return;
        }
        else
        {
            details();
            cout<<"Press 1 for DZIRE,2 for VERNA,3 for INDIGO"<<endl;
            cin>>n;
            cout<<"Enter number of days"<<endl;
            cin>>days;
            switch(n)
            {
                case 1:
                if(dzire==0)
                {
                    cout<<"Sorry Out of Cars,Please go for another car"<<endl;
                }
                else
                {
                    tcar=1;
                    trent=days*3800;
                    dzire--;
                }
                break;
                case 2:
                if(verna==0)
                {
                    cout<<"Sorry Out of Cars,Please go for another car"<<endl;
                }
                else
                {
                    tcar=2;
                    trent=days*3000;
                    verna--;
                }
                break;
                case 3:
                if(indigo==0)
                {
                    cout<<"Sorry Out of Cars,Please go for another car"<<endl;
                }
                else
                {
                    tcar=3;
                    trent=days*3500;
                    indigo--;
                }
                break;
                default:cout<<"Invalid choice"<<endl;
            }
        }
    }
    void display()
    {
        cout<<"DETAILS OF SEDAN CARS"<<endl;
        cout<<"DZIRE"<<"\t"<<"VERNA"<<"\t"<<"INDIGO"<<endl<<endl;
        int i;
        cout<<"DZIRE - ";
        for(i=1;i<=dzire;i++);
        cout<<i<<endl;
        cout<<"VERNA - ";
        for(int i=1;i<=verna;i++);
        cout<<i<<endl;
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
        if(trent==0)
        {
            cout<<endl<<"Mileage provided by each car is as follows:"<<endl;
            cout<<"INNOVA=11 "<<endl<<"SCORPIO= 15"<<endl<<"FORTUNER=10";
            cout<<"The cost details for each car is as follows:"<<endl;
            cout<<"INNOVA=4800 Rs"<<endl<<"SCORPIO=5000 Rs"<<endl<<"FORTUNER=4500";
        }

    }
    void rent()
    {
        cout<<"If you want to rent a sedan car Then press Y for yes or N for no"<<endl;
        cin>>ch;
        if(ch=='n' ||ch=='N')
        {
            return;
        }
        else
        {
            details();
            cout<<"Press 1 for INNOVA,2 for SCORPIO,3 for FORTUNER"<<endl;
            cin>>n;
            cout<<"Enter number of days"<<endl;
            cin>>days;
            switch(n)
            {
                case 1:
                if(innova==0)
                {
                    cout<<"Sorry Out of Cars,Please go for another car"<<endl;
                }
                else
                {
                    tcar=4;
                    trent=days*4800;
                    innova--;
                }
                break;
                case 2:
                if(scorpio==0)
                {
                    cout<<"Sorry Out of Cars,Please go for another car"<<endl;
                }
                else
                {
                    tcar=5;
                    trent=days*5000;
                    scorpio--;
                }
                break;
                case 3:
                if(fortuner==0)
                {
                    cout<<"Sorry Out of Cars,Please go for another car"<<endl;
                }
                else
                {
                    tcar=6;
                    trent=days*4500;
                    fortuner--;
                }
                break;
                default:cout<<"Invalid choice"<<endl;
            }
        }
    }

    void display()
    {
        cout<<"DETAILS OF SUV CARS"<<endl;
        cout<<"INNOVA"<<"\t"<<"SCORPIO"<<"\t"<<"FORTUNER"<<endl<<endl;
        int i;
        cout<<"INNOVA - ";
        for(i=1;i<=innova;i++);
        cout<<i<<endl;
        cout<<"SCORPIO - ";
        for(i=1;i<=scorpio;i++);
        cout<<i<<endl;
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

        cout<<"Please enter the kind of car u want"<<endl;
        cout<<"1.Hatchback"<<endl<<"2.Sedan"<<endl<<"3.SUV"<<endl;
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


int main()
{
    char ch;
    rent r;

    cout<<"WELCOME TO CAR RENTAL"<<endl;
    r.display();


    ofstream file;
    file.open("Customer_details.txt");
    file<<"CAR RENTALS"<<endl;
    file<<"RECEIPT"<<endl;
    file<<"CUSTOMER DETAILS"<<endl;
    file<<"CUSTOMER NAME : "<<fname<<"  "<<lname<<endl<<endl;
    file<<"CONTACT : "<<contact<<endl<<endl;
    file<<" TYPE OF CAR ";
    file<<" DAYS ";
    file<<" COST ";
    file<<" TOTAL"<<endl;;


    for(;;)
    {

        do
        {
            cout<<"\n";

            if(tcar==7)
            {
                file<<" INDICA :";
                file<<days;
                file<<"Rs.2800";
                file<<2800*days<<endl;
            }

            if(tcar==8)
            {
                file<<" I10 :";
                file<<days;
                file<<"Rs.3000";
                file<<3000*days<<endl;
            }

            if(tcar==9)
            {
                file<<" SWIFT :";
                file<<days;
                file<<"Rs.3500";
                file<<3500*days<<endl;
            }
            if(tcar==1)
            {
                file<<" DZIRE :";
                file<<days;
                file<<"Rs.3800";
                file<<3800*days<<"\n\t";
            }
            if(tcar==2)
            {
                file<<" VERNA :";
                file<<days;
                file<<"Rs.3000";
                file<<3000*days<<endl;
            }
            if(tcar==3)
            {
                file<<" INDIGO :";
                file<<days;
                file<<"Rs.3500";
                file<<3500*days<<endl;
            }
            if(tcar==4)
            {
                file<<" INNOVA :";
                file<<days;
                file<<"Rs.4800";
                file<<4800*days<<endl;
            }
            if(tcar==5)
            {
                file<<" SCORPIO :";
                file<<days;
                file<<"Rs.5000";
                file<<4500*days<<endl;
            }
            if(tcar==6)
            {
                file<<" FORTUNER :";
                file<<days;
                file<<"Rs.4500";
                file<<4000*days<<endl;
            }

            cout<<"\tDo you want to rent another car? If yes press 'Y' or press 'N' : ";
            cin>>ch;
            if(ch=='n'||ch=='N')
            break;

            r.display();
        } while(ch=='y'||ch=='Y');
        file.close();

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
        else cout << "File cannot be read";


        cout<<"Thank You for visiting"<<endl;
        cout<<"TOTAL RENT : "<<trent<<endl;
        exit(0);
    }

    return 0;
}
