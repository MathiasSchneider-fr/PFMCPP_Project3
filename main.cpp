/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 0) if you opted to not fill in any of your member functions in part2, 
    fill in ALL of your member functions
    
 1) Add a constructor for each User-Defined-Type.
    The constructor should be the first declaration in your UDT, before all member variables and member functions.
    add a std::cout message in the constructor that prints out the name of the class being constructed.  
    When you run your code, you'll see the order that your objects are created in the program output. 
 
 2) For each User-Defined-Type:
        amend some of the member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of EACH of your user-defined types in the main() function.  
    You should have at least 12 different variables declared in main(), because you have written 12 different types (including the nested types)

 4) For each instantiated UDT: 
        call each of that instance's member functions.
        You're doing this to show that your code doesn't produce warnings when you call the functions that take arguments.
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int thing = 0; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    std::cout << "UDT being constructed!" << std::endl; //1) 
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << thing << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'thing' equal to 0? " << (foo.thing == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.




struct StringedInstrument
{
    int stringNumbers = 5;
    float length = 50.4f;
    float width = 30.2f;
    bool fixedEasel = true;
    int powerInDb = 0;

    void startToPlay();
    void playLouder(int howLoud);
    void stopToPlay();
};

void StringedInstrument::startToPlay()
{
    //the music begins
}

void StringedInstrument::playLouder(int howLoud)
{
    powerInDb += howLoud;
}

void StringedInstrument::stopToPlay()
{
    //the music begins
}

struct Bicycle
{
    int wheelNumber = 2;
    float weelDiameter = 70.5f;
    float saddleHeight = 60.4f;
    int maximumSpeed = 30;
    int speedNumber = 6;
    int bicycleSpeed = 30;


    struct Wheel
    {
        bool tubeless = true;
        int raysNumber = 36;
        float tireWidth = 6.2f;
        float rayLength = 30.2f;
        float tireDiameter = 80.5f;
        float wheelSpeed = 20.0f;

        void slowDown(float brakingPower);
        void stop();
        void speedUp();
        void start();
    };

    void changeSpeed(Wheel frontWheel, Wheel backWheel);
    void speedUp(int howMuch, Wheel frontWheel, Wheel backWheel);
    void start(Wheel frontWheel, Wheel backWheel);
};

void Bicycle::Wheel::slowDown(float brakingPower)
{
    wheelSpeed /= brakingPower;
}
void Bicycle::Wheel::stop()
{
    //the wheel stops
}
void Bicycle::Wheel::speedUp()
{
    //the wheels speeds up
}
void Bicycle::Wheel::start()
{
    //the wheel starts
}

void Bicycle::changeSpeed(Wheel frontWheel, Wheel backWheel)
{
    frontWheel.speedUp();
    backWheel.speedUp();
}
void Bicycle::speedUp(int howMuch, Wheel frontWheel, Wheel backWheel)
{
    frontWheel.speedUp();
    backWheel.speedUp();
    bicycleSpeed *= howMuch;
}
void Bicycle::start(Wheel frontWheel, Wheel backWheel)
{
    frontWheel.start();
    backWheel.start();
}


struct Monitor
{
    int pixelHeight = 1080;
    int pixelWidth = 1920;
    int maxBrightness = 800;
    int maxContrast = 1500;
    int power = 150;

    void increaseBrightness();
    void decreaseBrightness();
    void increaseContrast();
};

struct Headphone
{
    int lowestFreq = 30;
    int highestFreq = 22500;
    bool hasBluetooth = false;
    float weight = 2.3f;
    float width = 30.2f;

    struct Speaker
    {
        float impedance = 8.0f;
        float depth = 5.3f;
        float membraneDiameter = 3.4f;
        std::string brand = "sennheiser";
        float earDistance = 2.5f;

        void membraneUp(float currentIntensity);
        void decreaseVolume();
        void increaseVolume();
    };

