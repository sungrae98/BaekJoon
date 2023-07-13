#include<iostream>

using namespace std;

int main() {
	
	int quant;
	int choice;
	//Quantity
	int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
	// food items sold
	int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
	//Total proce of items
	int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;

	cout << "\n\t Quantity of items we have";
	cout << "\n Rooms available :";
	cin >> Qrooms;
	cout << "\n Quantity of pasta :";
	cin >> Qpasta;
	cout << "\n Quantity of burger :";
	cin >> Qburger;
	cout << "\n Quantity of noodles :";
	cin >> Qnoodles;
	cout << "\n Quantity of shake :";
	cin >> Qshake;
	cout << "\n Quantity of chicken-roll :";
	cin >> Qchicken;

	m:
	cout << "\n\t\t\t Please select from the menu options ";
	cout << "\n\n1) Rooms";
	cout << "\n2) Pasta";
	cout << "\n2) Burger";
	cout << "\n3) Noodles";
	cout << "\n4) Shake";
	cout << "\n5) Chicken-roll";
	cout << "\n7) Information regarding sales and collection ";
	cout << "\n8) Exit";

	cout << "\n\n Please Enter your choice! ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "\n\n Enter the number of rooms you want: ";

		cin >> quant;
		if (Qrooms - Srooms >= quant) {
			Srooms = Srooms + quant;
			Total_rooms += quant * 1200;
			cout << "\n\n\t\t" << quant << " room/rooms have been alloted to you";
		}
		else {
			cout << "\n\tOnly" << Qrooms - Srooms << " Rooms remaining in hotel";
			break;
		}
	case 2:
		cout << "\n\n Enter Pasta Quantity :";

		cin >> quant;
		if (Qpasta - Spasta >= quant) {
			Spasta += quant;
			Total_pasta += quant * 250;
			cout << "\n\n\t\t" << quant << " Pasta is the order!";
		}
		else {
			cout << "\n\tOnly" << Qpasta - Spasta << " Pasta remaining in hotel";
			break;
		}
	case 3:
		cout << "\n\n Enter Burger Quantity :";

		cin >> quant;
		if (Qburger - Sburger >= quant) {
			Sburger += quant;
			Total_burger += quant * 120;
			cout << "\n\n\t\t" << quant << " Burger is the order!";
		}
		else {
			cout << "\n\tOnly" << Qburger - Sburger << " Burger remaining in hotel";
			break;
		}
	case 4:
		cout << "\n\n Enter Noodle Quantity :";

		cin >> quant;
		if (Qnoodles - Snoodles >= quant) {
			Snoodles += quant;
			Total_noodles += quant * 140; 
			cout << "\n\n\t\t" << quant << " Noodle is the order!";
		}
		else {
			cout << "\n\tOnly" << Qnoodles - Snoodles << " Noodle remaining in hotel";
			break;
		}
	case 5:
		cout << "\n\n Enter Shake Quantity :";

		cin >> quant;
		if (Qshake - Sshake >= quant) {
			Sshake += quant;
			Total_shake += quant * 120;
			cout << "\n\n\t\t" << quant << " Shake is the order!";
		}
		else {
			cout << "\n\tOnly" << Qshake - Sshake << " Shake remaining in hotel";
			break;
		}
	case 6:
		cout << "\n\n Enter Chicken-roll Quantity :";

		cin >> quant;
		if (Qchicken - Schicken >= quant) {
			Schicken += quant;
			Total_chicken += quant * 150;
			cout << "\n\n\t\t" << quant << " Chicken-roll is the order!";
		}
		else {
			cout << "\n\tOnly" << Qchicken - Schicken << " Chicken-roll remaining in hotel";
			break;
		}
	case 7:
		cout << "\n\t\tDetails of sales and collection ";
		cout << "\n\n Number of rooms we had : " << Qrooms;
		cout << "\n\n Number of rooms we gave for rent " << Srooms;
		cout << "\n\n Remaining rooms : " << Qrooms - Srooms;
		cout << "\n\n Total rooms collection for the day : " << Total_rooms;

		cout << "\n\t\tDetails of sales and collection ";
		cout << "\n\n Number of pastas we had : " << Qpasta;
		cout << "\n\n Number of pastas we gave for rent " << Spasta;
		cout << "\n\n Remaining pastas : " << Qpasta - Spasta;
		cout << "\n\n Total pastas collection for the day : " << Total_pasta;

		cout << "\n\t\tDetails of sales and collection ";
		cout << "\n\n Number of burgers we had : " << Qburger;
		cout << "\n\n Number of burgers we gave for rent " << Sburger;
		cout << "\n\n Remaining burgers : " << Qburger - Sburger;
		cout << "\n\n Total burgers collection for the day : " << Total_burger;

		cout << "\n\t\tDetails of sales and collection ";
		cout << "\n\n Number of noodles we had : " << Qnoodles;
		cout << "\n\n Number of noodles we gave for rent " << Snoodles;
		cout << "\n\n Remaining noodles : " << Qnoodles - Snoodles;
		cout << "\n\n Total noodles collection for the day : " << Total_noodles;

		cout << "\n\t\tDetails of sales and collection ";
		cout << "\n\n Number of shakes we had : " << Qshake;
		cout << "\n\n Number of shakes we gave for rent " << Sshake;
		cout << "\n\n Remaining shakes : " << Qshake - Sshake;
		cout << "\n\n Total shake collection for the day : " << Total_shake;

		cout << "\n\t\tDetails of sales and collection ";
		cout << "\n\n Number of chicken-roll we had : " << Qchicken;
		cout << "\n\n Number of chicken-roll we gave for rent " << Schicken;
		cout << "\n\n Remaining chicken-roll : " << Qchicken - Schicken;
		cout << "\n\n Total chicken-roll collection for the day : " << Total_chicken;


		cout << "\n\n\n Total Collection for the day : " << Total_rooms + Total_pasta + Total_burger + Total_noodles + Total_shake + Total_chicken;

	case 8:
		exit(0);
	default:
		cout << "\n Please select the numbers mentioned above!";
	}
	goto m;
}