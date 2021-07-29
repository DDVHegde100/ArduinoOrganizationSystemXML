```sql
SELECT * FROM Cusotmers;
FROM *table_name*;
#This is assuming you have a data table with table_name assigned
SELECT DISTINCT Country FROM Customers;
FROM(SELECT DISTINCT Country FROM Customers);
WHERE condition;
WHERE Country='Mexico'
#This is to establish and locate on a table.
WHERE NOT *condition*;
#You can combine multiple conditions with operators like: and, or, not.
WHERE Country='Germany' AND (City='Berlin' OR City='India')
```

```r
#The plot() function is used to draw a graph

plot(1, 3)
plot(c(1,8), c(3,10))

x <- c(1,2,3,4,5)
y <- c(3,7,8,9,12)

plot(x,y)

#Instead of specific points, we can also plot ratios.

plot(1:10)
plot(1:10, type="1")
plot(1:10, main="My Graph", xlab="The x-axis", ylab="The y axis")

//We can even chnage the size and shape of the plotted points

plot(1:10, pch=25, cex=2)

#You can easily also plot a line, rather than ponts

plot(1:10, type="1", lwd=2)

line1 <- c(1,2,3,4,5,10)
line2 <- c(2,5,7,8,9,10)

plot(line1, type="1", col="blue")
plot( line2, type="1", col="red")

#You can also use particular pie charts with specific percentages

x <- c(10,20,30,40)
pie(x)
```

```java
//In JAVA OOP we can use many modifiers to modify specific parts of the program

public class Main{
final int x=10
final double PI=3.14
}

public static void main(String[] args){
		Main myObj = new Main();
		myObj.x=50
		myObj.PI=25
		System.out.println(myObj.x)
}

public class Main{
static void myStaticMethod(){
System.out.println("Static Methods can be called without creating objects. ")
}

public void myPublicMethod(){
	System.out.println("Puyblic methods must be called by creating objects.")
}

public static void main(String[] args){
	myStaticMethod();

Main myObj=new Main();
myObj.myPublicMethod()
}
}

public String fname="John"
public int age=24
public abstract void study();

class Student extends Main{
	public int graduationYear=2018;
  public void study(){
	System.out.println("Studying all day long")
}
}

class Second{
public static void main(String[] args){
	Student myObj=new Student()

System.out.println("Name:" myObj.fname)
System.out.println("Age:"+myObj.age)
System.out.println("Graduation Year:"+myObj.graduationYear)
myObj.study()
}
}
```

```sql
//We can use the insert() to insert new statements

INSERT INTO tabel_name (column1, column2, column3, ...)
VALUES (value1, value2, value3)

INSERT INTO table_name
VALUES (value1, value2, value3, ...)

INSERT INTO Customers(CustomerName, COntactName, Address, City, PostalCode, Country)
VALUES ('Cardinal', 'Tom B. Erichsen', 'Skagen 21', 'Stavanger', '4006', 'Norway')

SELECT column_names
FROM table_name
WHERE column_name IS NULL;

//You can use IS NULL and IS NOT NULL to specify
```

```xml
<?xml version="1.0" enconding="UTF-8"?>
<breakfast_menu>

<food>
<name>Watermelon</name>
<price>$2.50</price>
<description>Watermelons are refrigerated and really flavorful</description>
<calories>300</calories>
</food>

<food>
<name>Apples</name>
<price>$1.50</price>
<description>These red galla apples are really flavorful and 10% larger than normal</description>
<calories>100</calories>
</food>
```

```python
#We can easily import from a module

def greeting(name):
	print("Herllo, " + name)

person1={
"name":"John",
"age":36,
"country": "Norway"
}

improt datetime
x=datetime.datetime.now()

print(x.year)
print(x.stfrtime("%A"))

import datetime
x=datetime.datetime(2020,5,17)
print(x)

#In Python we can use a Package Manager, knwon as PIP

import camelcase
c=camelcalse.CamelCase()
txt="hello world"
print(x.hump(txt))

#We can use try() to generate an exception

try:
print(x)
except NameError:
print("Variable x is not defined")
except:
print("Something else went wrong")

try:
f=open("demofile.txt")
f.write("Lorem Ipsum")

except:
print("There has been an error")
finally:
f.close()
```

