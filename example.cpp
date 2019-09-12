/*
    Copyright (c) 2019 UAlbertaBiomed Exoskeleton. All rights reserved.
 
    This software may be modified and distributed
    under the terms of the BSD 3-Clause license.
    Refer to the LICENSE file for details.
 
    Author: Cyrus Diego
    Created on: September, 2019

    This file shows a simple Arduino code to highlight important features
*/

#include <Arduino.h>

// global variable
int x;

/*
    run thru initial setup for arduino
*/
void setup() {

    // initialize serial object to allow for serial communication between arduino and computer 
    Serial.begin(9600);

    x = 0; 

    // This will print to the terminal 
    Serial.println("Finished setup");
}

/*
    continuously runs while the arduino is turned on
*/
void loop() {
    x++;

    // continuously prints the value of x
    Serial.println(x);
}
/*
    this is a multi - line comment.
*/
int main() {
    // this is a single - line comment 

    init();  // this comes from the Arduino library (not defined in this file)
    setup();  // calls the setup function 

    // infinte loop will continuously run the loop() function
    while(true) {
        loop();  
    }

    return 0;
}
