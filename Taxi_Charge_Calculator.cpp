#include<iostream>
using namespace std;
class cab
{
    float one_km_charge,one_hour_charge;
public:
    cab(float,float);
    ~cab();
};
class driver
{
    int driver_id;
    float km_for_trip;
    float dr_waiting_hours;
    float bill_amount;
public:
    driver(int,float,float);
    void cal_bill_amount(float,float);
    void show_bill_amount();
    ~driver();
};


driver::~driver()
{

}

driver::driver(int driver_id,float km_for_trip,float dr_waiting_hours)
{
    this->driver_id=driver_id;
    this->km_for_trip=km_for_trip;
    this->dr_waiting_hours=dr_waiting_hours;
}
void driver::cal_bill_amount(float one_km_charge,float one_hour_charge)
{
    cab Q(one_km_charge,one_hour_charge);
    bill_amount=(one_km_charge*km_for_trip)+(dr_waiting_hours*one_hour_charge);
}
void driver::show_bill_amount()
{
    cout<<"Total bill amount is :"<<"Rs."<<bill_amount<<endl;
    cout<<"Driver id :"<<driver_id;
}

cab::~cab()
{
}

cab::cab(float one_km_charge,float one_hour_charge)
{
    this->one_km_charge=one_km_charge;
    this->one_hour_charge=one_hour_charge;
}

main()
{
    int driver_id;
    float km_for_trip,dr_waiting_hours,one_km_charge,one_hour_charge;
    cout<<"Enter driver id : ";cin>>driver_id;
    cout<<"Distance you travelled in your trip (km) : ";
    cin>>km_for_trip;
    cout<<"One km charge   : ";
    cin>>one_km_charge;
    cout<<"Waiting hour(s) : ";
    cin>>dr_waiting_hours;
    cout<<"One hour charge : ";
    cin>>one_hour_charge;
    cout<<""<<endl<<endl;

    driver Q(driver_id,km_for_trip,dr_waiting_hours);
    Q.cal_bill_amount(one_km_charge,one_hour_charge);
    Q.show_bill_amount();

    return 0;
}