```csharp
//We can use C# in Objec-Oriented Programming in order to simplify it and work on projects with it.

//One a such example of this is setting a color or specific properties to an object.

class Car{
string color="red";

static void Main(string[] aregs){
car myObj= new Car();
Console.WriteLine(myObj.color)
	}
}

class Car{
string color="red"
static void Main(string[] args){
Car myObj1=new Car()
Car myObj2=new Car()
Console.WriteLine(myObj1.color)
Console.WriteLine(myObj2.color)
}
}

//In a car game we will be able to declare functions and specific variables for the car sprites, known as Class Members

class MyClass{
string color="red"
int maxSpeed=300
public void Main(string[] args){
Conosle.WriteLine("The car is going 300 mph!")
}
}
//We can also add specific fields for the object. Then we can set a value and see their output in the program.

class Car{
string color="red"
	static void Main(string[] args){
			Car myObj=new Car()
			Console.WriteLine(myObj.color)
			Console.WriteLine(myObj.maxSpeed)
		}
}
//we can also add certain object Object Methods for the components in the Program.

class Car{
string color;
int maxSpeed;
public void fullThrottle(){
		Console.WriteLine("The car is going as fast as it can!")
	}
		static void Main(string[] args){
		Car myObj=new Car()
		myObj.fullThrottle()
	}
}
```

```cpp
int time=22;
if(time<10){
		cout << "Good Morning";
} else if(time<20){
		cout<<"Good Day"
} else {
		cout << "Good Evening"
}

int time=20
string result =(time<18)?"Good Day.": "Good evening";
cout << result;

switch(expression){
case x:
break;
case y:
break;
default:
//code block
}

int day=2
switch(day){
case 1:
cout <<"Monday"
break;
case 2:
cout<<"Tuesday"
break;
case 3:
cout<<"Wednesday"
break;
}

int i=0
while(i<5){
cout << i << "/n"
i++
}
```

```r
#This is in R. This is making Vectors of specific strings

fruits <- c("banana", "apple", "orange")
numbers <- c(1,2,3)
numbers <- 1:10

number1 <- 1.5:6.5
numbers1

numbers2 <- 1.5:6.3
numbers2

#There is also a way to easioly change an Item
fruits <- c("banana", "apple", "orange", "mango", "lemon")
fruits[1] <- "pear"
fruits
#The final line prints out the Output of the String Vector

thislist <- list("apple", "banana", "cherry")
append(thislist, "orange")
```

```csharp
for(int -=0; i<10;i++){
if(i==4){
break;
}
Console.WriteLine(i);
}

//The Contunue statement breaks one itermation and continues with naother
for(int i=0; i<10; i++){
if(i==4){
continue
}
Console.Writeline(i)
}

//Break and continue can both be used in the same for loop.
int i=0;
whle(i<10){
Console.WriteLine(i);
i++
if(i==4){break}
}

//You can also create an array in the C# language

string[] cars;
string[] cars={"Volvo", "BMW", "Ford", "Mazda"}
int[] myNum={10,20,30,40}

string[] cars={"Volvo", "BMW", "Ford", "Mazda"}
Console.WriteLine(cars[0])

string[ cars={"Volvo", "BNW", "Ford", "Mazda"}
cars[0]="Opel"
Console.WriteLine(cars[0])
//It now changed it's output to Opel because it was rearranged to be #0

```

```r
my_age <- 14
my_name<- Dhruv
#Those are some primary data types in R
 x<- 10.5
 class(x)
x<- 1000L
 class(x)

x<- 9i+3
class(x)

x<- "R is exciting"
class(x)

x<- TRUE
class(x)

				#These are some numeric values and numbers

			x<- 10.5
			y<- 55

class(x)
class(y)
 x <- 3+5i
 y <- 5i

x
y

class(x)
class(y)
```

```csharp
class Car{
	string color="red";
	int maxSped=200;
	
static void Main(string[] args){
	Car Ford=new Car();
	Ford.model="Mustang";
	Ford.color="red";
	Ford.year=1969;

 Car myObj=new Car();
 Console.WriteLine(myObj.color)
 Console.WriteLine(myObj.maxSpeed)
}
}

int time=20;
if(time<18){
Console.WriteLine("Good Day.")
}
else{
Console.WriteLine("Good Evening.")
}

//Right now it would output Goood Evening, due to the amount.
```

