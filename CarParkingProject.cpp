#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Car
{
private:
    string licensePlate;
    string owner;
public:
    Car(string lp, string o) : licensePlate(lp), owner(o) {}
    void setLiscencePlate(string lp)
    {
        this->licensePlate;
    }
    string getLicensePlate() const
    {
        return licensePlate;
    }
     void setOwner(string o)
    {
        this->owner;
    }
    string getOwner() const
    {
        return owner;
    }
    void display() const
    {
        cout<<"License Plate : "<<licensePlate<<", Owner : "<<owner<<endl;
    }
};
class ParkingLot
{
private:
    vector<Car> parkedCars;
    int capacity;
public:
    ParkingLot(int cap) : capacity(cap) {}
    bool parkCar(const Car& car)
    {
        if(parkedCars.size()<capacity)
        {
            parkedCars.push_back(car);
            return true;
        }else
        {
            cout<<"Parking lot is full!"<<endl;
            return false;
        }
    }
    void displayParkedCars() const
    {
        cout<<"Parked Cars :\n";
        for(const auto& car : parkedCars)
        {
            car.display();
        }
    }
};
int main()
{
    ParkingLot myParkingLot(3);
    Car car1("BC123","Luffy");
    Car car2("YZ457","Zoro");
    Car car3("MN423","Nami");
    Car car4("QR6124","Ussop");
    myParkingLot.parkCar(car1);
    myParkingLot.parkCar(car2);
    myParkingLot.parkCar(car3);
    myParkingLot.parkCar(car4);
    myParkingLot.displayParkedCars();
    return 0;
}
