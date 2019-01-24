#include<iostream>
#include<conio.h>
#include<process.h>
#include<iomanip>
#include<cstring>
#include<fstream>
using namespace std;
void add_record();
void search_record();
void delete_record();
void displayall_record();
void displaybyplane_record(int display);
void print_statement(int destin,int depart);
class  booking
{ 
	protected:
		char passenger[50];
		char incharge[50];
		char destin;
		char depart;
	public:
		void get_data()
		{	
			cout<<"Incharge's' Name: ";
			cin.ignore();
			cin.getline(incharge,50);
			cout<<"Passenger's Name: ";
			cin.getline(passenger,50);
			up1:
			cout<<"Enter \n 'I' for Islamabad \n 'K' for Karachi \n 'M' for Multan \n 'L' for Lahore";
			cout<<"\n\t origin: ";cin>>depart;
		 	if(depart=='i'||depart=='I'||depart=='l'||depart=='L'||depart=='k'||depart=='K'||depart=='m'||depart=='M');
			else
			{
				cout<<"\n\n\t\t\tInvalid Selection";
				cout<<"\n\t\t\t\t\tSelect Again\n\n\n";	
				cout<<"Incharge's' Name: "<<incharge;
				cout<<"\nPassenger's Name: "<<passenger<<"\n";
				goto up1;
			}
			up2:
			cout<<"Enter \n 'I' for Islamabad \n 'K' for Karachi \n 'M' for Multan \n 'L' for Lahore";
			cout<<"\n\t destination: ";cin>>destin;
			if((destin=='i'||destin=='I'||destin=='l'||destin=='L'||destin=='k'||destin=='K'||destin=='m'||destin=='M')&&(depart!=destin));
			else
			{	if(destin==depart)
					cout<<"\n\nPlane Cannot Travel From "<<depart<<" back to "<<destin;
				cout<<"\n\n\t\t\tInvalid Selection";
				cout<<"\n\t\t\t\t\tSelect Again\n\n\n";	
				cout<<"Incharge's' Name: "<<incharge;
				cout<<"\nPassenger's Name: "<<passenger<<"\n";
				cout<<"Enter \n 'I' for Islamabad \n 'K' for Karachi \n 'M' for Multan \n 'L' for Lahore";
				cout<<"\n\t origin: "<<depart<<"\n";
				goto up2;
			}
		}
};
class N117
{	private:
	bool status;
	protected:
		int N117_kar_lah=200,N117_kar_isl=200;
		int N117_isl_lah=200,N117_isl_kar=200;
		int N117_lah_isl=200,N117_lah_kar=200;
	public:
		//--------------FUNCTION NO 1--------------//
		void available(char depart,char destin)//THIS FUNCTIONS RETURNS THE STATUS OF SEATS AVAILABILTY//
		{
			if((depart=='i'||depart=='I')&&(destin=='k'||destin=='K'))
				{
					
						status=(N117_isl_kar!=0)? true:false;
				
				}
			if((depart=='i'||depart=='I')&&(destin=='l'||destin=='L'))
				{
						status=(N117_isl_lah!=0)? true:false;
					
				}
			if((depart=='l'||depart=='L')&&(destin=='k'||destin=='K'))
				{	
				
						status=(N117_lah_kar!=0)? true:false;
				
				}
			if((depart=='l'||depart=='L')&&(destin=='i'||destin=='L'))
				{
					
						status=(N117_lah_isl!=0)? true:false;
				}
			if((depart=='k'||depart=='K')&&(destin=='l'||destin=='L'))
				{
					
						status=(N117_kar_lah!=0)? true:false;
				}
			if((depart=='k'||depart=='K')&&(destin=='i'||destin=='I'))
				{
				
						status=(N117_kar_isl!=0)? true:false;
				}
		}
		//--------------FUNCTION NO 3--------------//
		int time(char destin,char depart)//THIS FUNCTIONS DISPLAYS N117 FLIGHTS FROM "DEPART" TO "DESTIN"//
		{
			switch(depart)
			{
				case 'I':
				case 'i':
					switch(destin)
			   		{
			    		case 'K':
				   		case 'k':
				    		cout<<"\n\n     \t Departure at   |      Arrival at   |      Economy Seats Status   |      Business Seats Status";
					    	cout<<"\n     \t  2:00 am       |       4:00 am";
					    	available(depart,destin);
							if(status)
								cout<<"     |          Available      |";
					    	else 
								cout<<"     |        Not Available    |";
							available(depart,destin);
							break;
						case 'L':
						case 'l':
							cout<<"\n     \t Departure at   |      Arrival at   |     Status";
							cout<<"\n     \t  8:00 am       |       10:00 am";
							available(depart,destin);
							if(status)
								cout<<"    |   Available";
							else 
								cout<<"    |  Not Available";
			    	}
			    	break;
				case 'L':
				case 'l':
					switch(destin)
			    	{
			    		case 'K':
				    	case 'k':
				    		cout<<"\n     \t Departure at   |      Arrival at   |     Status";
					    	cout<<"\n     \t  11:00 am      |       01:00 pm";
					    	available(depart,destin);
							if(status)
								cout<<"    |   Available";
					    	else 
								cout<<"    |  Not Available";
							break;
						case 'I':
						case 'i':
							cout<<"\n     \t Departure at   |      Arrival at   |     Status";
							cout<<"\n     \t  05:00 pm      |       07:00 pm";
							available(depart,destin);
							if(status)
								cout<<"    |   Available";
							else 
								cout<<"    |  Not Available";
			    	}
			    	break;
				case 'K':
				case 'k':
					switch(destin)
		   			{
				    	case 'L':
					    case 'l':
					    	cout<<"\n     \t Departure at   |      Arrival at   |     Status";
						    cout<<"\n     \t  02:00 pm      |       04:00 pm";
					    	available(depart,destin);
							if(status)
								cout<<"    |   Available";
						    else 
								cout<<"    |  Not Available";
							break;
						case 'I':
						case 'i':
							cout<<"\n     \t Departure at   |      Arrival at   |     Status";
							cout<<"\n     \t  05:00 am      |       07:00 am";
							available(depart,destin);
							if(status)
								cout<<"    |   Available";
							else 
								cout<<"    |  Not Available";
			    }
					break;
			}
			return status;
		}
		void update_seats(char depart,char destin)
		{
			if((depart=='i'||depart=='I')&&(destin=='k'||destin=='K'))
			{
				N117_isl_kar--;
			}
			if((depart=='i'||depart=='I')&&(destin=='l'||destin=='L'))
			{
				N117_isl_lah--;
			}
			if((depart=='l'||depart=='L')&&(destin=='k'||destin=='K'))
			{	
				N117_lah_kar--;
			}
			if((depart=='l'||depart=='L')&&(destin=='i'||destin=='L'))
			{
				N117_lah_isl--;
			}
			if((depart=='k'||depart=='K')&&(destin=='l'||destin=='L'))
			{
				N117_kar_lah--;
			}
			if((depart=='k'||depart=='K')&&(destin=='i'||destin=='I'))
			{
				N117_kar_isl--;
			}
		}			
		
};
class N720
{
	protected:
		int N720_economy_isl_lah=300,N720_economy_lah_isl=300;
	public:
	//--------------FUNCTION NO 1--------------//
		bool available(char depart)//THIS FUNCTION RETURNS THE STATUS OF SEATS AVAILABILTY//
			{
				if(depart=='i'||depart=='I')
				{
					return (N720_economy_isl_lah!=0)? true:false;
				}
			if(depart=='l'||depart=='L')
				{
					return (N720_economy_isl_lah!=0)? true:false;	
				}
			}
	//--------------FUNCTION NO 2--------------//
		int time(char destin,char depart)//THIS FUNCTION DISPLAYS N720 FLIGHTS FROM "DEPART" TO "DESTIN"//
		{int status;	
			switch(depart)
			{
				case 'I':
				case 'i':
					switch(destin)
			   		{
			    		case 'L':
				   		case 'l':
				    		cout<<"\n     \t Departure at   |      Arrival at   |     Status";
					    	cout<<"\n     \t  07:00 am      |       09:00 am";
					    	status=available(depart);
							if(status)
								cout<<"    |   Available";
					    	else 
								cout<<"    |  Not Available";
			    	}
			    	break;
				case 'L':
				case 'l':
					switch(destin)
			    	{
			    		case 'I':
				    	case 'i':
				    		cout<<"\n     \t Departure at   |      Arrival at   |     Status";
					    	cout<<"\n     \t  03:00 am      |       05:00 am";
					    	status=available(depart);
							if(status)
								cout<<"    |   Available";
					    	else 
								cout<<"    |  Not Available";
			    	}
			    	break;
			}
			return status;
		}	
		void update_seats(char depart)
		{
			if(depart=='i'||depart=='I')
				{
				N720_economy_isl_lah--;
				}
			if(depart=='l'||depart=='L')
				{
				N720_economy_isl_lah--;	
				}
		}
};
class N121
{ 
	protected:
		int N121_economy_isl_kar=170,N121_economy_isl_mul=170;
		int N121_economy_lah_kar=170,N121_economy_lah_mul=170;
		int N121_economy_kar_lah=170,N121_economy_kar_isl=170;
		int N121_economy_mul_lah=170,N121_economy_mul_isl=170;
	public:
		//--------------FUNCTION NO 1--------------//
		bool available(char depart,char destin)//THIS FUNCTION RETURNS THE STATUS OF SEATS AVAILABILTY//
			{
				if((depart=='i'||depart=='I')&&(destin=='k'||destin=='K'))
					{
						return	(N121_economy_isl_kar!=0)? true:false;
					}
				if((depart=='i'||depart=='I')&&(destin=='m'||destin=='M'))
					{
						return	(N121_economy_isl_mul!=0)? true:false;
					}
				if((depart=='l'||depart=='L')&&(destin=='k'||destin=='K'))
					{	
						return	(N121_economy_lah_kar!=0)? true:false;
					}
				if((depart=='l'||depart=='L')&&(destin=='m'||destin=='M'))
					{
						return	(N121_economy_lah_mul!=0)? true:false;
					}
				if((depart=='k'||depart=='K')&&(destin=='l'||destin=='L'))
					{
						return	(N121_economy_kar_lah!=0)? true:false;
					}
				if((depart=='k'||depart=='K')&&(destin=='i'||destin=='I'))
					{
						return	(N121_economy_kar_isl!=0)? true:false;
					}
				if((depart=='m'||depart=='M')&&(destin=='l'||destin=='L'))
					{
						return	(N121_economy_mul_lah!=0)? true:false;
					}
				if((depart=='m'||depart=='M')&&(destin=='i'||destin=='I'))
					{
						return	(N121_economy_mul_isl!=0)? true:false;
			
					}
	    	}
		//--------------FUNCTION NO 2--------------//
	int time(char destin,char depart)//THIS FUNCTION DISPLAYS N121 FLIGHTS FROM "DEPART" TO "DESTIN"//
		{int status;	
			switch(depart)
			{ 
				case 'I':
				case 'i':
					switch(destin)
			   		{
			    		case 'K':
				   		case 'k':
				    		cout<<"\n     \t Departure at   |      Arrival at   |     Status";
					    	cout<<"\n     \t  09:00 pm      |       11:00 pm";
					    	status=available(depart,destin);
							if(status)
								cout<<"    |   Available";
					    	else 
								cout<<"    |  Not Available";
							break;
						case 'M':
						case 'm':
							cout<<"\n     \t Departure at   |      Arrival at   |     Status";
							cout<<"\n     \t  09:00 am      |       11:00 am";
							status=available(depart,destin);
							if(status)
								cout<<"    |   Available";
							else 
								cout<<"    |  Not Available";
			    	}
			    	break;
				case 'L':
				case 'l':
					switch(destin)
			    	{
			    		case 'K':
				    	case 'k':
				    		cout<<"\n     \t Departure at   |      Arrival at   |     Status";
					    	cout<<"\n     \t  03:00 pm      |       05:00 pm";
					    	status=available(depart,destin);
							if(status)
								cout<<"    |   Available";
					    	else 
								cout<<"    |  Not Available";
							break;
						case 'M':
						case 'm':
							cout<<"\n     \t Departure at   |      Arrival at   |     Status";
							cout<<"\n     \t  03:00 am      |       05:00 am";
							status=available(depart,destin);
							if(status)
								cout<<"    |   Available";
							else 
								cout<<"    |  Not Available";
			    	}
			    	break;
				case 'K':
				case 'k':
					switch(destin)
		   			{
				    	case 'L':
					    case 'l':
					    	cout<<"\n     \t Departure at   |      Arrival at   |     Status";
						    cout<<"\n     \t  12:00 am      |       02:00 am";
					    	status=available(depart,destin);
							if(status)
								cout<<"    |   Available";
						    else 
								cout<<"    |  Not Available";
							break;
						case 'I':
						case 'i':
							cout<<"\n     \t Departure at   |      Arrival at   |     Status";
							cout<<"\n     \t  06:00 pm      |       08:00 pm";
							status=available(depart,destin);
							if(status)
								cout<<"    |   Available";
							else 
								cout<<"    |  Not Available";
			    }
					break;
			case 'M':
			case 'm':
				    switch(destin)
		   			{
				    	case 'L':
					    case 'l':
					    	cout<<"\n     \t Departure at   |      Arrival at   |     Status";
						    cout<<"\n     \t  12:00 pm      |       02:00 pm";
					    	status=available(depart,destin);
							if(status)
								cout<<"    |   Available";
						    else 
								cout<<"    |  Not Available";
							break;
						case 'I':
						case 'i':
							cout<<"\n     \t Departure at   |      Arrival at   |     Status";
							cout<<"\n     \t  06:00 am      |       08:00 am";
							status=available(depart,destin);
							if(status)
								cout<<"    |   Available";
							else 
								cout<<"    |  Not Available";
			    }
					break;
			}
		return status;
		}
		void update_seats(char depart,char destin)
		{
			if((depart=='i'||depart=='I')&&(destin=='k'||destin=='K'))
			{
				N121_economy_isl_kar--;
			}
			if((depart=='i'||depart=='I')&&(destin=='m'||destin=='M'))
			{
				N121_economy_isl_mul--;
			}
			if((depart=='l'||depart=='L')&&(destin=='k'||destin=='K'))
			{	
				N121_economy_lah_kar--;
			}
			if((depart=='l'||depart=='L')&&(destin=='m'||destin=='M'))
			{
				N121_economy_lah_mul--;
			}
			if((depart=='k'||depart=='K')&&(destin=='l'||destin=='L'))
			{
				N121_economy_kar_lah--;
			}
			if((depart=='k'||depart=='K')&&(destin=='i'||destin=='I'))
			{
				N121_economy_kar_isl--;
			}
			if((depart=='m'||depart=='M')&&(destin=='l'||destin=='L'))
			{
				N121_economy_mul_lah--;	
			}
			if((depart=='m'||depart=='M')&&(destin=='i'||destin=='I'))
			{
				N121_economy_mul_isl--;
			}
		}
		
};
class N679
{
	protected:
		int N679_economy_kar_mul=100;
		int N679_economy_mul_kar=100;
	public:
		//--------------FUNCTION NO 1--------------//
		bool available(char depart)//THIS FUNCTION RETURNS THE STATUS OF SEATS AVAILABILTY//
			{
				if(depart=='m'||depart=='M')
					return (N679_economy_mul_kar!=0)? true:false;
				else if(depart=='k'||depart=='K')
					return (N679_economy_kar_mul!=0)? true:false;
			}		
		//--------------FUNCTION NO 2--------------//
        int time(char destin,char depart)//THIS FUNCTION DISPLAYS N679 FLIGHTS FROM "DEPART" TO "DESTIN"//
		{int status;
			switch(depart)
			{
				case 'K':
				case 'k':
	 				switch(destin)
			   		{
			    		case 'M':
				   		case 'm':
				    		cout<<"\n     \t Departure at   |      Arrival at   |     Status";
					    	cout<<"\n     \t  07:00 am      |       09:00 am";
					    	status=available(depart);
							if(status)
								cout<<"    |   Available";
					    	else 
								cout<<"    |  Not Available";
			    	}
			    	break;
				case 'M':
				case 'm':
					switch(destin)
			    	{
			    		case 'K':
				    	case 'k':
				    		cout<<"\n     \t Departure at   |      Arrival at   |     Status";
					    	cout<<"\n     \t  07:00 pm      |       09:00 pm";
					    	status=available(depart);
							if(status)
								cout<<"    |   Available";
					    	else 
								cout<<"    |  Not Available";
			    	}
			    	break;
			}
			return status;
		}
		void update_seats(char depart)
		{
			if(depart=='m'||depart=='M')
				{
				N679_economy_mul_kar--;
				}
			if(depart=='k'||depart=='K')
				{
				N679_economy_kar_mul--;	
				}
				
		}
};
class aeroplane:private N117,private N720,private N121,private N679,private booking
{    
	private:
		char plane[8];
		int status;
		char depart_time[8];
		char arri_time[8];
	public:
//--------------FUNCTION NO:1----------------//		
		int get_data()//THIS FUNCTION SHOW PLANE MENU GOING FROM "DEPART" TO "DESTIN" AND INPUT CHOSEN PLANE//
		{	int a,b,c;
			booking::get_data();
			switch(depart)
			{
				case 'i':
				case 'I':
					upi:
					print_statement(destin,depart);
					if(destin!='m'&&destin!='M')
						{cout<<"\nN117";a=N117::time(destin,depart);}
					if(destin!='l'&&destin!='L')
						{cout<<"\nN121";b=N121::time(destin,depart);}
					if(destin=='l'||destin=='L')
						{cout<<"\nN720";c=N720::time(destin,depart);}
					cout<<"\n\n\tEnter Plane Name :";cin>>plane;
					if((strcmpi(plane,"N117")==0)&&(destin!='m'&&destin!='M'))
						{	if(a==1)
								N117::update_seats(depart,destin);
							else 
							{
								cout<<"Seats are not available";
								return 0;
							}
						}
					else if((strcmpi(plane,"N121")==0)&&(destin!='l'&&destin!='L'))
						{	if(b==1)
								N121::update_seats(depart,destin);
							else 
							{
								cout<<"Seats are not available";
								return 0;
							}
						}
					else if((strcmpi(plane,"N720")==0)&&(destin=='l'||destin=='L'))
						{	if(c==1)
								N720::update_seats(depart);
							else 
							{
								cout<<"Seats are not available";
								return 0;
							}
						}
					else
					 {
						cout<<"\n\n\n\t\tInvalid plane Selection";
						goto upi;
					}	
					storing_time();
					return 1;
					break;
				case 'k':
				case 'K':
					upk:
					print_statement(destin,depart);
					if(destin!='m'&&destin!='M')
						{cout<<"\nN117";a=N117::time(destin,depart);}
					if(destin!='m'&&destin!='M')
						{cout<<"\nN121";b=N121::time(destin,depart);}
					if(destin=='m'||destin=='M')
						{cout<<"\nN679";c=N679::time(destin,depart);}
					cout<<"\n\n\tEnter Plane Name :";cin>>plane;
					if((strcmpi(plane,"N117")==0)&&(destin!='m'&&destin!='M'))
						{	if(a==1)
								N117::update_seats(depart,destin);
							else 
							{
								cout<<"Seats are not available";
								return 0;
							}
						}
					else if((strcmpi(plane,"N121")==0)&&(destin!='m'&&destin!='M'))
						{	if(b==1)
								N121::update_seats(depart,destin);
							else 
							{
								cout<<"Seats are not available";
								return 0;
							}
						}
					else if((strcmpi(plane,"N679")==0)&&(destin=='m'||destin=='M'))
						{	if(c==1)
								N679::update_seats(depart);
							else 
							{
								cout<<"Seats are not available";
								return 0;
							}
						}
					else
					 {
						cout<<"\n\n\n\t\tInvalid plane Selection\n\n";
						goto upk;
					}	
					storing_time();
					return 1;
					break;
				case 'l':
				case 'L':
					upl:
					print_statement(destin,depart);
					if(destin!='m'&&destin!='M')
						{cout<<"\nN117";a=N117::time(destin,depart);}
					if(destin!='i'&&destin!='I')
						{cout<<"\nN121";b=N121::time(destin,depart);}
					if(destin=='i'||destin=='I')
						{cout<<"\nN720";c=N720::time(destin,depart);}
					cout<<"\n\n\tEnter Plane Name :";cin>>plane;
					if((strcmpi(plane,"N117")==0)&&(destin!='m'&&destin!='M'))
						{	if(a==1)
								N117::update_seats(depart,destin);
							else 
							{
								cout<<"Seats are not available";
								return 0; 
							}
						}
					else if((strcmpi(plane,"N121")==0)&&(destin!='i'&&destin!='I'))
						{	if(b==1)
								N121::update_seats(depart,destin);
							else 
							{
								cout<<"Seats are not available";
								return 0;
							}
						}
					else if((strcmpi(plane,"N720")==0)&&(destin=='i'||destin=='I'))
						{	if(c==1)
								N720::update_seats(depart);
							else 
							{
								cout<<"Seats are not available";
								return 0;
							}
						}
					else
					 {
						cout<<"\n\n\n\t\tInvalid plane Selection\n\n";
						goto upl;
					}	
					storing_time();
					return 1;
					break;
				case 'm':
				case 'M':
					upm:
					print_statement(destin,depart);
					if(destin!='k'&&destin!='K')
						{cout<<"\nN121";a=N121::time(destin,depart);}
					if(destin=='k'||destin=='K')
						{cout<<"\nN679";b=N679::time(destin,depart);}
					cout<<"\n\n\tEnter Plane Name :";cin>>plane;
					if((strcmpi(plane,"N121")==0)&&(destin!='k'&&destin!='K'))
						{	if(a==1)
								N121::update_seats(depart,destin);
							else 
							{
								cout<<"Seats are not available";
								return 0;
							}
						}
					else if((strcmpi(plane,"N679")==0)&&(destin=='k'||destin=='K'))
						{	if(b==1)
								N679::update_seats(depart);
							else 
							{
								cout<<"Seats are not available";
								return 0;
							}
						}
					else
					 {
						cout<<"\n\n\n\t\tInvalid plane Selection";
						goto upm;
					}	
					storing_time();
					return 1;
					break;
			
			}
		}
//--------------------FUNCTION NO 2------------------------------//		
		void storing_time()//THIS FUNCTION STORES THE "DEPT_TIME" AND "ARRI_TIME" ACCORDING TO CHOSEN PLANE(FROM "DEPART" TO "DESTIN"//
		{	switch(depart)
			{
				case 'I':
				case 'i':
					switch(destin)
					{
						case 'k':
						case 'K':
							if(strcmpi(plane,"n117")==0)
								{
									strcpy(depart_time,"02:00am");
									strcpy(arri_time,"04:00am");
								}
							if(strcmpi(plane,"n112")==0)
								{
									strcpy(depart_time,"09:00pm");
									strcpy(arri_time,"11:00pm");
								}
							break;
						case 'l':
						case 'L':
								if(strcmpi(plane,"n117")==0)
								{
									strcpy(depart_time,"08:00am");
									strcpy(arri_time,"10:00am");
								}
								if(strcmpi(plane,"n720")==0)
								{
									strcpy(depart_time,"07:00am");
									strcpy(arri_time,"09:00am");
							
								}
							break;
						case 'm':
						case 'M':
							if(strcmpi(plane,"n121")==0)
								{
									strcpy(depart_time,"09:00am");
									strcpy(arri_time,"11:00am");
								}
							break;
					}
					break;
				case 'K':
				case 'k':
					switch(destin)
					{
						case 'i':
						case 'I':
							if(strcmpi(plane,"n117")==0)
								{
									strcpy(depart_time,"05:00am");
									strcpy(arri_time,"07:00am");
								}
							if(strcmpi(plane,"n121")==0)
								{
									strcpy(depart_time,"06:00pm");
									strcpy(arri_time,"08:00pm");
								}
							break;
						case 'l':
						case 'L':
								if(strcmpi(plane,"n117")==0)
								{
									strcpy(depart_time,"02:00pm");
									strcpy(arri_time,"04:00pm");
								}
								if(strcmpi(plane,"n121")==0)
								{
									strcpy(depart_time,"12:00am");
									strcpy(arri_time,"02:00am");
								}
							break;
						case 'm':
						case 'M':
							if(strcmpi(plane,"n679")==0)
								{
									strcpy(depart_time,"07:00am");
									strcpy(arri_time,"09:00am");
								}
							break;
					}
					break;
				case 'L':
				case 'l':
					switch(destin)
					{
						case 'i':
						case 'I':
							if(strcmpi(plane,"n117")==0)
								{
									strcpy(depart_time,"05:00pm");
									strcpy(arri_time,"07:00pm");
								}
							if(strcmpi(plane,"n720")==0)
								{
									strcpy(depart_time,"03:00am");
									strcpy(arri_time,"05:00am");
								}
							break;
						case 'k':
						case 'K':
								if(strcmpi(plane,"n117")==0)
								{
									strcpy(depart_time,"11:00am");
									strcpy(arri_time,"01:00pm");
								}
								if(strcmpi(plane,"n121")==0)
								{
									strcpy(depart_time,"03:00pm");
									strcpy(arri_time,"05:00pm");
								}
							break;
						case 'm':
						case 'M':
							if(strcmpi(plane,"n121")==0)
								{
									strcpy(depart_time,"03:00am");
									strcpy(arri_time,"05:00am");
								}
							break;
					}
					break;
				case 'm':
				case 'M':
					switch(destin)
					{
						case 'k':
						case 'K':
							if(strcmpi(plane,"n679")==0)
								{
									strcpy(depart_time,"07:00pm");
									strcpy(arri_time,"09:00pm");
								}
							break;
						case 'l':
						case 'L':
								if(strcmpi(plane,"n121")==0)
								{
									strcpy(depart_time,"12:00pm");
									strcpy(arri_time,"02:00pm");
								}
							break;
						case 'i':
						case 'I':
							if(strcmpi(plane,"n121")==0)
								{
									strcpy(depart_time,"06:00am");
									strcpy(arri_time,"08:00am");
								}
							break;
					}
					break;
			}
			
		}	
//--------------FUNCTION NO 3--------------//		
	    void show()//THIS FUNCTION DISPLAYS OBJECT'S DATA"//
	    {
	    	cout<<"\t"<<setw(15)<<passenger<<"\t\t";
			cout<<setw(11);
			if(destin=='i'||destin=='I')
				cout<<"Islamabad  ";
			else if(destin=='m'||destin=='M')
				cout<<"Multan     ";
			else if(destin=='k'||destin=='K')
				cout<<"Karachi    ";
			else if(destin=='l'||destin=='L')
				cout<<"Lahore      ";
			cout<<"\t\t"<<setw(11);
			if(depart=='i'||depart=='I')
				cout<<"Islamabad  ";
			else if(depart=='m'||depart=='M')
				cout<<"Multan     ";
			else if(depart=='k'||depart=='K')
				cout<<"Karachi    ";
			else if(depart=='l'||depart=='L')
				cout<<"Lahore      ";
			cout<<"\t\t    "<<setw(7)<<depart_time<<"\t\t   "<<setw(7)<<arri_time<<" \t\t"<<setw(4)<<plane<<"  \t\t"<<setw(15)<<incharge<<"\n";
		}
//--------------FUNCTION NO 4--------------//
		char* passname()//THIS FUNCTION PASSES PASSENGER NAME TO IT CAN BE USED BY SEARCH_RECORD() AND DELETE_RECORD FUNCTIONS//
		{
			return passenger; 
		}
//--------------FUNCTION NO 5--------------//
		char* passplane()//THIS FUNCTION PASSES PLANE NAME TO "DISPLAYBYPLANE_RECORD()" FUNCTION FOR SO ITS DISPLAYS DATA OF PARTICULAR PLANE//
		{
			return plane;
		}
		
};
int main()
{ 
	int i=0,flag=0,choice,display;
	char ch,password[8]="aimen29",ans;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t-------------------------------------------";
	cout<<"\n\t\t\t\t\t|\t\t\t\t          |";                          
	cout<<"\n\t\t\t\t\t|\t\tWELCOME  TO               |";
	cout<<"\n\t\t\t\t\t|\t\t\t\t          |";       
	cout<<"\n\t\t\t\t\t|\t\t  AIRFAST                 |";
	cout<<"\n\t\t\t\t\t|\t\t\t\t          |";       
	cout<<"\n\t\t\t\t\t-------------------------------------------";
	cout<<"\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\tOffering Flights From and To";
	cout<<"\n\t\t\t\t----------------------------";
	cout<<"\n\n\n\t\t\tKarachi\n\t\t\tLahore\n\t\t\tMultan\n\t\t\tIslamabad";
	getch();
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tEnter password:  ";
	while(i!=7)
	{	ch=getch();
		cout<<"*";
		if(ch==password[i++])
			flag=1;
		else 
			flag=0;
	}
	if(flag==0)
		{	
			system("cls");
			cout<<"\n\n\nINVALID PASSWORD";
			exit(1);
		}
	while(1)
	{	system("cls");
		cout<<"\n\n\n\t\t\t\tMENU";
		cout<<"\n\n\t\t1.Book A Flight";
		cout<<"\n\n\t\t2.Cancel Booking";
		cout<<"\n\n\t\t3.Search Record";
		cout<<"\n\n\t\t4.Display Flight Record";
		cout<<"\n\n\t\t5.Exit";
		cout<<"\n\n\t\tEnter choice option: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				add_record();
				break;
			case 2:
				delete_record();
				break;
			case 3:
				search_record();
				break;
			case 4:
				system("cls");
				cout<<"\n\n\n\t\t\t\tDISPLAY OPTIONS";
				cout<<"\n\n\t\t1.Display N117 Record ";
				cout<<"\n\n\t\t2.Display N121 Record ";
				cout<<"\n\n\t\t3.Display N720 Record ";
				cout<<"\n\n\t\t4.Display N679 Record ";
				cout<<"\n\n\t\t5.Display ALL Record ";	
				cout<<"\n\n\t\tChoice Option: ";
				cin>>display;
				switch(display)
				{
					case 1:
					case 2:
					case 3:
					case 4:
						displaybyplane_record(display);
						break;
					case 5:
						displayall_record();
						getch();
						break;			
					default:
						cout<<"\nInvalid option";
				}
		
				break;
			case 5:
				exit(0);
			default:
				cout<<"\nInvalid Menu option: ";
				exit(1);
		}
	}
    
}
void print_statement(int destin,int depart)//THIS FUNCTION IS USED SO ITLL PRINT A GENERAL LINE BEFORE/FOR PLANE MENU// 
{
	char ch=depart;
	int loop=1;
	cout<<"\n--------------------------------------------------------\n";
	cout<<"\n\t\tPlane leaving from ";
	do
	{
		switch(ch)
		{
			case 'i':
			case 'I':
				cout<<"Islamabad ";
				break;
			case 'l':
			case 'L':
				cout<<"Lahore ";
				break;
			case 'k':
			case 'K':
				cout<<"Karachi ";
				break;
			case 'm':
			case 'M':
				cout<<"Multan ";
				break;
		}
		if(ch==depart)
			cout<<"to ";
		ch=destin;
		loop++;
	}while(loop==2);
			
}
fstream fp;//GLOBAL FILE VARIABLE
aeroplane book; //GLOBAL OBJECT USED BY ALL OF THE FOLLOWING FUNCTIONS//
void add_record()//WRITES OBJECT'S DATA IN FILE//
{	char ans;
	int status;
	do
	{	system("cls"); 
		fp.open("FlightsRecord.dat",ios::binary|ios::app);
		if(!fp)
			{
				cout<<"Sorry Can't Open File";
				getch();
				return;
			}
		cout<<"\n\n\t\t\tADD BOOKING\n\n\n\n";
		status=book.get_data();
		if(status==1)
		fp.write((char*)&book,sizeof(aeroplane));
		else
			cout<<"\nBooking failed";
		fp.close();
		cout<<"\n\tBook Another Ticket(Y/N)?: ";
		cin>>ans;
		
	}while(ans=='Y'||ans=='y');
}
void search_record()//READ A PARTICULAR RECORD BY MATCHING GIVEN PASSENGER'S NAME WITH THE PASSENGERS NAME IN FLIGHTSRECORD.DAT FILE//
{ 	char searchname[50],ans; 
	int flag=0;
	system("cls");
    do
	{	fp.open("FlightsRecord.dat",ios::in);
   		if(!fp)
   		{
       		cout<<"\n No Flight Record";
       		getch();
       		return;
    		}
    	if(fp.read((char*)&book,sizeof(aeroplane))==0)
    		{
    			cout<<"\n\n\n\n\t\t\tNo Record Exist";
    			return;
			}
		system("cls");
		cout<<"\n\n\t\t\tSEARCH BOOKING";
    	cout<<"\n\nEnter Passenger's name to search: ";
		cin.ignore();
		cin.get(searchname,50);
    	fp.seekg(0,ios::beg);
		while(fp.read((char*)&book,sizeof(aeroplane)))
		{
			if(strcmpi(searchname,book.passname())==0)
				{	
					cout<<"\n\n\n\tPassenger  Name\t\tDestination\t\tDeparture\t\tDeparture Time\t\tArrival  Time\t\tPlane\t\tBooking Incharge\n\n\n";
					book.show();
					cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
					flag=1;
				}
		}
		if(flag==0)
			cout<<"\nNo Record Found";
		flag=0; 	
		fp.close();
		cout<<"\nSearch Another Record (Y/N)?: ";
		cin>>ans;
		}while(ans=='Y'||ans=='y');
}
void delete_record()//DELETE A PARTICULAR RECORD BY MATCHING GIVEN PASSENGER'S NAME WITH THE PASSENGERS NAME IN FLIGHTSRECORD.DAT FILE//
{	fstream temp;
	char delname[50],ans1,ans2;
	int flag1=0;
	do
	{
		system("cls");
		fp.open("FlightsRecord.dat",ios::in|ios::out);
		if(!fp)
   		{
       		cout<<"\n No Flight Record";
       		getch();
       		return;
    	}
    	if(fp.read((char*)&book,sizeof(aeroplane))==0)
    		{
    			cout<<"\n\n\n\n\t\t\tNo Record Exist";
    			getch();
				return;
			}
		cin.ignore();
		cout<<"\n\n\t\t\tCANCEL BOOKING";
		cout<<"\n\n\nEnter Passenger's Name: ";
		cin.get(delname,50);
		temp.open("Temporary.dat",ios::out);
		fp.seekg(0,ios::beg);
		while(fp.read((char*)&book,sizeof(aeroplane)))	
		{
			if(strcmpi(book.passname(),delname)!=0)
				temp.write((char*)&book,sizeof(aeroplane));
			else
			{	flag1=1;
				cout<<"\n\n\n\tPassenger  Name\t\tDestination\t\tDeparture\t\tDeparture Time\t\tArrival  Time\t\tPlane\t\tBooking Incharge\n\n\n";
				book.show();
				cout<<"\n\n\n\n\t\t\tDelete Above Record(Y/N)?: ";
				cin>>ans1;
				if(ans1!='y'&&ans1!='Y')
						temp.write((char*)&book,sizeof(aeroplane));
				else
					cout<<"\n\n\t\t\tRecord Deleted"; 
						 
					
			}	
		}
		if(flag1==0)
			cout<<"\nRecord Not Found";
		flag1=0;
		temp.close();
		fp.close();
		remove("FlightsRecord.dat");
		rename("Temporary.dat","FlightsRecord.dat");
		cout<<"\n\n\n\n\n\n\t\t\t\tDelete Another Record(Y/N)?: ";
		cin>>ans2;
		}while(ans2=='y'||ans2=='Y');
}
void displayall_record()//DISPLAY ALL RECORD WRITTEN IN FLIGHTSRECORD.DAT FILE//
{	int i=1;
	system("cls");
	fp.open("FlightsRecord.dat",ios::in);
    if(!fp)
   	{
       cout<<"\n No Flight Record";
       getch();
       return;
    }
    if(fp.read((char*)&book,sizeof(aeroplane))==0)
    		{
    			cout<<"\n\n\n\n\t\t\tNo Record Exist";
    			getch();
				return;
			}
	fp.seekg(0,ios::beg);
	cout<<"\n\n\t\t\tFLIGHT RECORD\n\n";
	cout<<"\n\n\n\tPassenger  Name\t\tDestination\t\tDeparture\t\tDeparture Time\t\tArrival  Time\t\tPlane\t\tBooking Incharge\n\n\n\n\n\n\n\n\n\n";
	while(fp.read((char*)&book,sizeof(aeroplane)))
	{	cout<<i++;
		book.show();
		cout<<"\n\n";
	}
     	
	fp.close();
	getch();
}
void displaybyplane_record(int display)//DISPLAYS GIVEN PLANE'S RECORD FROM ALL RECORDS IN FLIGHTSRECORD.DAT FILE//
{	char searchplane[5];
	int flag=0;
	system("cls");
	fp.open("FlightsRecord.dat",ios::in);
    if(!fp)
   	{
       cout<<"\n No Flight Record";
       getch();
       return;
    }
    if(fp.read((char*)&book,sizeof(aeroplane))==0)
    		{
    			cout<<"\n\n\n\n\n\n\t\t\tNo Record Exist";
    			getch();
    			return;
			}
	cout<<"\n\n\t\t\tDISPLAY BOOKING   BY PLANE ";
	fp.seekg(0,ios::beg);
    searchplane[0]='N';
   	if(display==1)
   		{
   			searchplane[1]='1';
   			searchplane[2]='1';
   			searchplane[3]='7';
		}
   	else if(display==2)
   		{
			searchplane[1]='1';
   			searchplane[2]='2';
   			searchplane[3]='1';
		}
   	else if(display==3)
   		{
		    searchplane[1]='7';
   			searchplane[2]='2'; 
   			searchplane[3]='0';
		}
   	else if(display==4)
   		{
		   searchplane[1]='6';
   		   searchplane[2]='7';
   		   searchplane[3]='9';
		}
   	else return;
	while(fp.read((char*)&book,sizeof(aeroplane)))
	{
		if(strcmpi(searchplane,book.passplane())==0)
				{
					if(flag==0)
						cout<<cout<<"\n\n\n\tPassenger  Name\t\tDestination\t\tDeparture\t\tDeparture Time\t\tArrival  Time\t\tPlane\t\tBooking Incharge\n\n\n\n\n\n\n\n\n";;
					book.show();
					cout<<"\n\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n";
					flag=1;
				}
			
	}
	if(flag==0)
		cout<<"\n\n\nNo Record Found";
     	
	fp.close();
	getch();
	
}