```java
if(30>43){
System.out.println("If this prints, then the program is broken")
} else{
System.out.println("30 isn't more than 43. The program works.")
}

//We can also use the switch statement to sleect a specific code block.

switch(expression){
case x:
//Input code block here
break;
case y:
//Input code block here
break;
case z:
//Input code block here
break;
default:
//Another code block here
}

//Switch is evauluated once, in the expression
//Cases are the value of different expressions
//Break and Default are optional code

int month=1
switch(month){
case 1:
    System.out.println("January");
    break;
  case 2:
    System.out.println("February");
    break;
  case 3:
    System.out.println("March");
    break;
}

//This program outputs January
```

```csharp
//A Method is a block of cod tat runs only when called to be executed, which we can declare

class Program{
static void MyMethod(){
//code to be executd as the Method
}
}

static void AMethod(){
Console.WriteLine)("This is a Method!")
}
static void Main(string[] args){
MyMethod()
}

static void MultipleMethod(){
Console.WriteLine("Repeating Methods!")
}

static void Main(string[], args){
MultipleMethod();
MultipleMethod();
MultipleMethod();
}

//We need to declare Method Parameters, which is information that can act as variables.

statis void MyMethod(string fname){
	Console.WriteLine(fname+"Refsnes")
}

staic void Main(string[] args){
MyMethod("Liam")
MyMethod("Jenny")
MyMethod("Liam")
}

// Liam Refsnes
// Jenny Refsnes
// Anja Refsnes
//Those will be the outputs of the program.

static void CountryMethod(string country){
Console.WriteLine("I was born in "+country)
}

static void Main(string[], args){
CountryMethod("India")
CountryMethod("China")
CountryMethod("Japan")
}

//We can us void to not return a given value and return to return it.

static int MyMethod(int x){
return 5+x
}
static void Main(string[] args){
Console.WriteLine(MyMethopd(3))
}

```

```php
//You can make a PHPp Script using it's iconic tag
<?php
//PHP code goes here; To be executed
?>

//PHP can be incorporated into HTML using the basic commands

<!DOCTYPE html>
<html>
<body>
<h1>
A PHP Page
</h1>

<?php
echo "First Page in PHP!"
?>
</body>
</html>

//None of the main syntax and operators are case-sensative
<!DOCTYPE html>
<html>
<body>
 <?php
ECHO "hello!"
echo "hello!"
eChO "hello!"
//All of the above can have the same output
?>
</body>
</html>

<!DOCTYPE html>
<html>
<body>
 <?php
//There can be gaps in code using comments
//When you need to decalre a PHP Variable, you use $
$x=5
$txt="Hello World"
$y=10.5
echo $x
?>
</body>
</html>

<!DOCTYPE html>
<html>
<body>
 <?php
$x=5
function myTest(){
 echo "<p> Variable X inside function is: $x</p>"
}
myTest();
echo "<p> Variable X outside function is: $x</p>"
?>
</body>
</html>

```

```java
public class Main{
public static void main(String[] args){
		System.out.println("Hello World");
		String name = "John"
		int myNum = 15;
		boolean IsDhruvSmart = true;
		float shortenedPi = 3.1415926535;
		char FirstName1 = 'D';
		String firstName = "Dhruv"
		String secondName = "Hegde" 
		String fullName = firstName + secondName;
	}
}
```

```c
void setup(){
	Serial.Begin(9600)
	
}
void loop(){
	
	
}
```

```r
#We can set specific Arrays and specify their dimensions

thisarray <-(1:24)
thisarray

multiarray <- array(thisarray, dim=c(4,3,2))
multiarray

multiarray <- array(thisarray, dim=c(4,3,2))
multiarray[,c(1),1]
```

```sql
SELECT*FROM Customers;
SELECT column1, column2
FROM table_name

SELECT CustomerName, City FROM Customers;
SELECT Count(*) AS DistinctCountries
FROM(SELECT DISTINCT Country FROM Customers);

SELECT*FROM Customers
WHERE Country='Mexico';

SELECT*FROM Customers
WHERE CustomerID=1

SELECT column1, column2
FROM table_name
ORDER BY column1,column2
```

