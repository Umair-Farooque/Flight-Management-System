#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void InternationalFlights();
void DomesticFlights();
int main()
{
	int choice,Flightchoice;
	int flightdetails;
	char menu;
    int code;
   char menu2;

	cout << "\t\t\t\t\tWelcome to Bunny Air-Lines  " << endl;
	cout << "_______________________________________________________________________________________________________________________"<<endl;
	cout << "_______________________________________________________________________________________________________________________"<<endl;
	lebel:
	cout<<"1) View Flights and Booking"<<endl;
	cout<<"2) Flight Details "<<endl;
	cout<<"3) Cancel Ticket"<<endl;
	cout<<"4) Feedback"<<endl;
	cout << "_______________________________________________________________________________________________________________________"<<endl;
	cout<<"Please enter a number in order to open the specific menu "<<endl;
	lebel4:
	cin>>choice;
	if(choice==1)
	{
	cout << "\t\t\t\tPlease enter your choice from Lower menu" << endl;
	cout << "_______________________________________________________________________________________________________________________"<<endl;
	cout << endl << endl;
	cout << "1) International Flights" << endl;
	cout << "2) Domestic Flights" << endl;
	cout << "3) Exit To main Menu" << endl;
    cout << "_______________________________________________________________________________________________________________________"<<endl;
    cout << "_______________________________________________________________________________________________________________________"<<endl;
    cout<<"Enter from 1 to 3 to select an option:"<<endl;
	lebel1:
	cin >> Flightchoice;
	if(Flightchoice>3)
	{
		cout<<"Enter a valid choice"<<endl;
		goto lebel1;
	}
	cout << endl << endl << endl;
	if (Flightchoice ==1)
	{
		InternationalFlights();
		cout<<endl<<endl;
		cout << "_______________________________________________________________________________________________________________________"<<endl;
		cout << "_______________________________________________________________________________________________________________________"<<endl;
		cout<<"Enter 'Y' For Main Menu"<<endl;
		cout<<"Enter any Other key to Terminate Program"<<endl;
		cin>>menu;
		if((menu=='Y')||(menu=='y'))
		{
		 goto lebel;
	    }
	    else
	    cout<<"Exiting program......";
	    return 0;
	}
	if(Flightchoice==2)
	{
		DomesticFlights();
		cout<<endl<<endl;
		cout << "_______________________________________________________________________________________________________________________"<<endl;
		cout << "_______________________________________________________________________________________________________________________"<<endl;
		cout<<"Enter 'Y' For Main Menu"<<endl;
		cout<<"Enter any Other key to Terminate Program"<<endl;
		cin>>menu;
		if((menu=='Y')||(menu=='y'))
		{
		 goto lebel;
	    }
	    else
	    cout<<"Exiting program......";
	    return 0;
	}
	if(Flightchoice==3)
	{
		goto lebel;
	}
}
if(choice==2)
{
	char ch;
	cout<<"Enter Your Flight Code: "<<endl;
	lebel2:
	cin>>flightdetails;
	if(flightdetails==12345)
	{
		cout<<"Name:\t\t\t\tAli Hafeez"<<endl;
		cout<<"Flight: \t\t\tFrom Islamabad to Sydney"<<endl;
		cout<<"Time of Flight: \t\t08 AM to 10 AM "<<endl;
	}
	else
	{
	 cout<<"Your Password is wrong"<<endl;
	 cout<<"Re-Enter Password"<<endl;
	 goto lebel2;
    }
    cout<<endl;
    cout<<"Enter 'Y' to return to the Main Menu"<<endl;
    cout<<"Enter any other key to Exit Program"<<endl;
    cin>>ch;
    if((ch=='Y')||(ch=='y'))
    {
    	cout<<"I am going to take you to the Main Menu"<<endl;
		goto lebel;
	}
	else
	cout<<"Exiting Program....."<<endl; 
	return 0;
}
if(choice==3)
{
	cout<<"Enter your Flight Code in order to Cancel Your Ticket:"<<endl;
	cin>>code;
	if(code!=1)
	{
		cout<<"Your ticket is Canceled on Your Request"<<endl;
	}
	cout << "_______________________________________________________________________________________________________________________"<<endl;
	cout<<"Enter Y for Main Menu"<<endl;
	cout<<"Enter any other key to Exit the program"<<endl;
	cin>>menu2;
	if((menu2=='Y')||(menu2=='y'))
		{
		 goto lebel;
	    }
	    else
	    {
		cout<<"Exiting program......";
	    return 0;
		}
}
if(choice==4)
{
	string feedback;
	char menu3;
	cout<<"Welcome User....."<<endl;
	cout << "_______________________________________________________________________________________________________________________"<<endl;
	cout<<"Write your Feedback here to Acknowledge Us...."<<endl;
	cin>>feedback;
	cout << "_______________________________________________________________________________________________________________________"<<endl;
	cout << "_______________________________________________________________________________________________________________________"<<endl;
	cout<<"Hey User!!!"<<endl;
	cout<<"Hope you are doing well."<<endl;
	cout<<"We have received your feedback. Your Feedback worths a lot for us. We hope you enjoyed your journey"<<endl;
	cout<<"Thank You!!!"<<endl;
	cout << "_______________________________________________________________________________________________________________________"<<endl;
	cout<<"Enter Y for Main Menu"<<endl;
	cout<<"Enter any other key to Exit the program"<<endl;
	cin>>menu3;
	if((menu3=='Y')||(menu3=='y'))
		{
		 goto lebel;
	    }
	    else
	    {
		cout<<"Exiting program......";
	    return 0;
		}
}
if(choice>4)
{
	cout<<"You have entered a wrong choice"<<endl;
	cout<<"Re-enter your choice"<<endl;
	goto lebel4;
}
	return 0;
}

