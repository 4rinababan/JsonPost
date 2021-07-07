// test3json.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cpr/cpr.h>
#include "json.hpp"


using namespace std;

int main(int argc, char** argv)
{
	cpr::Response response = cpr::Post(cpr::Url{ "http://192.168.8.133:3000/api/Imei/login" },
		//cpr::Authentication{ "userId", "pass" },
		cpr::Parameters{ {"username", "ari"},{"password","ar1aja"},{"station_name",""},{"device_name",""} });
	//response.status_code
	auto json = nlohmann::json::parse(response.text);
	int xx = 0;
	//if (json["success"] == "true") { xx = 1; }
	std::cout << json["success"] << std::endl;
	//cout << "Student from json: " << r.text.at("id").get<int>() << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