```arduino
//This is an Arduino Wireless Weather Station
//I will impliment this into my room in order to have easy access to current weather outside.
/*
  This is the format code, which I will edit in order to impliment into the design.

Libraries:
NRF24L01 - TMRh20/RF24, https://github.com/tmrh20/RF24/
DHT22 - DHTlib, https://github.com/RobTillaart/Arduino/tree/master/libraries/DHTlib
LowPower - https://github.com/rocketscream/Low-Power 
*/
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#include <dht.h>
#include <LowPower.h>

#define dataPin 8 // DHT22 data pin
dht DHT; // Creates a DHT object

RF24 radio(10, 9); // CE, CSN
const byte address[6] = "00001";

char thChar[32] = "";
String thString = "";

void setup() {
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();

}
void loop() {
  int readData = DHT.read22(dataPin); // Reads the data from the sensor
  int t = DHT.temperature; // Gets the values of the temperature
  int h = DHT.humidity; // Gets the values of the humidity
  thString = String(t) + String(h);
  thString.toCharArray(thChar, 12);
  // Sent the data wirelessly to the indoor unit
  for (int i = 0; i <= 3; i++) {           // Send the data 3 times
    radio.write(&thChar, sizeof(thChar));
    delay(50);
  }
  // Sleep for 2 minutes, 15*8 = 120s
  for (int sleepCounter = 15; sleepCounter > 0; sleepCounter--)
  {
    LowPower.powerDown(SLEEP_8S, ADC_OFF, BOD_OFF);
  }
}
//This is for transmiting and using the code.
```

```kotlin
**fun main(args : Array<String>) {
    println("Hello, World!")
		println("A /n B /n C")
// my first Kotlin program
fun main(args : Array<String>) {
    // declaring a name variable
    var name = "Amy"
    println(name)
}
}
fun main(args: Array<String>) {
    var a = readLine()!!.toInt()
    var b = readLine()!!.toInt()
    println(a+b)
}

fun main(args: Array<String>) {
	val num = -7

    if (num > 0) {
        println("Positive")
    }
    else if (num < 0) {
        println("Negative")
    }
    else {
        println("Zero")
    }
}**
```

```java
class MyClass{
public system void main(String[] args){
Sustem.out.println("Hello World")
	}
}
//The above allows to make and develop text
String name="David"
int age=42
double score=19.6
char group='D'

String name2="Dhruv"
int myAge=14
double date=3.14.2021
char letter="D"
//Yeah, it is Pi Day when I am programming this.

//Taking UserInput

import java.util.Scanner;
class MyClass{
	public static void main(String[ ] args) {
		Scanner myVar=new Scanner(System.in)
	  System.out.println(myVar.nextLine())
}
}
//The Above provides and allows for a User to input custom Text
```

```python
import json
x={ 
#Python Dictionary
"name": "John",
"age": 30,
"city": "New York"
}

#Convert into JSON format
y=json.dumps(x)
print(y)

print(jump.dumps({"name": "John", "age":"30"}))
print(jump.dumps({"apple", "banana"}))
print(jump.dumps({"hello"}))

#This is made to take in User Inputs
username=input("Enter your Username:")
print("Confirmed! Your Username is" + username)
#It will take a supposed username input and output the Username too.

```

```html
<html>
<body>
<h1> Hellow Web Pages</h1>
<p>The time is @DateTime.Now</p>
</body>
</html>

<!DOCTYPE html>
<html lang="en"><head>
<meta charset="utf-8"/>
<title>Web Pages Demo</title>
</head>
<body>
<h1>
Hello Web Pages
</h1>
<p>
The time is @DateTime.now
</p>
</body>
</html>

//ASP-> Active Server Pages
//It includezs Razor Syntax, which starts with @
<html>
<body>
@RenderPage("header.cshtml")
<h1>Hello Web Pages</h1>
<p>This is a paragraph</p>
@RenderPage("footer.cshtml")
</body>
</html>

```

