#include<iostream>
#include<conio.h>
#include<string.h>
#include<fstream>
using namespace std;
class customer
{
	public:
	string customer_name,customer_address,customer_contact,month,place_to_visit;
	int n,start_date,end_date,no_of_days,loc;
	void customer_detail();
	void check_trip();
};
class trip:public customer
{
	public:
	string mode_of_travelling,hotel_name;
	int total_charge,transportation_charge,hotel_charge,hotel_rating,family_members;
	int book_trip();
	void display();
	int hotel_booking();
};
int trip::book_trip()
{
	cout<<"Enter your mode of travelling                              "<<endl;
	cout<<"(bus,flight,train)                                         "; cin>>mode_of_travelling;
	if(mode_of_travelling=="bus") 
	transportation_charge=2000;
	else if(mode_of_travelling=="train")
	transportation_charge=4000;
	else if(mode_of_travelling=="flight")
	transportation_charge=7000;
	else
	{
		cout<<endl<<endl<<"Not a valid input"<<endl<<endl;
		book_trip();
	}
	return total_charge=transportation_charge+hotel_charge;
}
void customer::check_trip()
{
	cout<<endl<<endl<<endl;
	cout<<"                 GGGGGGGGGG   EEEEEEEEEE   TTTTTTTTTTTTTT              AAAAAAAAAA              WWW          WWW   AAAAAAAAAA   YY      YY    |||"<<endl;
	cout<<"                 GGGGGGGGGG   EEEEEEEEEE   TTTTTTTTTTTTTT              AAAAAAAAAA              WWW          WWW   AAAAAAAAAA    YY    YY     |||"<<endl;
	cout<<"                 GGG          EEE                TT                    AA      AA              WWW          WWW   AA      AA     YY  YY      |||"<<endl;
	cout<<"                 GGG          EEE                TT                    AA      AA              WWW          WWW   AA      AA      YYYY       |||"<<endl;
	cout<<"                 GGG          EEEEEEEEEE         TT         ********   AAAAAAAAAA   ********   WWW          WWW   AAAAAAAAAA       YY        |||"<<endl;
	cout<<"                 GGG   GGGG   EEEEEEEEEE         TT         ********   AAAAAAAAAA   ********   WWW          WWW   AAAAAAAAAA       YY        |||"<<endl;
	cout<<"                 GGG   GGGG   EEE                TT                    AA      AA              WWW   WWW    WWW   AA      AA       YY        |||"<<endl;
	cout<<"                 GGG    GGG   EEE                TT                    AA      AA              WWW  WW  WW  WWW   AA      AA       YY           "<<endl;
	cout<<"                 GGGGGGGGGG   EEEEEEEEEE         TT                    AA      AA              WWW WW    WW WWW   AA      AA       YY        ***"<<endl;
	cout<<"                 GGGGGGGGGG   EEEEEEEEEE         TT                    AA      AA              WWWW        WWWW   AA      AA       YY        ***"<<endl;
	cout<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"We provide tour facilities to these places"<<endl<<endl;
	cout<<"1. Rajasthan"<<endl;
	cout<<"2. Himachal Pradesh"<<endl;
	cout<<"3. Gujarat"<<endl;
	cout<<endl<<endl<<endl;
	cout<<"Select the place where you want to go!!"<<endl<<endl;
	cin>>n;
	switch(n)
	{
		case 1:
		system("cls");
		cout<<endl<<endl<<endl;
		cout<<"             RRRRRRRRRR   AAAAAAAAAA          JJJ   AAAAAAAAAA   SSSSSSSSSS   TTTTTTTTTTTTTT   HHH    HHH   AAAAAAAAAA   NNNN        NNN"<<endl;
		cout<<"             RRRRRRRRRR   AAAAAAAAAA          JJJ   AAAAAAAAAA   SSSSSSSSSS   TTTTTTTTTTTTTT   HHH    HHH   AAAAAAAAAA   NNNNN       NNN"<<endl;
		cout<<"             RRR    RRR   AA      AA          JJJ   AA      AA   SS                 TT         HHH    HHH   AA      AA   NNN NN      NNN"<<endl;
		cout<<"             RRR   RRR    AA      AA          JJJ   AA      AA   SS                 TT         HHH    HHH   AA      AA   NNN  NN     NNN"<<endl;
		cout<<"             RRR  RRR     AAAAAAAAAA          JJJ   AAAAAAAAAA   SSSSSSSSSS         TT         HHHHHHHHHH   AAAAAAAAAA   NNN   NN    NNN"<<endl;
		cout<<"             RRRRRR       AAAAAAAAAA   JJJ    JJJ   AAAAAAAAAA   SSSSSSSSSS         TT         HHHHHHHHHH   AAAAAAAAAA   NNN    NN   NNN"<<endl;
		cout<<"             RRR RRR      AA      AA   JJJ    JJJ   AA      AA           SS         TT         HHH    HHH   AA      AA   NNN     NN  NNN"<<endl;
		cout<<"             RRR  RRR     AA      AA   JJJ    JJJ   AA      AA           SS         TT         HHH    HHH   AA      AA   NNN      NN NNN"<<endl;
		cout<<"             RRR   RRR    AA      AA   JJJ    JJJ   AA      AA   SSSSSSSSSS         TT         HHH    HHH   AA      AA   NNN       NNNNN"<<endl;
		cout<<"             RRR    RRR   AA      AA   JJJJJJJJJJ   AA      AA   SSSSSSSSSS         TT         HHH    HHH   AA      AA   NNN        NNNN"<<endl;
		cout<<endl<<endl<<endl<<endl<<endl<<endl;
		cout<<"Rajasthan is one of the most popular tourist destinations in India,"<<endl;
		cout<<"for both domestic and international tourists."<<endl;
		cout<<"Rajasthan attracts tourists for its historical forts, palaces, art and culture."<<endl;
		cout<<"Every third foreign tourist visiting India also travels to"<<endl;
		cout<<"Rajasthan as it is part of the Golden Triangle for tourists visiting India."<<endl<<endl<<endl;
		cout<<"In Rajasthan, you can visit these places"<<endl<<endl;
		cout<<"1. Hawa Mehal"<<endl<<endl;
		cout<<"2. Jaisalmer Ford"<<endl<<endl;
		cout<<"3. Ajmer Sharif Dargah"<<endl<<endl;
		cout<<"Enter a location";
		cin>>loc;
		if(loc==1)
		{
			place_to_visit="Hawa Mahal";
			cout<<endl<<"You have opted tour for Hawa Mehal"<<endl<<endl;
		}
		else if(loc==2)
		{
			place_to_visit="Jaisalmer Fort";
			cout<<endl<<"You have opted tour for Jaisalmer Fort"<<endl<<endl;
		}
		else if(loc==3)
		{
			place_to_visit="Ajmer Sharif Dargah";
			cout<<endl<<"You have opted tour for Ajmer Sharif Dargah"<<endl<<endl;
		}
		else
		{
			cout<<"Not a correct input"<<endl;
			system("cls");
			check_trip();
		}
		break;
		
		case 2:
		system("cls");
		cout<<endl<<endl<<endl;
		cout<<"             HHH    HHH   IIIIIIIIII   MMMM        MMMM   AAAAAAAAAA   CCCCCCCCCC   HHH    HHH   AAAAAAAAAA   LLL       "<<endl;
		cout<<"             HHH    HHH       II       MMM MM    MM MMM   AAAAAAAAAA   CCCCCCCCCC   HHH    HHH   AAAAAAAAAA   LLL       "<<endl;
		cout<<"             HHH    HHH       II       MMM  MM  MM  MMM   AA      AA   CCC          HHH    HHH   AA      AA   LLL       "<<endl;
		cout<<"             HHH    HHH       II       MMM   MMM    MMM   AA      AA   CCC          HHH    HHH   AA      AA   LLL       "<<endl;
		cout<<"             HHHHHHHHHH       II       MMM          MMM   AAAAAAAAAA   CCC          HHHHHHHHHH   AAAAAAAAAA   LLL       "<<endl;
		cout<<"             HHHHHHHHHH       II       MMM          MMM   AAAAAAAAAA   CCC          HHHHHHHHHH   AAAAAAAAAA   LLL       "<<endl;
		cout<<"             HHH    HHH       II       MMM          MMM   AA      AA   CCC          HHH    HHH   AA      AA   LLL       "<<endl;
		cout<<"             HHH    HHH       II       MMM          MMM   AA      AA   CCC          HHH    HHH   AA      AA   LLL       "<<endl;
		cout<<"             HHH    HHH       II       MMM          MMM   AA      AA   CCCCCCCCCC   HHH    HHH   AA      AA   LLLLLLLLLL"<<endl;
		cout<<"             HHH    HHH   IIIIIIIIII   MMM          MMM   AA      AA   CCCCCCCCCC   HHH    HHH   AA      AA   LLLLLLLLLL"<<endl;
		cout<<endl<<endl<<endl<<endl<<endl<<endl;
		cout<<"Himachal Pradesh is famous for its Himalayan landscapes and popular hill-stations."<<endl;
		cout<<"Shimla, the state capital, is very popular among tourists"<<endl;
		cout<<"The Ridge is a large road in Shimla which is the centre of most cultural activities of Shimla."<<endl;
		cout<<"The Spiti Valley is a cold desert mountain valley located high in the Himalaya mountains"<<endl;
		cout<<"Paragliding, ice-skating, and heli-skiing are popular tourist attractions."<<endl<<endl<<endl;
		cout<<"In Himachal Pradesh, you can visit these places"<<endl<<endl;
		cout<<"1. Kullu"<<endl<<endl;
		cout<<"2. Manali"<<endl<<endl;
		cout<<"3. Dalhousie"<<endl<<endl;
		cout<<"Enter a location";
		cin>>loc;
		if(loc==1)
		{
			place_to_visit="Kullu";
			cout<<endl<<"You have opted tour for Kullu"<<endl<<endl;
		}
		else if(loc==2)
		{
			place_to_visit="Manali";
			cout<<endl<<"You have opted tour for Manali"<<endl<<endl;
		}
		else if(loc==3)
		{
			place_to_visit="Dalhousie";
			cout<<endl<<"You have opted tour for Dalhousie"<<endl<<endl;
		}
		else
		{
			cout<<"Not a correct input"<<endl;
			system("cls");
			check_trip();
		}
		break;
		
		case 3:
		system("cls");
		cout<<endl<<endl<<endl;
		cout<<"				GGGGGGGGGG   UUU    UUU          JJJ   AAAAAAAAAA   RRRRRRRRRR   AAAAAAAAAA   TTTTTTTTTTTTTT"<<endl;
		cout<<"				GGGGGGGGGG   UUU    UUU          JJJ   AAAAAAAAAA   RRRRRRRRRR   AAAAAAAAAA   TTTTTTTTTTTTTT"<<endl;
		cout<<"				GGG          UUU    UUU          JJJ   AA      AA   RRR    RRR   AA      AA         TT      "<<endl;
		cout<<"				GGG          UUU    UUU          JJJ   AA      AA   RRR   RRR    AA      AA         TT      "<<endl;
		cout<<"				GGG          UUU    UUU          JJJ   AAAAAAAAAA   RRR  RRR     AAAAAAAAAA         TT      "<<endl;
		cout<<"				GGG   GGGG   UUU    UUU          JJJ   AAAAAAAAAA   RRRRRR       AAAAAAAAAA         TT      "<<endl;
		cout<<"				GGG   GGGG   UUU    UUU          JJJ   AA      AA   RRR RRR      AA      AA         TT      "<<endl;
		cout<<"				GGG    GGG   UUU    UUU   JJJ    JJJ   AA      AA   RRR  RRR     AA      AA         TT      "<<endl;
		cout<<"				GGGGGGGGGG   UUU    UUU   JJJ    JJJ   AA      AA   RRR   RRR    AA      AA         TT      "<<endl;
		cout<<"				GGGGGGGGGG   UUUUUUUUUU   JJJJJJJJJJ   AA      AA   RRR    RRR   AA      AA         TT      "<<endl;
		cout<<endl<<endl<<endl<<endl<<endl<<endl;
		cout<<"Gujarat offers scenic beauty from Great Rann of Kutch to the hills of Saputara. "<<endl;
		cout<<"Gujarat is the one and only place to view pure Asiatic lions in the world."<<endl;
		cout<<"Within Gujarat there are a wide variety of historic forts, palaces, mosques, temples."<<endl;
		cout<<"Gujarat is well known for its rich culture."<<endl;
		cout<<"Gujarat is habitat for the world's rarest fauna and flora."<<endl<<endl<<endl;
		cout<<"In Gujarat, you can visit these places"<<endl<<endl;
		cout<<"1. Great Rann Of Kutch"<<endl<<endl;
		cout<<"2. Mandvi"<<endl<<endl;
		cout<<"3. Gir Wildlife Sanctuary"<<endl<<endl;
		cout<<"Enter a location";
		cin>>loc;
		if(loc==1)
		{
			place_to_visit="Great Rann Of Kutch";
			cout<<endl<<"You have opted tour for Great Rann Of Kutch"<<endl<<endl;
		}
		else if(loc==2)
		{
			place_to_visit="Mandvi";
			cout<<endl<<"You have opted tour for Mandvi"<<endl<<endl;
		}
		else if(loc==3)
		{
			place_to_visit="Gir Wildlife Sanctuary";
			cout<<endl<<"You have opted tour for Gir Wildlife Sanctuary"<<endl<<endl;
		}
	   	else
		{
			cout<<"Not a correct input"<<endl;
			system("cls");
			check_trip();
		}
		break;
		
		default:
		cout<<"Not a valid input"<<endl<<endl;
		system("cls");
		check_trip();
	}
	
	
}
int trip::hotel_booking()
{
	system("cls");
	cout<<endl<<endl<<endl<<endl;
	cout<<"Select type of Hotel"<<endl<<endl;
	cout<<"1.       3-Star Hotel"<<endl<<endl<<endl;
	cout<<"2.       5-Star Hotel"<<endl<<endl;
	cin>>hotel_rating;
	switch(hotel_rating)
	{
		case 1:
		cout<<endl;
		cout<<"					Hotel Clarks Inn"<<endl<<endl;
		cout<<"					Charges:  Rs.2000/night"<<endl<<endl;
		cout<<"					Distance from nearest railway station : 7km"<<endl<<endl;
		cout<<"					Distance from nearest airport : 15km"<<endl<<endl;
		cout<<endl<<endl<<endl<<endl;
		cout<<"Enter number of family members                       "; cin>>family_members;
		cout<<endl<<endl;
		if(family_members==0)
		hotel_charge=2000*no_of_days;
		else
		hotel_charge=2000*family_members*no_of_days;
		hotel_name="3-Star Hotel - Hotel Clark Inn";
		return hotel_charge;
		break;
		
		case 2:
		cout<<endl;
		cout<<"					The Oberoi"<<endl<<endl;
		cout<<"					Charges: Rs. 6000/night"<<endl<<endl;
		cout<<"					Distance from nearest railway station : 9km"<<endl<<endl;
		cout<<"					Distance from nearest airport : 12km"<<endl<<endl;
		cout<<endl<<endl<<endl<<endl;
		cout<<"Enter number of family members                       "; cin>>family_members;
		cout<<endl<<endl;
		if(family_members==0)
		hotel_charge=6000*no_of_days;
		else
		hotel_charge=6000*family_members*no_of_days;
		hotel_name="5-Star Hotel - The Oberoi";
		return hotel_charge;
		break;
		
		default:
		cout<<"Not a valid input"<<endl<<endl;
		system("cls");
		hotel_booking();
	}
}
void customer::customer_detail()
{
	cout<<endl<<endl<<endl;
	cout<<"Enter customer name                                  "; cin>>customer_name;
	cout<<"Enter boarding place                                 "; cin>>customer_address;
	cout<<"Enter customer contact number                        "; cin>>customer_contact;
	cout<<"Enter the month                                      "; cin>>month;
	cout<<"Enter starting date                                  "; cin>>start_date;
	cout<<"Enter ending date                                    "; cin>>end_date;
	while(start_date>31 || end_date>31)
	{
		cout<<endl<<endl;
		cout<<"Not A Valid Date"<<endl<<endl;
		cout<<"Enter starting date                                  "; cin>>start_date;
		cout<<"Enter ending date                                    "; cin>>end_date;
	}
	if(end_date==start_date)
	no_of_days=1;
	else
	{
		while(end_date<start_date)
		{
			cout<<endl<<"Not A Valid Date"<<endl;
			cout<<"Enter A Valid Date"<<endl<<endl;
			cout<<"Enter ending date                                    "; cin>>end_date;
			cout<<endl;
		}
		no_of_days=end_date-start_date;
	}
}
void trip::display()
{
	cout<<endl<<endl<<endl;
	cout<<"Customer Name           :"<<customer_name<<endl;
	cout<<"Boarding Place          :"<<customer_address<<endl;
	cout<<"Customer Contact No.    :"<<customer_contact<<endl;
	cout<<"Trip Start Date         :"<<start_date<<"/"<<month<<"/2018"<<endl;
	cout<<"Trip End Date           :"<<end_date<<"/"<<month<<"/2018"<<endl;
	cout<<"Location                :"<<place_to_visit<<endl;
	cout<<"Mode Of Travelling      :"<<mode_of_travelling<<endl;
	cout<<"No. Of Family Members   :"<<family_members<<endl;
	cout<<"Hotel Details           :"<<hotel_name<<endl;
	cout<<"Total Expenses          :"<<total_charge<<endl;
	cout<<"                                   Booking Confirmed!!!!";
	fstream f1;
	f1.open("abc.txt", ios::app);
	f1<<"Customer Name           :"<<customer_name<<endl;
	f1<<"Customer Address        :"<<customer_address<<endl;
	f1<<"Customer Contact No.    :"<<customer_contact<<endl;
	f1<<"Trip Start Date         :"<<start_date<<"/"<<month<<"/2018"<<endl;
	f1<<"Trip End Date           :"<<end_date<<"/"<<month<<"/2018"<<endl;
	f1<<"Location                :"<<place_to_visit<<endl;
	f1<<"Mode Of Travelling      :"<<mode_of_travelling<<endl;
	f1<<"No. Of Family Members   :"<<family_members<<endl;
	f1<<"Hotel Details           :"<<hotel_name<<endl;
	f1<<"Total Expence           :"<<total_charge<<endl<<endl;
	f1.close();
}
int main()
{
	char alpha;
	trip t;
	t.check_trip();
	cout<<endl<<endl<<"Press 'Y' to confirm and proceed"<<endl<<"Press 'N' to go back to main menu"; cin>>alpha;
	if(alpha=='Y' || alpha=='y')
	{
		system("cls");
		t.customer_detail();
		t.hotel_booking();
		t.book_trip();
		system("cls");
		t.display();
	}
	else
	{
		system("cls");
		t.check_trip();
		system("cls");
		t.customer_detail();
		t.hotel_booking();
		t.book_trip();
		system("cls");
		t.display();
	}
	getch();
}
