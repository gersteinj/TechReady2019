# Welcome
+++
@snap[north span-100]
## Introductions
@snapend

* Jackie Gerstein
* Technology teacher
* Tinkerer/hacker
* I build and race homemade electric go karts
* Who are you?
+++
@snap[north span-100]
## Expectations
@snapend

* Be supportive and respectful of everyone here
* Clean up your work space
* Challenge yourself every day
* If you need to use the restroom, let me know
---
# What we'll be doing
+++
@snap[north span-100]
## Daily
@snapend

* Non-computer activity
* Learn about coding and electronics
* Discuss connections to [UNSDGs](https://www.un.org/development/desa/disabilities/envision2030.html)
* Work towards capstone project
+++
@snap[north span-100]
## Week 1
@snapend

* Background knowledge for Arduino
* Start planning capstone project
* Mentor meeting
+++
@snap[north span-100]
## Week 2
@snapend

* Continue building Arduino skills
* Breakout sessions for additional skills
* Work on capstone project
* Mentor meeting
* Present capstone
---
@snap[north span-100]
## Maker Mindset
@snapend

* Challenge yourself
* Learn from your mistakes
* Remember that you can shape your own world
---?survey=https://docs.google.com/forms/d/e/1FAIpQLSdhMRsbCyKeCVT7SU2JXZ3pZU89SK3aXN-3IaaTvlKdZpYpbQ/viewform?usp=sf_link
---
## Computational
# Thinking
+++
@snap[north span-100]
## Step 1
@snapend

Choose a simple activity, such as<br>placing an object in a specified location

+++
@snap[north span-100]
## Step 2
@snapend

Write out clear directions for this activity.<br>Put your name on them!

+++
@snap[north span-100]
## Step 3
@snapend

I will collect and redistribute your directions
+++
@snap[north span-100]
## Step 4
@snapend

Take turns with your partner, following each other's directions as literally as possible, but be safe.

---
@snap[north span-100]
## Review
@snapend

<br>
* Did your partner do what you intended?
* Did your partner have to make any decisions? How?
* Did your partner use any external information, such as the location of chairs?
* How could your directions have been written more effectively?
* Did your partner affect their environment at all?
* Did other people affect your partner's ability to carry out the task?
---
@snap[north span-100]
## Coding
@snapend

<br>
@ul[list-spaced-bullets](false)
* A precise, repeatable set of directions for a computer to follow
* Programming languages are more precise than human languages
* Many languages exist, but core concepts are the same for all
@ulend
---
# Arduino
+++
@snap[north span-100]
## The Language
@snapend

@ul[list-spaced-bullets](false)
* Very human-friendly
* *Compiles* to C++
* Many built-in *functions* for working with hardware
@ulend

+++
@snap[north span-100]
## The Hardware
@snapend

<br>
@ul[list-spaced-bullets](false)
* *Microcontroller* with additional electronics to make it easy to use
* Many variants exist - we'll look at some tomorrow
* Designed to make it easy to control *inputs* and *outputs*
@ulend
---
@snap[north span-100]
# Blink!
@snapend

Blink is the "Hello World" of Arduino<br>- it's nearly everybody's first program
+++?image=assets/img/Day01/blinkcircuit.PNG&size=contain
+++?image=assets/img/Day01/blinkcircuit.PNG&opacity=100&position=bottom&size=auto 50%
@snap[north span-100]
## Troubleshooting
<br>
@ul[text-08](false)
- Long leg of LED is on the left
- Resistor is orange-orange-brown-gold
- Make sure you didn't mix up your wires
@ulend
@snapend
+++
@snap[north-west span-100 h3-blue]
### Arduino IDE
@snapend

@snap[west span-40]
@ul[list-square-bullets](false)
- Compile
- Upload
- New
- Open
- Save
@ulend
@snapend

@snap[south-east span-65]
![](assets\img\Day01\arduinoIDE.PNG)
@snapend
+++
@snap[north span-100]
Save and upload to your Arduino. What happens?
@snapend

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
}
```
+++
Is it behaving as you'd expect? Why/why not?
+++

@snap[west span-30]
The Arduino can turn things on and off faster than we can see, so we need to delay
@snapend

@snap[east span-65]
@code[cpp zoom-07](assets/src/day01/on-off.cpp)
@snapend

---

@code[cpp](assets/src/day01/on-off.cpp)

@[1, 4, 6, 10, 12, 14, 16, 18]
@[5-8,zoom-15]
@[11-20,zoom-14]
@[2,zoom-20]
@[7,zoom-20]
@[13,17,zoom-20]
@[15,19,zoom-20]

---
@snap[north span-100]
## Hack it!
@snapend

Try making modifications.<br><br>Can you add another LED? Change the way it blinks? Send a message in Morse code?
---
@snap[west span-28 h3-blue]
### Multiple<br>LEDs
@snapend

@snap[east span-66]
@code[cpp zoom-12](assets/src/day01/multi-leds.cpp)
@snapend
