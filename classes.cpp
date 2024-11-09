// class chords
#include <iostream>
#include <string>
using namespace std;
//chord
class chord {
    private:
        string chordName; //name

    public:
        void get_ChordName() {};
            
};

//finger
class finger {
    private:
        int fingerNumber[4]; //4 fingers

    public:
        finger() {
            for (int i = 0; i < 5; i++) {
                fingerNumber[i] = i + 1;
                };
        };
            
};

//fret
class fret {
    private:
        int fretNumber[6]; //we´re going to use 6 frets which include open

    public:
        fret() {
            for (int i = 0; i < 7; i++) {
                fretNumber[i] = i; //0 will be 0 so they are "open"
                };
        };
            
};

//position
class position {
    private:
        string position_ofChord;

    public:
        void displayPosition() {};
            
};
//string
class string {
    private:
        int stringNumber[4]; //6 strings

    public:
        string() {
            for (int i = 0; i < 5; i++) {
                stringNumber[i] = i + 1;
                };
        };
            
};
