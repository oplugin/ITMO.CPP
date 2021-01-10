// ExamineTask.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class Transport
{
public:
    string type;
    Transport(string setType) : type(setType) {}
        
    virtual void calculateVolume() = 0;

    string get_type()
    {
        return type;
    }
};

class Container : public Transport
{
private:
    string containerType;
    string sealNumber;

    int volume = 0;
    int weight = 0;

    int length = 0;
    int width = 0;
    int height = 0;

public:
    Container(string setType) : Transport(setType)
    {
        containerType = setType;
    }
    Container(string setType, string setSealNumber, int setVolume, int setWeight) : Transport(setType)
    {
        containerType = setType;
        sealNumber = setSealNumber;
        volume = setVolume;
        weight = setWeight;
    }
    Container(string setType, string setSealNumber, int setLength, int setWidth, int setHeight, int setWeight) : Transport(setType)
    {
        containerType = setType;
        sealNumber = setSealNumber;
        length = setLength;
        width = setWidth;
        height = setHeight;
        weight = setWeight;
    }
    string get_info()
    {
        ostringstream details;
        details
            << "Container Type : " << containerType
            << "\nSeal Number : " << sealNumber
            << "\nVolume : " << volume
            << "\nWeight : " << weight;
        return details.str();
    }

    void calculateVolume() override
    {
        this->volume = this->length * this->width * this->height;
    }
};

class Truck : public Transport
{
private:
    string truckType;
    string sealNumber;

    int volume = 0;
    int weight = 0;

    int length = 0;
    int width = 0;
    int height = 0;

public:
    Truck(string setType) : Transport(setType)
    {
        truckType = setType;
    }

    Truck(string setType, string setSealNumber, int setLength, int setWidth, int setHeight, int setWeight) : Transport(setType)
    {
        truckType = setType;
        sealNumber = setSealNumber;
        length = setLength;
        width = setWidth;
        height = setHeight;
        weight = setWeight;
    }

    string get_info()
    {
        ostringstream details;
        details
            << "Truck Type : " << truckType
            << "\nSeal Number : " << sealNumber
            << "\nVolume : " << volume
            << "\nWeight : " << weight;
        return details.str();
    }

    void calculateVolume() override
    {
        this->volume = this->length * this->width * this->height;
    }
};

class GoodsReceiving
{
private:
    string type;
    string number;
    int volume = 0;
    int weight = 0;
    int quantity = 0;
    int length = 0;
    int width = 0;
    int height = 0;

    vector<string> itemsGR;

public:
    void makeGoodsReceiving()
    {
        cout << "Please input qty. how much units we have for making Goods Receiving : " << endl;
        cin >> quantity;

        for (int i = 0; i < quantity; i++)
        {
            cout << "Enter parameters " << i + 1 << " of transport units " << endl;
            itemsGR.push_back(addGoods());
        }

        unsigned int vectorSize = itemsGR.size();
        ofstream fout("itemsGR.txt", ios::out);
        cout << "The list of transport units : " << endl;
        fout << "The list of transport units : " << endl;
        for (int i = 0; i < vectorSize; i++)
        {
            cout << itemsGR[i] << endl;
            fout << itemsGR[i] << endl;
        }
        fout.close();

        cout << "The list saved in file : items GR.txt " << endl;
    }

    string addGoods()
    {
        string details = "Please enter details ";
        cout << "Input Type of transport (Truck or Container)" << endl;
        cout << "Please remember Container has fixed volume and for Truck you will have provide parameters" << endl;
        cin >> type;

        cout << "Input number" << endl;
        cin >> number;

        cout << "Input volume or if you have only l, w, h please enter 0" << endl;
        cin >> volume;
        
        if (volume == 0)
        {
            cout << "Input parameters: L, W, H" << endl;
            cin >> length >> width >> height;
        }
        cout << "Input weight" << endl;
        cin >> weight;

        if (volume != 0)
        {
            Container eq(type, number, volume, weight);
            details = eq.get_info();
        }
        else if (volume == 0)
        {
            Truck eq(type, number, length, width, height, weight);
            eq.calculateVolume();
            details = eq.get_info();
        }
        return details;
    }
};


int main()
{
    setlocale(LC_ALL, "ru");
    char parameter;

    cout << "\nThis program is for making Goods Receiving " << endl;
    cout << "Do you have goods for making receiving ? If yes please enter (y)" << endl;
    cin >> parameter;
    if (parameter == 'y' || parameter == 'Y')
    {
        cout << "\nLets start!" << endl;
        GoodsReceiving start;
        start.makeGoodsReceiving();
    }
    else
    {
        cout << "Please enter goods next time!" << endl;
        
    }
    cout << "\nGoods were entered into system and saved in file\n";

    return 0;
}
