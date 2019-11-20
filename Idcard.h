#include<string>

namespace Idcard{
    class Id_card{
        
        private:
            std::string name;
            int synergy;
            std::string address;
            std::string skills;
            std::string weakness;
            std::string opinion;
            std::string plans;

        public:
            Id_card();
            void set_name_address(std::string, std::string);
            void set_synergy(int);
            void set_skills(std::string);
            void set_weakness(std::string);
            void set_plan(std::string);
            void set_opinion(std::string);
    };
}
