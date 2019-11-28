#include<iostream>
using namespace std;

class Vehicle
{
	float price;
	float mileage;
	public :
	void getdata(float p, float m);
	void display();
};

void Vehicle :: getdata(float p, float m)
{
	price = p;
	mileage = m;
}

void Vehicle :: display()
{
	cout << "Price = " << price << endl;
	cout << "Mileage = "<< mileage << endl;
}


class Car : public Vehicle
{
	float cost;
	int warranty;
	int capacity;
	string fuel;
	public :
	void getdata(float p, float m, float c, int w, int cc, string f);
	void display();
};

void Car :: getdata(float p, float m, float c, int w, int cc, string f)
{
	Vehicle :: getdata(p, m);
	cost = c;
	warranty = w;
	capacity = cc;
	fuel = f;
}

void Car :: display()
{
	Vehicle :: display();
	cout << "Ownership cost = "<< cost <<endl;
	cout << "Warranty(in years) = "<< warranty <<endl;
	cout << "Seating Capacity = "<< capacity <<endl;
	cout << "Fuel Type(diesel or petrol) = "<< fuel <<endl;
}


class Bike : public Vehicle
{
	int cylinders;
	int gears;
	string cooling_type;
	string wheel_type;
	float tank_size;
	public :
	void getdata(float p, float m, int cyl, int g, string ct, string
			wt, float ts);
	void display();
};

void Bike :: getdata(float p, float m, int cyl, int g, string ct,
		string wt, float ts)
{
	Vehicle :: getdata(p,m);
	cylinders = cyl;
	gears = g;
	cooling_type = ct;
	wheel_type = wt;
	tank_size = ts;
}

void Bike :: display()
{
	Vehicle :: display();
	cout << "Number of Cylinders = "<< cylinders <<endl;
	cout << "Number of gears = "<< gears <<endl;
	cout << "Cooling Type(air, liquid or oil) = "<< cooling_type <<endl;
	cout << "Wheel Type(alloys or spokes) = "<< wheel_type <<endl;
	cout << "Fuel tank size(in inches) = "<< tank_size <<endl;
}


class Audi : public Car
{
	string model;
	public :
	void getdata(float p, float m, float c, int w, int cc, string f, string mm);
	void display();
};

void Audi :: getdata(float p, float m, float c, int w, int cc, string
		f, string mm)
{
	Car :: getdata(p, m, c, w, cc, f);
	model = mm;
}

void Audi :: display()
{
	Car :: display();
	cout << "Model = "<< model <<endl;
}


class Ford : public Car
{
	string model1;
	public :
	void getdata(float p, float m, float c, int w, int cc, string f, string mm);
	void display();
};

void Ford :: getdata(float p, float m, float c, int w, int cc, string
		f, string mm)
{
	Car :: getdata(p, m, c, w, cc, f);
	model1 = mm;
}

void Ford :: display()
{
	Car :: display();
	cout << "Model = "<< model1 <<endl;
}

class Bajaj : public Bike
{
	string make_type;
	public :
	void getdata(float p, float m, int cyl, int g, string ct, string
			wt, float ts, string mt);
	void display();
};

void Bajaj :: getdata(float p, float m, int cyl, int g, string ct,
		string wt, float ts, string mt)
{
	Bike :: getdata(p, m, cyl, g, ct, wt, ts);
	make_type = mt;
}

void Bajaj :: display()
{
	Bike :: display();
	cout << "Type = " << make_type;
}


class TVS : public Bike
{
	string maketype;
	public :
	void getdata(float p, float m, int cyl, int g, string ct, string
			wt, float ts, string mt1);
	void display();
};

void TVS :: getdata(float p, float m, int cyl, int g, string ct,
		string wt, float ts, string mt1)
{
	Bike :: getdata(p, m, cyl, g, ct, wt, ts);


	maketype = mt1;
}

void TVS :: display()
{
	Bike :: display();
	cout << "Type = " << maketype << endl;
}


int main()
{
	Audi a1;
	Ford f1;
	TVS t1;
	Bajaj b1;
	int w, c2, cy, g, choice, num;
	float p, m, cost, ts;
	string f, ct, wt, m1, m2, mt1, mt2;
	cout << "Enter the details of Vehicle " << endl;
	cout << "Price = ";
	cin >> p;
	cout << "\nMileage = ";
	cin >> m;
	cout << "\nEnter the details of Car " << endl;
	cout << "Cost = ";
	cin >> cost;
	cout << "\nWarranty (in years)= ";
	cin >> w;
	cout << "\nCapacity = ";
	cin >> c2;
	cout << "\nFuel Type (diesel or petrol) = ";
	cin >> f;
	cout << "\nEnter the details of Bike " << endl;
	cout << "Number of Cylinders = ";
	cin >> cy;
	cout << "\nNumber of gears = ";
	cin >> g;
	cout << "\nCooling type (air/liquid/oil) = ";
	cin >> ct;
	cout << "\nWheel type (alloys/spokes) = ";
	cin >> wt;
	cout << "\nTank size (in inches) =  ";
	cin >> ts;
	cout << "\nEnter the model type-" << endl;
	cout << "Audi = ";
	cin >> m1;
	cout << "\nFord = ";
	cin >> m2;
	cout <<"\nBajaj = ";
	cin >> mt1;
	cout << "\nTVS = ";
	cin >> mt2;
	/*v.getdata(p, m);
	 *     c.getdata(cost, w, c2, f);
	 *         b.getdata(cy, g, ct, wt, ts);*/

	a1.getdata(p, m, cost, w, c2, f, m1);
	f1.getdata(p, m, cost, w, c2, f, m2);
	b1.getdata(p, m, cy, g, ct, wt, ts, mt1);
	t1.getdata(p, m, cy, g, ct, wt, ts, mt2);

again:
	cout << "\n\nTo display the details of an Audi car, Press 1" << endl;
	cout << "To display the details of a Ford car, Press 2" << endl;
	cout << "To display the details of a Bajaj bike, Press 3" << endl;
	cout << "To display the details of a TVS bike, Press 4" << endl;
	cout << "\nEnter your choice -";
	cin >> choice;

	switch(choice)
	{
		case 1 :
			a1.display();
			break;

		case 2 :
			f1.display();
			break;

		case 3 :
			b1.display();
			break;

		case 4 :
			t1.display();
			break;

		default :
			cout << "Wrong Choice" << endl;
	}

	cout << "Want to enter more choices - \nIf yes. Press 1 else Press 0- ";
	cin >> num;
	if(1 == num)
	{
		goto again;
	}
}
