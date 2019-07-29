#### Tech Ready 2019
# Arduino Day 5
---
# Review
---
## Concepts

* General syntax
* Conditional Statements
* Pulldown/pullup resistors
---
# Conditional Statements
+++
@snap[east text-right]
## IF something is true
### do some action
@snapend
+++
```
if (sensVal > 512) {
    digitalWrite(ledPin, HIGH);
}
```
---
@snap[east text-right]
## IF something is true
### do some action
## OTHERWISE
### do something else
@snapend
+++
```
if (sensVal > 512) {
    digitalWrite(ledPin, HIGH);
}
else {
    digitalWrite(ledPin, LOW);
}
```
---
@snap[east text-right]
## IF something is true
### do some action
## OTHERWISE IF something is true
### do some action
## OTHERWISE
### do something else
@snapend
+++
```
if (sensVal > 512) {
    digitalWrite(ledPin, HIGH);
} else if (sensVal > 100) {
    analogWrite(ledPin, 100);
} else {
    digitalWrite(ledPin, LOW);
}
```
---
# Loops
+++
@snap[east text-right]
## WHILE something is true
#### do something
@snapend
+++
@snap[east text-right]
## WHILE you are hungry
#### take a bit of your food
@snapend
+++
@snap[east text-right]
## WHILE you have homework remaining
#### do your homework
@snapend
+++
@snap[east text-right]
## WHILE sensor reads at least 500
#### light LED
@snapend
+++
```
while (sensVal >= 500) {
    digitalWrite(led, HIGH);
    sensVal = analogRead(sensPin);
}
```