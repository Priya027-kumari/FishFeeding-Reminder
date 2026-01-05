#include <iostream>
using namespace std;


bool isFishingSuitable(float waterTemperature, int lightIntensity)
{
    // Threshold values (assumed)
    const float MIN_TEMP = 20.0;   
    const float MAX_TEMP = 30.0;   
    const int MIN_LIGHT = 300;     

    
    if (waterTemperature >= MIN_TEMP &&
        waterTemperature <= MAX_TEMP &&
        lightIntensity >= MIN_LIGHT)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    float waterTemperature;
    int lightIntensity;

    cout << "Smart Fishing Reminder System\n";
    cout << "-----------------------------\n";

    
    cout << "Enter water temperature (in Celsius): ";
    cin >> waterTemperature;

    cout << "Enter light intensity value: ";
    cin >> lightIntensity;

    
    bool result = isFishingSuitable(waterTemperature, lightIntensity);

  
    if (result)
    {
        cout << "Result: Good time for fishing.\n";
    }
    else
    {
        cout << "Result: Not a suitable time for fishing.\n";
    }

    return 0;
}
