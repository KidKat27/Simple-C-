#include <iostream>

/*Initializing the functions*/
double toCelcius(double tempreature);
double toFarenheit(double temperature);
double toCelciusK(double temperature);
double toKelvin(double temperature);

main(){
    double temperature;
    char unit;
    std::cout << "Enter the temprature and its unit F for farenheit or C for celsius or K for kelvin \n";
    std::cin >> temperature;
    std::cin >> unit;
    switch (unit)
    {
    case 'c':
    case 'C':
         std::cout << "It is\n" << temperature << "C\n" <<  toFarenheit(temperature) << "F\n" << toKelvin(temperature) << "K\n";
        break;
    
    case 'f':
    case 'F':
        std::cout << "It is\n" << toCelcius(temperature) << "C\n" << temperature << "F\n" << toKelvin(toCelcius(temperature)) << "K\n";
        break;

    case 'k':
    case 'K':
        std::cout << "it is\n" << toCelciusK(temperature) << "C\n" << toFarenheit(toCelciusK(temperature)) << "F\n" << temperature << "K\n";
        break;

    default:
        std::cout << "Please use a correct unit\n";
        break;
    }

    return 0;
}

/*Function to convert temperature from farenheit to celcius*/
double toCelcius(double temperature){
    double c;
    c = (temperature - 32)*(double (5)/ double (9));
    return c;
}

/*Function to convert temperature from celcius to farenheit*/
double toFarenheit(double temperature){
    double f;
    f = (temperature + 32)*(double (9)/ double (5));
    return f;
}

/*Function to convert temperature from kelvin to celcius*/
double toCelciusK(double temperature){
    double ck;
    ck = (temperature - 273);
    return ck;
}

/*Function to convert temperature from celcius to kelvin*/
double toKelvin(double temperature){
    double k;
    k = (temperature + 273);
    return k;
}