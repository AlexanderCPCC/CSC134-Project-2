#include <iostream>
#include <iomanip>

using namespace std; 

int main()
{
	int res = 0;// resolution
	double multiplier = 0;// resolution multipliers
	int numCompt = 0;// computer amount
	int spGC = 0;// graphics card
	int spPr = 0;// processor speed
	int crPr = 0;// processor cores
	int perSc = 0;// performance score 
	int quality = 0;
	int resolutionString; double multipler;
	double lowestPerm = 0;
	
	{
		cout << "How many computers are being processed?"; 
		cin >> numCompt;
		
		while(numCompt < 1)
		
		cout << "\nComputer Hardware Graphics Quality Recommendation Tool \n";
		cout << "Please enter the clock speed (in Megahertz) of your graphics card: "; 
		cin >> spGC;
		
		while(spGC < 800 || res > 2000)
		{
			cout << "Invalid graphics card speed entered. Program will terminate.";
			return 0;
		}
		
		cout << "Please enter the clock speed (in Megahertz) of your processor: "; 
		cin >> spPr;
		
		while(spPr < 1000 || res > 5500)
		{
			cout << "Invalid processor speed entered. Program will terminate.";
			return 0;
		}
		
		cout << "Please enter the number of cores of your processor: "; 
		cin >> crPr; 
		
		while(crPr < 1 || res > 16)
		{
			cout << "Invalid processor cores entered. Program will terminate.";
			return 0;
		}
		
		cout << "\n What is the resolution of your monitor? \n";
		cout << "1. 1280 x 720 \n";
		cout << "2. 1920 x 1080 \n";
		cout << "3. 2560 x 1440 \n";
		cout << "4. 3840 x 2160 \n";
			
		cout << "\nPlease select from the options above: "; 
		cin >> res;
		
		while(res < 1 || res > 4)
		{
			cout << "Invalid selection. Please pick a valid option from the menu: "; 
			cin >> res; 
		}
		
		switch(res)
		{
			case 1: // 1280 x 720
				multiplier = 1;
				resolutionString = "1280 x 720";
				break;
			case 2: // 1920 x 1080 
				multipler = 0.75;
				resolutionString = "1920 x 1080";
				break;
			case 3: // 2560 x 1440
				multiplier = 0.55;
				resolutionString = "2560 x 1440";
				break;
			case 4: // 3840 x 2160
				multiplier = 0.35;
				resolutionString = "3840 x 2160";
				break;
			default:
				cout << "Invalid resolution. Program will close.";
				;return 0;
				break;
		}
		
		perSc = ((5 * spGC)) + (crPr * spPr) * multiplier;
		
		if(perSc > 17000)
		{
			quality = "Ultra";
		}
		else if(perSc > 15000 and perSc <= 17000)
		{
			quality = "High";
		}
		else if(perSc > 13000 and perSc <= 15000)
		{
			quality = "Medium";
		}
		else if(perSc > 11000 and perSc <= 13000)
		{
			quality = "Low";
		}
		else
		{
			quality = "Unable to Play";
		}
		
		cout << end1 << end1 << title << end1 << end1;
		cout << setprecision(2) << showpoint << fixed;
		cout << "GPU Clock Speed: \n" << spGC << "MHz" << end1;
		
		cout << "CPU Clock Speed: \n" << spPr << "Mhz" << end1;
		
		cout << "Number of cores: \n" << crPr << end1; 
		
		cout << "Monitor Resolution \n" << quality << end1;
		
		cout << "Your performance score is: \n" << perSc << end1;
		
		cout << "Recommended Graphics Quality: " << quality << end1;
	}
	
}

