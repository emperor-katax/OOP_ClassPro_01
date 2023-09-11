#include <iostream>
#include <string>
using namespace std;

class Item_01 {
        // con/des -------    
    public:
        Item_01() {
            cout << " .... ##  Item_01 constructor " << endl;
        };
        ~Item_01() {};

        // properties -------
        string name = "";
        int id = 0;

    private:
        float speed_default = 0.f;

        // methods
    public:
        void Move(float value)  {    speed_default += value;     }
        void Stop()             {    speed_default = 0;          }
        float GetSpeed()        {    return speed_default;       }
};

class Car {
        // con/des
    public:
        Car() {
            cout << " .... ##  Car constructor " << endl;
        };
        ~Car() {};
        
        // properties
        int id = 0;
        string name = "";
        string model = "";
        int speed = 0;
        int capacity_person = 0;
        int capacity_total = 0;
    private:
        int Security_Code = 0;
        bool Security_Code_Validated = false;

        // methods 
    public:
        void Drive(string destination) {
            cout << " destination " << destination << endl;
            Move(destination);
        }

        void Stop() {       speed = 0;      }
        int GetSpeed() {    return speed;   }

    private:
        void Move(string dest) {
            cout << " .... ## " << name << " " << model << " is moving to " << dest << endl;
            // code /// use speed and other properties for moving
        }

};

class Tank {
    // con/des
    public:
        Tank() {
            cout << " .... ##  Tank constructor " << endl;
        };
        ~Tank() {};
        // properties
        string name = "";
        int id = 0;
    private:
        float speed_default = 0.f;

        // methods
    public:
        void Shoot(string target) { cout << " shooting to:  " << target << endl; }
        void Move(float value) { speed_default += value; }
        void Stop() { speed_default = 0; }
        float GetSpeed() { return speed_default; }
};

int main(){
    
    string player_input_01 = "";
    int player_input_02 = 0;


    Item_01* itemA = new Item_01();
    Car* BMW = new Car();
    Tank* TigerV = new Tank();


    while (player_input_01 != "quit") {

        cout << "\n  ++ Please enter your option: 1)  2) " << endl;
        cin >> player_input_01;


        if (player_input_01 == "1") {
            itemA->Move(4.5f);
            BMW->Drive("Milan");
            TigerV->Move(12.5f);
        }

        //if (player_input_01 == "2") { }
        //if (player_input_01 == "") { }
    }

}
