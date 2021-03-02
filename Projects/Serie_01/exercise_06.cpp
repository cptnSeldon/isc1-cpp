#include <iostream>
#include <iomanip>

//http://www.cplusplus.com/doc/tutorial/structures/

using namespace std;

struct Room
{
    //attributes
    string name;
    int length;
    int width;
    int height;

    //getter
    int getSurfaceFloor()
    {
        return width * length;
    }

    int getSurfaceWalls()
    {
        return (2 * length + 2 * width) * height;
    }

    int getVolume()
    {
        return length * width * height;
    }

    //print
    void printAll()
    {
        cout << name << ", [l ,w, h] : "
            << length << ", "
            << width << ", "
            << height << endl;

        cout << "Floor surface : " << getSurfaceFloor() << endl;
        cout << "Wall surface : " << getSurfaceWalls() << endl;
        cout << "Volume : " << getVolume() << endl;
    }
};

int main()
{
    Room livingRoom;
    livingRoom.name = "living room";
    livingRoom.length = 2;
    livingRoom.width = 4;
    livingRoom.height = 2;
    livingRoom.printAll();

    Room bedRoom = { "bedroom", 2, 2, 2 };
    bedRoom.printAll();

    return 0;
}