```python
def myfunc():
x=300
print(x)
myfunc()

def myfunc():
		x=300
			def myinnerfunc():
		print(x)
	myinnerfunc()
myfunc()
#We can see that it is a Local Scope and is only accessed within the function. If we make it outside the function, iot is a global scope.

#This is for establishing a Module and Re-naming a Module

import mymodule as mx
a=mx.person1["age"]
print(a

#This is for Importing a Built-In Module

import platform
x=platform.system()
print(x)

#This is the official code for a Tic-tac-Toe Game. Official Project

theBoard={'7': ' ' , '8': ' ' , '9': ' ' ,
          '4': ' ' , '5': ' ' , '6': ' ' ,
          '1': ' ' , '2': ' ' , '3': ' ' }

#This is the PrintBoard() Function
def printBoard(baord):
print(board['7']+'|'+board['8']+'|'+board['9'])
print('-+-+-')
print(board['4']+'|'+board['5']+'|'+board['6'])
print('-+-+-')
print(board['1']+'|'+board['2']+'|'+board['3'])
print('-+-+-')
# We established all this to print and display the Board

#This is for establsihing the main game
def game():

turn='X'
count=0

for i in range(10):
	printBoard(theBoard)
	print("It's your turn," + turn + ".Move Where?")
	move=input()
	if thebaord[move]=='':
theBoard[move]=turn
count +=1
else:
print("That place is already taken!.\nMove to which place")
continue

#he Next code is all established for the moves and for the player and robot to play
if count >= 5:
            if theBoard['7'] == theBoard['8'] == theBoard['9'] != ' ': # across the top
                printBoard(theBoard)
                print("\nGame Over.\n")                
                print(" **** " +turn + " won. ****")                
                break
            elif theBoard['4'] == theBoard['5'] == theBoard['6'] != ' ': # across the middle
                printBoard(theBoard)
                print("\nGame Over.\n")                
                print(" **** " +turn + " won. ****")
                break
            elif theBoard['1'] == theBoard['2'] == theBoard['3'] != ' ': # across the bottom
                printBoard(theBoard)
                print("\nGame Over.\n")                
                print(" **** " +turn + " won. ****")
                break
            elif theBoard['1'] == theBoard['4'] == theBoard['7'] != ' ': # down the left side
                printBoard(theBoard)
                print("\nGame Over.\n")                
                print(" **** " +turn + " won. ****")
                break
            elif theBoard['2'] == theBoard['5'] == theBoard['8'] != ' ': # down the middle
                printBoard(theBoard)
                print("\nGame Over.\n")                
                print(" **** " +turn + " won. ****")
                break
            elif theBoard['3'] == theBoard['6'] == theBoard['9'] != ' ': # down the right side
                printBoard(theBoard)
                print("\nGame Over.\n")                
                print(" **** " +turn + " won. ****")
                break 
            elif theBoard['7'] == theBoard['5'] == theBoard['3'] != ' ': # diagonal
                printBoard(theBoard)
                print("\nGame Over.\n")                
                print(" **** " +turn + " won. ****")
                break
            elif theBoard['1'] == theBoard['5'] == theBoard['9'] != ' ': # diagonal
                printBoard(theBoard)
                print("\nGame Over.\n")                
                print(" **** " +turn + " won. ****")
                break 

        # If neither X nor O wins and the board is full, we'll declare the result as 'tie'.
        if count == 9:
            print("\nGame Over.\n")                
            print("It's a Tie!!")

        # Now we have to change the player after every move.
        if turn =='X':
            turn = 'O'
        else:
            turn = 'X'        
    
    # Now we will ask if player wants to restart the game or not.
    restart = input("Do want to play Again?(y/n)")
    if restart == "y" or restart == "Y":  
        for key in board_keys:
            theBoard[key] = " "

        game()

if __name__ == "__main__":
    game()
```

