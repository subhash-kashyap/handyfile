#include<iostream>
#include<string>
#include "Idcard.h"

using namespace std;

namespace Idcard{
    Id_card::Id_card(){
            name = "John Doe";
            synergy = 0;
            address = "221B baker street";
            skills = "Invisible";
            weakness = "None";
            opinion = "None";
            plans = "None";
        
    }
    void Id_card::set_name_address(string nam, string addr)
    {
        name = nam;

        address = addr;
        cout << "Succesfully added name and address\n"
            << endl;
    }

    void Id_card::set_opinion(string op)
    {
        opinion += op;
        cout << "Succesfully added opinion\n"
            << endl;
    }

    void Id_card::set_synergy(int syn)
    {
        synergy = syn;
        cout << "Synergy noted.\n"
            << endl;
    }

    void Id_card::set_plan(string poa)
    {
        plans += poa;
        cout << "Succesfully added Plan of action\n";
    }

    void Id_card::set_skills(string skillset)
    {
        skills += skillset;
        cout << "Succesfully added skillset\n";
    }

    void Id_card::set_weakness(string weakpoints)
    {
        weakness += weakpoints;

        cout << "Succesfully added weakness\n";
    }
}