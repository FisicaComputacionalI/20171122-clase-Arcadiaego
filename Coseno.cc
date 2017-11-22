# include <iostream>
# include <cmath>

using namespace std;
# define pi 3.14159265358979323846
int main(){
	cout<<"Introduce el ángulo ";
		double angulo;
		cin>>angulo;
		double coseno = cos(angulo*(pi/180));
		cout<<"El coseno de "<<angulo<<" es "<<coseno<<endl;
		return 0;
}
