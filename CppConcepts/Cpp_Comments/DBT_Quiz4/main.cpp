#include <iostream>

using namespace std;

int main()
{
    string full_name;
    string res_address;
    string tech_skills;
    string interests;

    cout << "Please Enter Your Full-Name: \n";
    getline(cin, full_name);
    cout << "Please Enter Your Residential-Address: \n";
    getline(cin, res_address);
    cout << "Please Enter your Technical-Skills: \n";
    getline(cin, tech_skills);
    cout << "Please Enter your Interests: \n";
    getline(cin, interests);


    cout << endl;
    cout << "Full Name: " << full_name << endl;
    cout << "Residential Address: " << res_address << endl;
    cout << "Technical Skills: " << tech_skills << endl;
    cout << "Interests: " << interests << endl;
    cout << endl;

    return 0;
}
