#include <iostream>
#include <random>
using namespace std;

int n;

double randomNum()
{
	random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<double> dis(0.0, 1.0);
    return dis(gen);
}

void estimatePi()
{
	int count_point_circle=0, count_point_total=0;
	for(int i=1; i<=n; i++)
	{
		double x=randomNum(), y=randomNum();
		double dis=x*x+y*y;
		if(dis<1)
			count_point_circle++;
		count_point_total++;
	}
	cout << "In circle: " << count_point_circle << endl;
	cout << "Total: " << count_point_total << endl;
	cout << "Pi= " << 4.0*(count_point_circle)/count_point_total << endl << endl;
}

int main()
{
	while(true)
	{
		cin >> n;
		estimatePi();
	}
}