```arduino
//This code is all for an Arduino Code that develops a Memory Game.

const int button1=2;
const int button2=3;
const int button3=4;
const int button4=5;

const int led1=7
const int led2=8
const int led3=9
const int led4=10

const int buzzer=12
const int tones[] = {1900,1600,1300,1000,3200};
int buttonState[]={0,0,0,0};

int lastButtonState[]={0,0,0,0}
//The last state of the button
int buttonCounter[]={0,0,0,0}
//The values can be binary values
int gameOn=0;
//A new game starting from level 0
int wait=0;
//Waiting for the user to add input
int currentLevel=1;
//This is the current level
int dlay=500
//This is the amount of time before adding a button press
int ledTime=500;
//The amount of time that an LED can stay on.
int n_lvels=10;
//The amount of levels until the game is won.
int pin AndTone=0;
// The Variable to determine which LED and Tone that correspond
int correct=0;
//This must become 1 to go to the next level, due to binary.
int speedFactor=5;
//This is the speed that the game operates at.
int ledDelay=200;

void playTone(int tone, int duration){
	for(long i=0; i<duration+1000L; i+= tone*2){
	digitalWrite(buzzer,HIGH)
	delayMicroseconds(tone)
  digitalWrite(buzzer, LOW)
	delayMicroseconds(tone)
}
}

void setup(){
randomSeed(analogRead(0))
}
pinMode(button1, INPUT)
pinMode(button2, INPUT)
pinMode(button3, INPUT)
pinMode(button4, INPUT)

pinMode(led1, OUTPUT)
pinMode(led2, OUTPUT)
pinMode(led3, OUTPUT)
pinMode(led4, OUTPUT)
pinMode(buzzer, OUTPUT)

//This is the program for the Gaming and Objects
void loop(){
int n_array[n_levels]
int u_array[n_levels]
int i:
if(gameOn==0){
	for(i=0; i<n_levels; i=i+1){
n_array[i]=0
u_array[i]=0
n_array[i]=random(0,4)
	}
gameOn=1
		}
	}

if (wait==0){
delay(200);
i=0;
for(i=0; i<currentLevel; i=i+1){
ledDelay=ledTime/(1+(spedFactor/n_levels))*currentLevel-1
pinAndTone=n_array[i]
digitalWrite(pinAndTone+7, HIGH);
playTone(tones[pinAndTone], ledDelay);
digitalWrite(pinAndTone+7, LOW)
delay(100/speedFactor)
}
wait=1;
}
i=0;
int buttonChange=0;
int j=0;
while(j<currentLevel){
while(buttonChange===0){
for(i=0; i<4; i=1+i)
buttonState[1]=digitalRead(i+2)
buttonChange += buttonState[i]
}
}

for (i=0;i<4; i=i+1){
	if(buttonState[i]==HIGH){
digitalWrite(i+7, HIGH)
playTone(tones[i], ledTime);
digitalWrite(i+7, LOW)
wait=0;
u_array[j]=i
butonState[i]
buttonChnage=0;
}
}

//This is to evaluate the overall Gameplay
if(u_array[j]===n_array[j]){
	j++
correct=1
}
else{
correct=0;
i=4;
j=currentLevel
wait=0
}
if(correct==0){
	delay(300)
i=0;
gameOn=0;
currentLevel=1;
 for(i=0; i<4; i=i+1){
digitalWrite(i+7, HIGH)
}
playone(tones[4], ledTime);
for(i=0; i<4; i=i+1){
digitalWrite(i+7, LOW)
}
delay(200)
for(i=0; i<4; i=i+1){
digitalWrite(i+7, HIGH)
}
playTone(tones[4], ledTime)
for(i=0;i<4; i=i+1){
digitalWrite(i=7, LOW)
}
delay(500)
gameOn=0
}
if(correct==1){
currentLevel++
wait=0
}
if(currentLevel==n_levels){
delay(500)
int notes[]={2,2,2,2,0,1,2,1,2}
int note=0;
int tempi[]={200,200,200,400,400,400,200,200,600}
int breaks[]={100,100,100,200,200,200,300,100,200}

for(i=0; i<9; i=i+1){
note=notes[i]
digitalWrite(note+7, HIGH)
playTone(tone[notes], tempo[i])
digitalWrite(note+7, LOW)
delay(breaks[i])
}
gameOn=0;
currentLevel=1
n_levels=n_levels+2
speedFactor+=1
}
```

```python
#You can use the format() method to format strings
price= 90
txt="The price is {} dollars!? That is too expensive!"
print(txt.format(price))

quantity=2
item="chocolate"
price=2
myorder="I want {} pieces of {} for {:.2f} dollars please."
print(myorder.format(quantity,item,price))

#these are PyModules
import module4
module4.greeting("Dhruv")
```

```java
//We need to create a Method in Java
public class Main{
static void myMethod(){
  //Code for Execution
	System.out.println("I just got Executed!")
}
public static void main(Strings[] args){
		myMethod();
		myMethod();
		myMethod();
	  myMethod();
	}
}

//We can add a common last name to different first names
public class Main{
static void myMethod(){
  //Code for Execution
	System.out.println(fname+"Refsnes")
}
public static void main(Strings[] args){
		myMethod("Liam");
		myMethod("William");
		myMethod("Jenny");
	  myMethod("Anja");
	}
}
```

```sql
SELECT *column1*, *column2*
FROM table_name
WHERE condition

SELECT * FROM Customers
WHERE Country='Mexico'

SELECT*FROM Customers
WHERE CustomerID=1;
 
```

