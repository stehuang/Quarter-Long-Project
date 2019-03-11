



## PIC 10C Final Project: Documentation
#### Stella Huang

***
     
### 02/07/19, Week 5 Thursday
Went to my TA's office hours on Thursday to come up with ideas;

We discussed about 2 types of games:

1. static games 
    + games that do not require frequent updates on the display; board games like checkers/chess fall into this category.
    + advantage: can write logic first, print to console, then implement graphics
2. dynamic games
    + games that require one to frequently update the display
    + will have to implement graphics and code simultaneously

### 02/08/19, Week 5 Friday
Went to Prof Salazar's office hours today

* I have decided to implement Flappy Bird in C++
* The logic will not be difficult, but it'll require me to develop graphics at the same time
* This will require documenting my progress, implementing new features, and what I've learned


### 02/09/19, Week 5 Saturday
* Created "Bird.h" that creates the bird
    + created a simple declaration of the class (few functions & private members)
* I have a Game.cpp/Game.h file created too but it has yet been uploaded


### 02/14/19, Week 6 Thursday
Went to Andrew(TA)'s office hours today

* Learned that it is best to develop in Qt Creator than in Xcode then link the files
* Can structure the code in two ways
	+ logical/ui classes: separate commands from graphic displays in files, but link with functions/features
	+ incorporate graphics displays (i.e. Qt objects) in class definitions
ALSO
* I am using this [Snake Game](https://github.com/MeLikeyCode/SnakeGameMovementElongationDemo) tutorial/code on github as a reference for building the game and connecting files


### 02/15/19, Week 6 Friday
In the PIC lab at this moment

Notes from today:
* QGraphicsViews provides a widget for displaying contents of a QGraphics scene
	+ that's why you include both classes when creating the game window
* Games contain a "Game.cpp/Game.h" that runs the entire game
	+ sets scene (function that I have used)
	+ creates window to display scene
	+ handles the logical side of things
	+ brings all objects together

Updates on Project:
* I have successfully created the game window!
* Created a Game and Bird class at this moment
	+ need to implement an obstacles class


### 02/22/19, Week 7 Friday
Notes from today:
* The QGraphics class is a partially pure virtual class
	+ it has functions like "KeyPress event" but need to be redefined in a game/graphics program
	+ thus, we need to redefined such functions
* There is a hierarchy for QGraphics items; there are multiple classes beneath QGraphics with sub-classes of their own
	+ QGraphicsRectItem is a sub-sub class

Updates on Project:
* Tried to draw the object (i.e. the bird) in the frame by initially declaring it as a QGraphicsRectItem
* Couldn't display it
	+ The output says there is a linkage error- something about the vtable being missing
	+ I have read on stack overflow that it is typically because pure virtual functions haven't been refined in your derived class
	+ Implemented a destructor for the bird class; still couldn't work
* I'll try to make it to office hours on Tuesday



### 02/26/19, Week 8 Tuesday
I went to Andrew's office hours this afternoon

Notes from today:
* Good programming practice tip: figure out when an item should be stored as a private variable
* Debug by slowing replacing variables in working code

Updates on Project:
* I figured out how to display the bird on the main window
* Debugged with Andrew by first writing simple code to display a rectange in the main.cpp, having all the code in one place first
	+ replaced the GraphicsView item with a Game item(i.e. inherits from GraphicsView) to display the scene
	+ added in my bird item; ran the program and it returned no errors, so this class has no errors
* The trick was to **declare my scene from QGraphicsScene as a private variable in the Game class and initializing the size too**
	+ this ensure that it wasn't a temporary variable and could be accessed via various functions, esp crucial when needing to display the scene


### 03/04/19, Week 9 Monday

Notes from today:
* QTimer vs QTime
	+ QTimer is used more as a time
	+ QTime is used more for converting time between different units
* QTimer functions
	+ timeout(): function that *signals* that time is up; commonly used in connect() as the signal
	+ stop(): stops timing
	+ setInterval(x): sets countdown time for timer

Updates on Project:
* I am trying to implement the gravity feature in the game
* There are two steps to doing this:
	+ implement gravity() function that decreases bird's position on the screen
	+ create timer that calls gravity every second or so
* I have successfully implemented the gravity function, just need to implement the timer & connect it with the function


### 03/06/19, Week 9 Wednesday

Talked to Prof Salazar after class about connect()

Notes from today:
* connect should be performed on QObject items and is a function that belongs to QObject items
* if many objects in the game depend on the timer, it's better to create the QTimer object in the main.cpp/Game world

Updates on Project:
* I was unable to connect the timer with the bird's gravity function
	+ error says the "connect()" function couldn't be found
	+ Bird is from a class that inherits from QObject, so I'm kinda of confused
* Might work on creating the obstacles and their basic functions first, then proceed to work on connecting everything together


### 03/10/19, Week 9 Sunday


Notes from today:
* QGraphicsItem DOES NOT inherit from QObject
* To use signals & slots, an object must inherit from QObject
* A class can inherit from multiple classes in Qt
* QTimer::singleshot() sets a timer & connects to a slot **without** needing to create a QTimer object
* Proper memory management


Updates on Project:
* I got the timer working by using QTimer::singleshot() and making the Bird additionally inherit from QObject & adding the "Q_OBJECT" macro
* Implementing functions for the character and players should be easy
* Need to focus on integrating such items into the Game world and letting it orchestrate the game
* I have create a vector to pointers to Pipe objects to store pipes
	+ this will help with managing multiple pipes in the game
	+ will use for loop for moving pipes
	+ will use foor loop for memory management
* Wrote a proper deconstructor for the Game world because it utilizes pointers











