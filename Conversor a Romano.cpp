#include <iostream>
using namespace std;

string convertirRomano(int dec){
	string numR;
	if(dec==0){
		return numR;
	}
	if(dec>=90 && dec<=99){
		 return numR="XC"+convertirRomano(dec-90);
	}
	if(dec>=50 && dec<=89){
		 return numR="L"+convertirRomano(dec-50);
	}
	if(dec>=40 && dec<=49){
		return numR="XL"+convertirRomano(dec-40);
	}
	if(dec>=10 && dec<=39){
		return numR="X"+convertirRomano(dec-10);
	}
	if(dec==9){
		return numR="IX";
	}
	if(dec>=5 && dec<=8){
		return numR="V"+convertirRomano(dec-5);
	}
	if(dec==4){
		return numR="IV";
	}
	if(dec>=1){
		return numR="I"+convertirRomano(dec-1);
	}
}

int main() {
	while(true){
		int decimal;
		string romano;
		cout << "Ingresa un numero decimal de 1 a 99" << endl;
		cin >> decimal;
		romano = convertirRomano(decimal);
    	cout << "El numero " << decimal << "  en romano es " << romano << endl;
	}
	
}



	


