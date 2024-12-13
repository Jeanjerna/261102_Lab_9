#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    
    double initial , rate , pay ;
    
    
	cout << "Enter initial loan: ";
	cin >> initial;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
    
    double PrevBalance , Interest , Total , Payment , NewBalance;
    
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	
	int i = 1;
	
	while (true)
	{
	    
	    if (i == 1) PrevBalance = initial;
	    else PrevBalance = NewBalance;
	    
	    Interest = PrevBalance * rate / 100.0;
	    
	    Total = PrevBalance + Interest;
	    
	    if (Total >= pay) Payment = pay;
	    else Payment = Total;
	    
	    NewBalance = Total - Payment;
	    
//---------------------------------------------------//	    
    	cout << fixed << setprecision(2); 
    	cout << setw(13) << left << i; 
    	cout << setw(13) << left << PrevBalance;
    	cout << setw(13) << left << Interest;
    	cout << setw(13) << left << Total;
    	cout << setw(13) << left << Payment;
    	cout << setw(13) << left << NewBalance;
//---------------------------------------------------//	
    
    	if (NewBalance == 0) break;
    	
//---------------------------------------------------//	
    	cout << "\n";	
    	i++;
	
	}
	
	return 0;
}