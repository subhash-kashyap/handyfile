/*
Need to print data.
Need to save data in Sqlite or Mongo, I say Sqlite, yet to implement
Seems to be an error at Opinion, fixed with cin.ignore
Different headers, got the job done, combined compilation needed, soon will make libraries, 
*/

#include<iostream>
#include<string>
#include "Idcard.h"
#include"../sqlite/sqlite3.h"

using namespace std;
using namespace Idcard;


main (){
    Id_card id;
    string main_name, main_address, main_plan, main_skill, main_weakness, main_opinion;
    int main_synergy;

    cout << " Enter Details - Name & address"<<endl;
    getline(cin, main_name);
    getline(cin, main_address);
    id.set_name_address(main_name, main_address);

    cout << "\n synergy\n";
    cin >> main_synergy;
    id.set_synergy(main_synergy);

    cin.ignore(256, '\n');

    cout << "\nOpinion\n ";
    getline(cin, main_opinion);
    id.set_opinion(main_opinion);

    cout << "\nWeakness\n";
    getline(cin, main_skill);
    id.set_skills(main_skill);

    cout << "\nplan of action\n";
    getline(cin,main_plan);
    id.set_plan(main_plan);

    cout<<"End of Data input\n"<<endl;
}