    void connect();
    void increaseVolume(Speaker leftSpeaker, Speaker rightSpeaker);
    void decreaseVolume(Speaker leftSpeaker, Speaker rightSpeaker);
};

void Headphone::Speaker::membraneUp(float currentIntensity)
{
    impedance *= currentIntensity;
}
void Headphone::Speaker::decreaseVolume()
{
    // the volume decreases
}
void Headphone::Speaker::increaseVolume()
{
    // the volume decreases
}

void Headphone::connect()
{
    //the headphone connects
}
void Headphone::increaseVolume(Speaker leftSpeaker, Speaker rightSpeaker)
{
    leftSpeaker.increaseVolume();
    rightSpeaker.increaseVolume();
}

void Headphone::decreaseVolume(Speaker leftSpeaker, Speaker rightSpeaker)
{
    leftSpeaker.decreaseVolume();
    rightSpeaker.decreaseVolume();
}


struct Sander
{
    float discDiameter = 150.0f;
    int speedsNumber = 6;
    int maxSpeed = 900;
    int minSpeed = 100;
    int power = 150;

    void startToSand();
    void increaseSpeed();
    void emptyDustCollector();
};

struct TableSaw
{
    float bladeDiameter = 30.5f;
    int power = 1500;
    float cutHeight = 8.3f;
    float length = 60.5f;
    float width = 40.2f;

    void start();
    void raiseTheBlade(float howMuch);
    void lowerTheBlade(float howMuch);
};

void TableSaw::start()
{
    //the tablesaw starts
}
void TableSaw::raiseTheBlade(float howMuch)
{
    cutHeight *= howMuch;
}

void TableSaw::lowerTheBlade(float howMuch)
{
    cutHeight *= howMuch;
}

struct Jointer
{
    int power = 1500;
    float maxWoodHeight = 12.7f;
    int rotationSpeed = 5000;
    float maxWoodWidth = 41.0f;
    float speed = 3.4f;

    void increaseHeight();
    void decreaseHeight();
    void start();
};

void Jointer::increaseHeight()
{
    //increase height of the jointer
}
void Jointer::decreaseHeight()
{
    //decrease height of the jointer
}
void Jointer::start()
{
    //the jointer starts
}

struct VacuumCleaner
{
    int power = 800;
    float bagSize = 50.3f;
    float airFlow = 50.4f;
    float pipeLength = 2.5f;
    float pipeDiameter = 0.5f;

    void start();
    void stop();
    bool isBagFull();
};

void VacuumCleaner::start()
{
    //the vacuum cleaner starts
}
void VacuumCleaner::stop()
{
    //the vacuum cleaner stops
}
bool VacuumCleaner::isBagFull()
{
    //check if the bag is full or not
    return true;
}

struct PlungeSaw
{
    int power = 900;
    float height = 9.2f;
    float angle = 46.5f;
    float bladeDiameter = 25.3f;
    int rotationSpeed = 5000;

    void adjustTheHeight(float newHeight);
    void adjustTheAngle(float newAngle);
    void start();
};

void PlungeSaw::adjustTheHeight(float newHeight)
{
    height = newHeight;
}
void PlungeSaw::adjustTheAngle(float newAngle)
{
    angle = newAngle;
}
void PlungeSaw::start()
{
    //the plungesaw starts
}

struct WoodShop
{
    Sander sander;
    TableSaw tableSaw;
    Jointer jointer;
    VacuumCleaner vacuumCleaner;
    PlungeSaw plungeSaw;

    void joinBoards();
    void cutBoard();
    void planeBoard();
};

void WoodShop::joinBoards()
{
    //a lot of functions to join 2 boards
}
void WoodShop::cutBoard()
{
    //a lot of functions to cut a board
}
void WoodShop::planeBoard()
{
    //a lot of functions to plane a board
}

int main()
{
    Example::main();
    
    
    std::cout << "good to go!" << std::endl;
}
