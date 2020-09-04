#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <string> 
using namespace std;

struct AirportInfo
{
	string Name{};
	string City{};
	string Country{};
	double Longtitude{};
	double Latitude{};
	int AltitudeFeet{};

	AirportInfo() = default;

	AirportInfo(string const& name, string const & city, string const& country, 
		double const & longtitude, double const& latitude,  int const& altitudeFeet)
		: Name(name), City(city),Country(country), Longtitude(longtitude), Latitude(latitude), 
		  AltitudeFeet(altitudeFeet)
	{}
};

int main()
{
	map<string, AirportInfo> airportDatabase
	{
		{"SEA",
		  {"Seattle Tacoma International Airport", "Seattle", "United States",
		   -122.308998, 47.449001, 433}
		},
		{"LAX",
		  {"Los Angeles International Airport", "Los Angeles", "United States",
		   -118.4079971, 33.94250107, 125}
		},
		{"FCO",
		  {"Leonardo da Vinci - Fuimicino Airport", "Rome", "Italy",
		  12.2388889, 41.8002778, 13}
		},
		{"LHR",
		  {"London Heathrow Airport", "London", "United Kingdom",
		   -0.461941, 51.4706, 83}
		}

    };

	cout << "Airport Database Demo\n";
	cout << "---------------------\n\n";

	cout << "Airport unique code?"<<endl;
	string code{};
	cin >> code;
	cout << '\n';

	auto it = airportDatabase.find(code);
	if (it != airportDatabase.end())
	{
		AirportInfo const& airport=it->second;
		cout << "Airport name:\t" << airport.Name << '\n';
		cout << "City:\t\t"<< airport.City << '\n';
		cout << "Country:\t" << airport.Country << '\n';
		cout << "Longtitude:\t" << airport.Longtitude << '\n';
		cout << "Latitude:\t" << airport.Latitude << '\n';
		cout << "Elevation(ft):\t" << airport.AltitudeFeet << '\n';
	}
	else
	{
		cout << "Sorry, airport code not found.\n";
	}


	return 0;
}