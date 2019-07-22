# Welcome
+++
## Introductions

* Jackie Gerstein
* Technology teacher
* Tinkerer/hacker
* I build and race homemade electric go karts
* Who are you?
+++
## Expectations

* Be supportive and respectful of everyone here
* Clean up your work space
* Challenge yourself every day
* If you need to use the restroom, let me know
---
# What we'll be doing
+++
## Daily
* Non-computer activity
* Learn about coding and electronics
* Discuss connections to [UNSDGs](https://www.un.org/development/desa/disabilities/envision2030.html)
* Work towards capstone project
+++
## Week 1:
* Background knowledge for Arduino
* Start planning capstone project
* Mentor meeting
+++
## Week 2:
* Continue building Arduino skills
* Breakout sessions for additional skills
* Work on capstone project
* Mentor meeting
* Present capstone
---
## Maker Mindset

* Challenge yourself
* Learn from your mistakes
* Remember that you can shape your own world
---?survey=https://docs.google.com/forms/d/e/1FAIpQLSdhMRsbCyKeCVT7SU2JXZ3pZU89SK3aXN-3IaaTvlKdZpYpbQ/viewform?usp=sf_link
---
# Computational Thinking
+++
## Step 1

Choose a simple activity, such as placing an object in a specified location

+++
## Step 2

Write out clear directions for this activity. Put your name on them!

+++
## Step 3

I will collect and redistribute your directions
+++
## Step 4

Take turns with your partner, following each other's directions as literally as possible, but be safe.

---
## Review

* Did your partner do what you intended?
* Did your partner have to make any decisions? How?
* Did your partner use any external information, such as the location of chairs?
* How could your directions have been written more effectively?
* Did your partner affect their environment at all?
* Did other people affect your partner's ability to carry out the task?
---
## Coding

* A precise, repeatable set of directions for a computer to follow
* Programming languages are more precise than human languages
* Many languages exist, but core concepts are the same for all
---
# Arduino
+++
## The Language

* Very human-friendly
* *Compiles* to C++
* Many built-in *functions* for working with hardware

+++
## The Hardware

* *Microcontroller* with additional electronics to make it easy to use
* Many variants exist
* Designed to make it easy to control *inputs* and *outputs*
---
# Blink!

Blink is the "Hello World" of Arduino - it's nearly everybody's first program
+++?image=assets/img/Day01/blinkcircuit.PNG&size=contain
+++?image=assets/img/Day01/blinkcircuit.PNG&opacity=30&size=contain
@snap[north-west text-left]
## Troubleshooting
@snapend
@snap[west text-left span-50]
<ul>
<li>Long leg of LED is on the left</li>
<li> Resistor is orange-orange-brown-gold</li>
<li> Make sure you didn't mix up your wires</li>
</ul>
@snapend
+++
@snap[west text-left span-40]
## Arduino IDE
<ul>
    <li>Compile</li>
    <li>Upload</li>
    <li>New</li>
    <li>Open</li>
    <li>Save</li>
</ul>
@snapend

@snap[east span-60]
![](assets\img\Day01\arduinoIDE.PNG)
@snapend
+++
Save and upload to your Arduino. What happens?
```
// Declare and initialize a variable
const int ledPin = 13;

// Everything between {} will run once when the Arduino starts
void setup(){
  // Set ledPin (which is 13) to be an OUTPUT
  pinMode(ledPin, OUTPUT);
}

// Everything betwen {} will run in a loop
void loop(){
  // Tell ledPin to turn on at full voltage
  digitalWrite(ledPin, HIGH);
}
```
+++
How do you think we could make the LED turn off? Try adding a line to do it
+++
```
// Declare and initialize a variable
const int ledPin = 13;

// Everything between {} will run once when the Arduino starts
void setup(){
  // Set ledPin (which is 13) to be an OUTPUT
  pinMode(ledPin, OUTPUT);
}

// Everything betwen {} will run in a loop
void loop(){
  // Tell ledPin to turn on at full voltage
  digitalWrite(ledPin, HIGH);
  // Tell ledPin to turn off/go to ground
  digitalWrite(ledPin, LOW);
```
+++
Is it behaving as you'd expect? Why/why not?
+++
The Arduino can turn things on and off faster than we can see, so we need to delay

```
// Declare and initialize a variable
const int ledPin = 13;

// Everything between {} will run once when the Arduino starts
void setup(){
  // Set ledPin (which is 13) to be an OUTPUT
  pinMode(ledPin, OUTPUT);
}

// Everything betwen {} will run in a loop
void loop(){
  // Tell ledPin to turn on at full voltage
  digitalWrite(ledPin, HIGH);
  // wait 500 ms (half a second)
  delay(500);
  // Tell ledPin to turn off/go to ground
  digitalWrite(ledPin, LOW);
  // wait 500 ms (half a second)
  delay(500);
```
---
## Hack it!

Try making modifications. Can you add another LED? Change the way it blinks? Send a message in Morse code?