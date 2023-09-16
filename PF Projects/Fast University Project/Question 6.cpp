#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int noOfFloor;
	cout <<"How many no Of Floors the Hotel has: ";
	cin>>noOfFloor;
	while (noOfFloor < 1)
	{
		cout<<"Invalid\n";
		cout <<"Value must be >= 1\n";
		cout <<"Re-enter: ";
		cin>>noOfFloor;
	}
	int room =0;
	int totalRoom =0;
	int occupied =0, occupiedTotal=0, totalUnoccupied =0;
	double percentageOccupied=0;
	for (int i =0; i<noOfFloor; i++)
	{
		cout <<"How many Rooms in Floor "<<i+1<<": ";
		cin>>room;
		while (room <10)
		{
			cout<<"Invalid\n";
			cout <<"Value must be >= 10\n";
			cout <<"Re-enter: ";
			cin>>room;
		}
		cout <<"How many of "<<room<<" are occupied: ";
		cin>>occupied;
		while (occupied > room)
		{
			cout<<"Invalid\n";
			cout <<"Value must be >= No Of room\n";
			cout <<"Re-enter: ";
			cin>>occupied;
		}
		totalRoom += room;
		occupiedTotal += occupied;
	}
	totalUnoccupied = totalRoom - occupiedTotal;
	percentageOccupied = static_cast<double>(occupiedTotal)*100/totalRoom;
	cout <<"\n\tOUTPUT\n";
	cout <<"Total Rooms in the Hotel: "<<totalRoom<<endl;
	cout <<"Total Occupied Rooms in the Hotel: "<<occupiedTotal<<endl;
	cout <<"Total Unoccupied Rooms in the Hotel: "<<totalUnoccupied<<endl;
	cout <<showpoint<<setprecision(2)<<fixed;
	cout <<"Percentage of Occupied Rooms: "<<percentageOccupied<<"%"<<endl;
	return 0;
}