void InternationalFlights()
{
	string firstname,secname;
	long long id,numb;
	string flights[10] = { "1) Lahore to Sydney     ","2) Lahore to Malbourne  ","3) Lahore to South-wales","4) Islamabad to Toronto ","5) Islamabad to Chicago ","6) Karachi to LosAngeles",
	"7) Karachi to New York  ","8) Multan to London     ","9) Multan to Hawaii     ","10) Multan to Florida   " };
	float prices[10] = { 12000,15000   ,25000     ,31000    , 45000    ,32000 ,12500 ,35000,55000,32500};
	string time[10] = { "10 AM to 2 PM","02 PM to 4 PM","10 PM to 6 PM","06 PM to 8 PM","10 AM to 2 PM","12 PM to 2 PM","10 AM to 2 PM","10 PM to 6 PM","12 PM to 2 PM","12 PM to 2 PM" };
	cout << "Flights\t\t\t\t\t Prices in pkr\t\t\t\t\tSchedule" << endl;
	cout << "_______________________________________________________________________________________________________________________"<<endl;
	cout << endl << endl;
	for (int i = 0;i < 10;i++)
	{
		cout <<setw(10)<< flights[i] <<setw(23)<<prices[i]<< setw(52)<<time[i]<<endl;
	}
	int selection;
	int sum=0;
	int clas;
	int tickets;
	int n;
	cout << endl;
	cout << "_______________________________________________________________________________________________________________________"<<endl;
	cout << "Enter a number for Booking of flight: "<<endl;
	lebel3:
	cin >> selection;
	cout << "_______________________________________________________________________________________________________________________"<<endl;
	cout << "_______________________________________________________________________________________________________________________"<<endl;
	if(selection>10)
	{
		cout<<"You enterd a wrong choice"<<endl;
		cout<<"Re-Enter your choice"<<endl;
		goto lebel3;
	}
	cout<<"In order to Book a Flight You need to Enter your credentials "<<endl<<endl;
	cout << "Enter your first name: " << endl;
	cin >> firstname;
	cout << "Enter your second name: " << endl;
	cin >> secname;
	cout << "Enter your Id card number: " << endl;
	cin >> id;
	cout << "Enter your Mobile number: +92 ";
	cin >> numb;
	cout << endl << endl << endl;
	cout << endl;
	if (selection==1)
	{
		cout << "For Economy class enter 1 and for Bussiness class enter 2 " << endl << endl;
		cout << "1) Economy Class" << endl;
		cout << "2) Bussiness Class" << endl;
		cin >> clas;
		cout << "how many tickets do you want: ";
		cin >> tickets;
		cout << "Your Flight from "<<flights[0] << " is booked" << endl;
		if(n=tickets)
		{
		 for(n=1;n<=tickets;n++)
		 {
		 sum=sum+prices[0];
	     }
	     cout<<"Price of your Tickets is: ";
	     cout<<sum<<endl;
	     cout<<"Your Code for cheacking Flight Details is 12345"<<endl;
        }
		
	}
	if (selection == 2)
	{
		cout << "For Economy class enter 1 and for Bussiness class enter 2 " << endl << endl;
		cout << "1) Economy Class" << endl;
		cout << "2) Bussiness Class" << endl;
		cin >> clas;
		cout << "how many tickets do you want: ";
		cin >> tickets;
		cout << "Your Flight from " << flights[1] << " is booked" << endl;
		if(n=tickets)
		{
		 for(n=1;n<=tickets;n++)
		 {
		 sum=sum+prices[1];
	     }
	     cout<<"Price of your Tickets is: ";
	     cout<<sum<<endl<<endl;
	     cout<<"Your Code for cheacking Flight Details is 12345"<<endl;
        }
		


	}
	if (selection == 3)
	{
		cout << "For Economy class enter 1 and for Bussiness class enter 2 " << endl << endl;
		cout << "1) Economy Class" << endl;
		cout << "2) Bussiness Class" << endl;
		cin >> clas;
		cout << "how many tickets do you want: ";
		cin >> tickets;
		cout << "Your Flight from " << flights[2] << " is booked" << endl;
		if(n=tickets)
		{
		 for(n=1;n<=tickets;n++)
		 {
		 sum=sum+prices[2];
	     }
	     cout<<"Price of your Tickets is: ";
	     cout<<sum<<endl;
	     cout<<"Your Code for cheacking Flight Details is 12345"<<endl;
        }
	}
	if (selection == 4)
	{
		cout << "For Economy class enter 1 and for Bussiness class enter 2 " << endl << endl;
		cout << "1) Economy Class" << endl;
		cout << "2) Bussiness Class" << endl;
		cin >> clas;
		cout << "how many tickets do you want: ";
		cin >> tickets;
		cout << "Your Flight from " << flights[3] << " is booked" << endl;
		if(n=tickets)
		{
		 for(n=1;n<=tickets;n++)
		 {
		 sum=sum+prices[3];
	     }
	     cout<<"Price of your Tickets is: ";
	     cout<<sum<<endl;
	     cout<<"Your Code for cheacking Flight Details is 12345"<<endl;
        }
		
	}
	if (selection == 5)
	{
		cout << "For Economy class enter 1 and for Bussiness class enter 2 " << endl << endl;
		cout << "1) Economy Class" << endl;
		cout << "2) Bussiness Class" << endl;
		cin >> clas;
		cout << "how many tickets do you want: ";
		cin >> tickets;
		cout << "Your Flight from " << flights[4] << " is booked" << endl;
		if(n=tickets)
		{
		 for(n=1;n<=tickets;n++)
		 {
		 sum=sum+prices[4];
	     }
	     cout<<"Price of your Tickets is: ";
	     cout<<sum<<endl;
	     cout<<"Your Code for cheacking Flight Details is 12345"<<endl;
        }
		


	}
	if (selection == 6)
	{
		cout << "For Economy class enter 1 and for Bussiness class enter 2 " << endl << endl;
		cout << "1) Economy Class" << endl;
		cout << "2) Bussiness Class" << endl;
		cin >> clas;
		cout << "how many tickets do you want: ";
		cin >> tickets;
		cout << "Your Flight from " << flights[5] << " is booked" << endl;
		if(n=tickets)
		{
		 for(n=1;n<=tickets;n++)
		 {
		 sum=sum+prices[5];
	     }
	     cout<<"Price of your Tickets is: ";
	     cout<<sum<<endl;
	     cout<<"Your Code for cheacking Flight Details is 12345"<<endl;
        }

	}
	if (selection == 7)
	{
		cout << "For Economy class enter 1 and for Bussiness class enter 2 " << endl << endl;
		cout << "1) Economy Class" << endl;
		cout << "2) Bussiness Class" << endl;
		cin >> clas;
		cout << "how many tickets do you want: ";
		cin >> tickets;
		cout << "Your Flight from " << flights[6] << " is booked" << endl;
		if(n=tickets)
		{
		 for(n=1;n<=tickets;n++)
		 {
		 sum=sum+prices[6];
	     }
	     cout<<"Price of your Tickets is: ";
	     cout<<sum<<endl;
	     cout<<"Your Code for cheacking Flight Details is 12345"<<endl;
        }

	}
	if (selection == 8)
	{
		cout << "For Economy class enter 1 and for Bussiness class enter 2 " << endl << endl;
		cout << "1) Economy Class" << endl;
		cout << "2) Bussiness Class" << endl;
		cin >> clas;
		cout << "how many tickets do you want: ";
		cin >> tickets;
		cout << "Your Flight from " << flights[7] << " is booked" << endl;
		if(n=tickets)
		{
		 for(n=1;n<=tickets;n++)
		 {
		 sum=sum+prices[7];
	     }
	     cout<<"Price of your Tickets is: ";
	     cout<<sum<<endl;
	     cout<<"Your Code for cheacking Flight Details is 12345"<<endl;
        }
		
	}
	if (selection == 9)
	{
		cout << "For Economy class enter 1 and for Bussiness class enter 2 " << endl << endl;
		cout << "1) Economy Class" << endl;
		cout << "2) Bussiness Class" << endl;
		cin >> clas;
		cout << "how many tickets do you want: ";
		cin >> tickets;
		cout << "Your Flight from " << flights[8] << " is booked" << endl;
		if(n=tickets)
		{
		 for(n=1;n<=tickets;n++)
		 {
		 sum=sum+prices[8];
	     }
	     cout<<"Price of your Tickets is: ";
	     cout<<sum<<endl;
	     cout<<"Your Code for cheacking Flight Details is 12345"<<endl;
        }
		
	}
	if (selection == 10)
	{
		cout << "For Economy class enter 1 and for Bussiness class enter 2 " << endl << endl;
		cout << "1) Economy Class" << endl;
		cout << "2) Bussiness Class" << endl;
		cin >> clas;
		cout << "how many tickets do you want: ";
		cin >> tickets;
		cout << "Your Flight from " << flights[9] << " is booked" << endl;
		if(n=tickets)
		{
		 for(n=1;n<=tickets;n++)
		 {
		 sum=sum+prices[9];
	     }
	     cout<<"Price of your Tickets is: ";
	     cout<<sum<<endl;
	     cout<<"Your Code for cheacking Flight Details is 12345"<<endl;
        }
		
	}
}
void DomesticFlights()
{
	string firstname,secname;
	long long id,numb;
	string flights[10] = { "1) Lahore to Karachi   ","2) Lahore to Multan    ","3) Lahore to Bahawalpur","4) Islamabad to Karachi","5) Islamabad to Lahore ","6) Karachi to Islamabad",
	"7) Karachi to Lahore   ","8) Multan to Karachi   ","9) Multan to Lahore    ","10) Multan to Islamabad" };
	float prices[10] = { 1200,1500   ,2500     ,3100    , 4500    ,3200 ,1250 ,3500,5500,3250};
	string time[10] = { "10 AM to 2 PM   ","2 PM to 4 PM    ","10 PM to 6 PM   ","6 PM to 8 PM    ","10 AM to 2 PM   ","12 PM to 2 PM   ","10 AM to 2 PM   ","10 PM to 6 PM   ","12 PM to 2 PM   ","12 PM to 2 PM   " };
	cout << "Flights\t\t\t\t\t Prices\t\t\t\tSchedule" << endl;
	cout << "_______________________________________________________________________________________________________________________"<<endl;
	cout << endl << endl;
	for (int i = 0;i < 10;i++)
		{
		cout <<setw(10)<< flights[i] <<setw(23)<<prices[i]<< setw(35)<<time[i]<<endl;
	    }
	 int selection;
	 int sum=0;
	 int clas;
	 int tickets;
	 int n;
	 cout << endl;
	 cout << "_______________________________________________________________________________________________________________________"<<endl;
	 cout << "Enter a number for Booking of flight"<<endl;
	 lebel3:
	 cin >> selection;
	cout << "_______________________________________________________________________________________________________________________"<<endl;
	cout << "_______________________________________________________________________________________________________________________"<<endl;
		if(selection>10)
	{
		cout<<"You enterd a wrong choice"<<endl;
		cout<<"Re-Enter your choice"<<endl;
		goto lebel3;
	}
	cout<<"In order to Book a Flight You need to Enter your credentials "<<endl<<endl;
	cout << "Enter your first name: " << endl;
	cin >> firstname;
	cout << "Enter your second name: " << endl;
	cin >> secname;
	cout << "Enter your Id card number: " << endl;
	cin >> id;
	cout << "Enter your Mobile number: +92 ";
	cin >> numb;
	 cout << endl;
	 	if (selection==1)
	{
		cout << "For Economy class enter 1 and for Bussiness class enter 2 " << endl << endl;
		cout << "1) Economy Class" << endl;
		cout << "2) Bussiness Class" << endl;
		cin >> clas;
		cout << "how many tickets do you want: ";
		cin >> tickets;
		cout << "Your Flight from "<<flights[0] << " is booked" << endl;
		if(n=tickets)
		{
		 for(n=1;n<=tickets;n++)
		 {
		 sum=sum+prices[0];
	     }
	     cout<<"Price of your Tickets is: ";
	     cout<<sum<<endl;
	     cout<<"Your Code for cheacking Flight Details is 12345"<<endl;
        }
		
	}
	if (selection == 2)
	{
		cout << "For Economy class enter 1 and for Bussiness class enter 2 " << endl << endl;
		cout << "1) Economy Class" << endl;
		cout << "2) Bussiness Class" << endl;
		cin >> clas;
		cout << "how many tickets do you want: ";
		cin >> tickets;
		cout << "Your Flight from " << flights[1] << " is booked" << endl;
		if(n=tickets)
		{
		 for(n=1;n<=tickets;n++)
		 {
		 sum=sum+prices[1];
	     }
	     cout<<"Price of your Tickets is: ";
	     cout<<sum<<endl;
	     cout<<"Your Code for cheacking Flight Details is 12345"<<endl;
        }
		
	}
	if (selection == 3)
	{
		cout << "For Economy class enter 1 and for Bussiness class enter 2 " << endl << endl;
		cout << "1) Economy Class" << endl;
		cout << "2) Bussiness Class" << endl;
		cin >> clas;
		cout << "how many tickets do you want: ";
		cin >> tickets;
		cout << "Your Flight from " << flights[2] << " is booked" << endl;
		if(n=tickets)
		{
		 for(n=1;n<=tickets;n++)
		 {
		 sum=sum+prices[2];
	     }
	     cout<<"Price of your Tickets is: ";
	     cout<<sum<<endl;
	     cout<<"Your Code for cheacking Flight Details is 12345"<<endl;
        }
		
	}
	if (selection == 4)
	{
		cout << "For Economy class enter 1 and for Bussiness class enter 2 " << endl << endl;
		cout << "1) Economy Class" << endl;
		cout << "2) Bussiness Class" << endl;
		cin >> clas;
		cout << "how many tickets do you want: ";
		cin >> tickets;
		cout << "Your Flight from " << flights[3] << " is booked" << endl;
		if(n=tickets)
		{
		 for(n=1;n<=tickets;n++)
		 {
		 sum=sum+prices[3];
	     }
	     cout<<"Price of your Tickets is: ";
	     cout<<sum<<endl;
	     cout<<"Your Code for cheacking Flight Details is 12345"<<endl;
        }

	}
	if (selection == 5)
	{
		cout << "For Economy class enter 1 and for Bussiness class enter 2 " << endl << endl;
		cout << "1) Economy Class" << endl;
		cout << "2) Bussiness Class" << endl;
		cin >> clas;
		cout << "how many tickets do you want: ";
		cin >> tickets;
		cout << "Your Flight from " << flights[4] << " is booked" << endl;
		if(n=tickets)
		{
		 for(n=1;n<=tickets;n++)
		 {
		 sum=sum+prices[4];
	     }
	     cout<<"Price of your Tickets is: ";
	     cout<<sum<<endl;
	     cout<<"Your Code for cheacking Flight Details is 12345"<<endl;
        }

	}
	if (selection == 6)
	{
		cout << "For Economy class enter 1 and for Bussiness class enter 2 " << endl << endl;
		cout << "1) Economy Class" << endl;
		cout << "2) Bussiness Class" << endl;
		cin >> clas;
		cout << "how many tickets do you want: ";
		cin >> tickets;
		cout << "Your Flight from " << flights[5] << " is booked" << endl;
		if(n=tickets)
		{
		 for(n=1;n<=tickets;n++)
		 {
		 sum=sum+prices[5];
	     }
	     cout<<"Price of your Tickets is: ";
	     cout<<sum<<endl;
	     cout<<"Your Code for cheacking Flight Details is 12345"<<endl;
        }
		
	}
	if (selection == 7)
	{
		cout << "For Economy class enter 1 and for Bussiness class enter 2 " << endl << endl;
		cout << "1) Economy Class" << endl;
		cout << "2) Bussiness Class" << endl;
		cin >> clas;
		cout << "how many tickets do you want: ";
		cin >> tickets;
		cout << "Your Flight from " << flights[6] << " is booked" << endl;
		if(n=tickets)
		{
		 for(n=1;n<=tickets;n++)
		 {
		 sum=sum+prices[6];
	     }
	     cout<<"Price of your Tickets is: ";
	     cout<<sum<<endl;
	     cout<<"Your Code for cheacking Flight Details is 12345"<<endl;
        }

	}
	if (selection == 8)
	{
		cout << "For Economy class enter 1 and for Bussiness class enter 2 " << endl << endl;
		cout << "1) Economy Class" << endl;
		cout << "2) Bussiness Class" << endl;
		cin >> clas;
		cout << "how many tickets do you want: ";
		cin >> tickets;
		cout << "Your Flight from " << flights[7] << " is booked" << endl;
		if(n=tickets)
		{
		 for(n=1;n<=tickets;n++)
		 {
		 sum=sum+prices[7];
	     }
	     cout<<"Price of your Tickets is: ";
	     cout<<sum<<endl;
	     cout<<"Your Code for cheacking Flight Details is 12345"<<endl;
        }

	}
	if (selection == 9)
	{
		cout << "For Economy class enter 1 and for Bussiness class enter 2 " << endl << endl;
		cout << "1) Economy Class" << endl;
		cout << "2) Bussiness Class" << endl;
		cin >> clas;
		cout << "how many tickets do you want: ";
		cin >> tickets;
		cout << "Your Flight from " << flights[8] << " is booked" << endl;
		if(n=tickets)
		{
		 for(n=1;n<=tickets;n++)
		 {
		 sum=sum+prices[8];
	     }
	     cout<<"Price of your Tickets is: ";
	     cout<<sum<<endl;
	     cout<<"Your Code for cheacking Flight Details is 12345"<<endl;
        }

	}
	if (selection == 10)
	{
		cout << "For Economy class enter 1 and for Bussiness class enter 2 " << endl << endl;
		cout << "1) Economy Class" << endl;
		cout << "2) Bussiness Class" << endl;
		cin >> clas;
		cout << "how many tickets do you want: ";
		cin >> tickets;
		cout << "Your Flight from " << flights[9] << " is booked" << endl;
		if(n=tickets)
		{
		 for(n=1;n<=tickets;n++)
		 {
		 sum=sum+prices[9];
	     }
	     cout<<"Price of your Tickets is: ";
	     cout<<sum<<endl;
	     cout<<"Your Code for cheacking Flight Details is 12345"<<endl;
        }
    }
}
