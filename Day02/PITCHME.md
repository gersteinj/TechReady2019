#### Tech Ready 2019
# Arduino Day 2
---
# Welcome

Access today's slides and go one slide *down* from here to find links to galleries of Arduino projects. Find one that you think is interesting and we'll share in a few minutes
+++
## Galleries

* [Arduino at Hackaday](https://hackaday.com/?s=arduino)
* [Arduino at Adafruit](https://learn.adafruit.com/search?q=arduino)
* [Arduino at Hackster](https://www.hackster.io/arduino/projects)

You can also search on your own. Arduino + something you're interested in might be a good step to finding interesting projects
---
## Review

Structure of an Arduino program

+++?code=assets/src/blink.ino
@[1](Create variables here, *before* setup)
@[3-5](Setup is a special function. Never put anything in the parentheses)
@[7-12](Loop is also special. Never put anything in the parentheses)
@[4, 8-11](There are all normal functions)

+++
@snap[north-west text-left span-50]
Create a variable. For now, do this *outside* of setup and loop.
@snapend

@snap[south-east text-right span-50]
`int led = 5;`
@snapend
+++
@snap[north-west text-left span-70]
Set a digital I/O pin to be an input or output. Generally inside `setup(){}` because you don't need to repeat it
@snapend

@snap[south-east text-right span-70]
`pinMode(pin, mode);`
`pinMode(led, OUTPUT);`
`pinMode(button, INPUT);`
@snapend
+++
@snap[north-west text-left span-70]
Send a value of either full power or off to a digital pin. Acts like a light switch
@snapend

@snap[south-east text-right span-70]
`digitalWrite(pin, value);`
`digitalWrite(led, HIGH);`
`digitalWrite(led, LOW);`
@snapend
+++
@snap[north-west text-left span-70]
Send a value from 0 (off) to 255 (full power) to *special* digital pins. Acts like a dimmer switch. Compatible Arduino pins are marked with **~**
@snapend

@snap[south-east text-right span-70]
`analogWrite(pin, value);`
`analogWrite(led, 30);`
`analogWrite(led, button);`
@snapend
---
## Review

Wire up an LED to Digital Pin 3 on the Arduino. Turn it to full brightness, partial brightness, and off in a repeating pattern

Challenge yourself: Try hooking up an RGB LED (the one with 4 legs). The long leg goes to GND, and the other three legs get hooked up to digital I/O. Can you show all the colors of the rainbow?
---
# Circuits
+++?image=assets/img/Day02/highway.png&size=contain
@snap[north-west text-left]
## Voltage
@snapend

@snap[south-east text-right]
Electrical pressure pushing energy through a circuit
@snapend
+++?image=assets/img/Day02/highway.png&size=contain
@snap[north-west text-left]
## Current
@snapend

@snap[south-east text-right]
Measure of the amount of energy going through a circuit
@snapend
+++?image=assets/img/Day02/toll-highway.png&size=contain
@snap[north-west text-left]
## Resistance
@snapend

@snap[south-east text-right]
Measure of how much the circuit impedes the flow of energy
@snapend
+++
@snap[east text-right]
#### Ohm's Law
# V = I * R

+++?image=assets/img/Day02/multi-lane-highway.png&size=contain
@snap[north-west text-left]
## Voltage Divider
@snapend

@snap[south-east text-right]
Splits voltage. Used for many purposes, including checking varying resistance values
@snapend
---
## Try It

Try circuits [1B](https://learn.sparkfun.com/tutorials/sparkfun-inventors-kit-experiment-guide---v40/circuit-1b-potentiometer), [1C](https://learn.sparkfun.com/tutorials/sparkfun-inventors-kit-experiment-guide---v40/circuit-1c-photoresistor), and [1D](https://learn.sparkfun.com/tutorials/sparkfun-inventors-kit-experiment-guide---v40/circuit-1d-rgb-night-light) from the Inventor's Kit guide.
---
@snap[east text-right]
# Break
@snapend
---
## UN Sustainable Development Goals

* Let's look at the [SDGs](https://sustainabledevelopment.un.org/?menu=1300) together
* What are some problems related to these goals? How might you address those problems?
* How can we go about finding solutions?
---
## Capstone

* Group projects recommended
* Come up with 3 problems you find interesting
* Who does the problem affect? You? A friend? A few people? Lots of people? Other?
* Identify with your group what problem you most want to solve
* Does your problem tie into the SDGs? 
---
# Exit Ticket