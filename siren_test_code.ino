/* Toy Siren Test Code, By LeRoy Miller (C) 2017
 *  
 *  This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses
 */


#define yelp 2
#define engine 3
#define siren 4
#define fires 5 //wire broken N/C

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(yelp, OUTPUT);
pinMode(engine, OUTPUT);
pinMode(siren, OUTPUT);
pinMode(fires, OUTPUT);

digitalWrite(yelp, LOW);
digitalWrite(engine, LOW);
digitalWrite(siren, LOW);
digitalWrite(fires, LOW);

delay(3000);
Serial.println("Yelp!");
digitalWrite(yelp, HIGH);
delay(50);
digitalWrite(yelp, LOW);
delay(20000);
Serial.println("Engine!");
digitalWrite(engine, HIGH);
delay(50);
digitalWrite(engine, LOW);
delay(20000);
Serial.println("Siren!");
digitalWrite(siren, HIGH);
delay(50);
digitalWrite(siren, LOW);
delay(20000);
Serial.println("Fire Siren!");
digitalWrite(fires, HIGH);
delay(50);
digitalWrite(fires, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:

}