```csharp
using System;
//C# is used to build mobile apps and games.
namespace HelloWorld{
	class Program{
		static void Main(string[] args){
			int myAge = 13;
			double pi5 = 3.1415;
			char myLetter = 'D';
			bool myBool = true;
			string name = "Dhruv";
				Console.WriteLine(name)
				Console.WriteLine(myAge)
				Console.WriteLine(pi5)
				Console.WriteLine(myLetter)
				Console.WriteLine(myBool)
				Console.WriteLine("Hello World!")
				Console.WriteLine("I will print on a new line.")
		}
	}
}
```

![https://s3-us-west-2.amazonaws.com/secure.notion-static.com/e732a111-34a9-4515-9d72-ea6f073e0267/Untitled.png](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/e732a111-34a9-4515-9d72-ea6f073e0267/Untitled.png)

```csharp
string greeting = "Hello";
string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
Console.WriteLine("The length of the txt string is: " + txt.length)

string firstName = "John"
string lastName = "Doe"
string name = firstName + lastName
Console.WriteLine(name);

string name = $"My full name is : {firstName}{lastName}"
Console.WriteLine(name);

string myString = "Hello!";
Console.WriteLine(myString[0]); // "H"
Console.WriteLine(myString[1]); // "e"

Console.WriteLine(10===15);

if(condition){
 //Command
}

if(20 > 18){
	Console.WriteLine("20 is greaer than 18")
}

int x=20;
int y=18;
if(x>y){
	Console.WriteLine("x is 2 more than y ")
}
```

```csharp
//TypeCastingwith Data Types in C#
int myInt=9;
double myDouble=myInt;
int myInt = 10;
double myDouble = 5.25;
bool myBool = true;

Console.WriteLine(Convert.ToString(myInt));    // convert int to string
Console.WriteLine(Convert.ToDouble(myInt));    // convert int to double
Console.WriteLine(Convert.ToInt32(myDouble));  // convert double to int
Console.WriteLine(Convert.ToString(myBool));   // convert bool to string
Console.WriteLine(myInt);
Console.SwrtileLine(myDouble)

using System;
	namespace MyApplication{
		class Program{
			static void Main(string[] args)
Console.WriteLine("Enter your age:")
int age=ConvertToInt32(Console.ReadLine());
Console.WriteLine("Your age is:" + age)
		}
	}
}

Math.Max(5,10)
Math.Min(5,10)
Math.Sqrt(64);
Math.Abs(-4.567)
Math.Round(9.99)

string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
Console.WriteLine("The length of the txt string is: " + txt.Length);
```

```python
fruits=["apple","banana","cherry"]

for x in fruits:
	print(x)

for x in "Dhruv":
	print(x)

fruits=["apple","banana","cherry"]

for x in fruits:
	print(x)
if x=="banana":
	break

for x in range(10):
	print(x)

for x in range(2,6)
	print(x)

#Next up is creating official functions ->
def ford_stocks():
		print("$11.45")
def gm_stocks():
		print("$53.6")
def myElectronics(iPad, iPhone, iPod)
	print("My favorite electronic is" + iPhone)
#fname means first name and it is passing 1 single arguement
#lambda yay! Next up is lambda argyements: small anonymous function

lambda arguements: expression

x=lambda a: a+10
print(x(5))

x=lambda a, b, c: (a*b)%c
print(x(9,6,7))

#That above simulation displayed 5, which is correct!
# Next is combining functions with lambda

def mathCool(n)
return lambda a: ((a+n)%a)*n
```

```python
#Local Scope
def myFunc():
 x=300
print(x)
myinnerFunc()

myFunc()

def cool():
golbal x
x=200

cool()
print(x)
```

```python
#Python Chatbot
pip install chatterbot
pip install chatterbot_corpus
pip install --upgrade chatterbot_corpus
pip install --upgrade chatterbot

from chatterbot import ChatBot
from chatterbot.trainers import ListTrainer

my_ot=ChatBot(name='PyBot', read_only=True, logic_adapters
['chatterbot.logic.MathematicalEvaluation', 'chatterbot.logic.BestMath'])

small_talk=[
'Hello, How may I help?',
'What is your name??',
'I am the Pybot!',
'Are you awesome?'
>>>print(my_bot.get_response("hi"))
Hello! How are you?
>>>print(my_bot.get_response("goodzzzxxxxx"))
Nice to hear!

```