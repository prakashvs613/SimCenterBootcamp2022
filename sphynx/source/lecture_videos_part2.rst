
Programming in C
================

Day 1: Introduction to C
------------------------

There are a number of short videos to be watched prior to attending Day 1. A pdf of the presentation used in these videos is `available here <https://github.com/NHERI-SimCenter/SimCenterBootcamp2022/blob/master/presentations/C-Day1.pdf>`_

1. Computers, Programs and Applications
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

The first video provides information about just exactly what a computer is; basically some programmable device cabable of accepting inputs (keyboard, mouse, mic, etc.), storing data in form of files (which are just a sequence of bits, i.e. 0's and 1's), running applications (files with a special designation), and providing output (display, sound, etc.). Before you play this first video you might find the following helpful: `What makes a computer a computer? <https://www.youtube.com/watch?v=mCq8-xTH7jA>`_, `Hardware & Software: <https://www.youtube.com/watch?v=xnyFYiK2rSY>`_, `Data & Binary Representation 
<https://www.youtube.com/watch?v=USCBCmwMCDA>`_, `Circuits and Logic <https://www.youtube.com/watch?v=ZoqMiFKspAA>`_

.. raw:: html

 <p><iframe width="560" height="315" src="https://www.youtube.com/embed/QJp_x0-UmTI" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe></p> 
 


Introduction to C and Compilation
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

To create binary executable files that the operating system will run on the **CPU** a programmer will use a **compiler**, which is an application that will take a human readable text file and convert it into a binary executable, the sequence of very simple set of instructions, e.g. fetch, add, multiply, compare, store, that the CPU will follow when the program runs. In this video we will be using Intel's **icc** compiler on TACC Frontera system to convert our C Programs into such an executable using every languages basic **hello world** example.

.. raw:: html

   <p><iframe width="560" height="315" src="https://www.youtube.com/embed/WhGShGIbeAA" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe></p>

C Variable Types and Variable Names
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

To make programming easier, programming languages provide programmers the ability to define and use **variables** in their programs. An example of a variable a programmer might create in a game application is foe example the users **current score**: this variable being set to 0 by the application when the user starts a game and is updated constantly as the user progresses through the game.


.. raw:: html

   <p><iframe width="560" height="315" src="https://www.youtube.com/embed/8Bew-a3G7Sg" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe></p>


C Operations, Conditionals and Loops
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

The basic building blocks in any computational algortithm involve mathematical operations, conditional loops, e.g. do something if some condition is tru otherwise something else, and loops.

.. raw:: html

   <p><iframe width="560" height="315" src="https://www.youtube.com/embed/I3FxSmnpl0M" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe></p>


C Functions
^^^^^^^^^^^

As you develop programs, there are basic algorithms that you will use over and over again, e.g. matrix-vector multiply or vector dot product. Programming languages provide constructions to define these commonly used routines that can be used repeatedly in one program or across many programs. As you develop large programs, from a development point of view, you will find it less error prone, if you break the program into manageable chunks. 

.. raw:: html
	 
   <p><iframe width="560" height="315" src="https://www.youtube.com/embed/xN5Z-KvfM0Y" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe></p>


Day 2: C Continued
------------------

There are a number of short videos to be watched prior to attending Day 2. A pdf of the presentation used in these videos is `available here <https://github.com/NHERI-SimCenter/SimCenterBootcamp2022/blob/master/presentations/C-Day2.pdf>`_

C Pointers
^^^^^^^^^^

Pointers are the most difficult concept to understand in C programs. Pointers are simply variables that contain an address. The adress is some memory location that contains the data that the pointer is said to be pointing to. Operations on the pointer allow you to update that variable that the pointer is pointing to.

.. raw:: html
	 
   <p><iframe width="560" height="315" src="https://www.youtube.com/embed/lG645grczp0" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe></p>


C Arrays and Memory Management
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Pointers most typically are used to point to the start of an array or the current location in an array. Arrays in C can be either created at compile time if the array size is known, or more typically they are dynamically allocated when the program runs. When dynamically allocated, the programmer requests from a function named malloc() that the application obtain some memory from it's available adress space.

.. raw:: html

   <p><iframe width="560" height="315" src="https://www.youtube.com/embed/w28FemBmWfQ" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe></p>


C File I/O
^^^^^^^^^^

To save the results of some computation or to read in values, the programmer must open and close files and read and write the data to these files.

.. raw:: html

   <p><iframe width="560" height="315" src="https://www.youtube.com/embed/kwoCCeDpKkI" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe></p>


C Struts, Data Structures and Abstraction
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

The C Language provides some built in data types, i.e. integer, float, double, and pointers. The power of C is that it allows users to create their own data types, e.g. node, vector, matrix, truss. 

.. raw:: html


	 
   <p><iframe width="560" height="315" src="https://www.youtube.com/embed/_ewhjB45tTc" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe></p>


Day 3: Intrpduction to C++
--------------------------

There are a number of short videos to be watched prior to attending Day 3. A pdf of the presentation used in these videos is `available here <https://github.com/NHERI-SimCenter/SimCenterBootcamp2022/blob/master/presentations/C-Day3.pdf>`_

C++ Abstraction and OOP
^^^^^^^^^^^^^^^^^^^^^^^

In previous video we saw programmer could create their own data types and pass these to functions. In OOP programmer the programmers associated both data and functions (methods), with the data types, e.g. a vector type can have a method that will provide it's dot product and methods to set and obtain the entries of the vector. Concepts such as abstraction, polymorphism, ... are common across all OOP programming languages.

.. raw:: html
	 
   <p><iframe width="560" height="315" src="https://www.youtube.com/embed/Bdmg6rcaDdg" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe></p>

C++ Language
^^^^^^^^^^^^

In this video we look at an incremental improvement to C, C++ (if you remember what the ++ operand is). We quickly look at some of the language constructs added to C++ that overcome some of the perceived limitations in C.

.. raw:: html

   <p><iframe width="560" height="315" src="https://www.youtube.com/embed/49A9nDQwASA" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe></p>

C++ Class Example
^^^^^^^^^^^^^^^^^

Now we look at the specific language features that enable OOP programming in C++.

.. raw:: html

   <p><iframe width="560" height="315" src="https://www.youtube.com/embed/a7e3sa0K5T8" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe></p>


Day 4: Parallel Programming
---------------------------

Parallel Computers and Parallel Programming
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

There are a number of short videos to be watched prior to attending Day 3. A pdf of the presentation used in these videos is `available here <https://github.com/NHERI-SimCenter/SimCenterBootcamp2022/blob/master/presentations/Parallel.pdf>`_

**Frontera** is one of the fastest High Performance Computers in the world. It's high performance comes from the fact that it has many **CPU**nodes, each with many **cores**. To take advantage of such a powerful system, actually to take advantage of even your own local desktop system, you will need to create **parallel** programs.

.. raw:: html

   <p><iframe width="560" height="315" src="https://www.youtube.com/embed/WvfpAZMI01E" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe></p>


Parallel Programming With MPI
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

This video is a very bried introduction to programming with the Message Passing INterface, **MPI**.

.. raw:: html

   <p><iframe width="560" height="315" src="https://www.youtube.com/embed/209rMQcKizc" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe></p>

Parallel Programming With OpenMP
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

This video is a very bried introduction to programming with the **OpenMP**, a library for creating shared-memory applications.

.. raw:: html

   <p><iframe width="560" height="315" src="https://www.youtube.com/embed/APzanKquS-Y" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe></p>

Day 5: Tapis
------------

Intoduction to Tapis
^^^^^^^^^^^^^^^^^^^^

There are a number of short videos to be watched prior to attending Day 3. A pdf of the presentation used in these videos is `available here <https://github.com/NHERI-SimCenter/SimCenterBootcamp2022/blob/master/presentations/Agave2.pdf>`_

.. raw:: html
	 
   <p><iframe width="560" height="315" src="https://www.youtube.com/embed/vNFbzG4t1bI" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe></p>


Tapis Systems
^^^^^^^^^^^^^

.. raw:: html
	 
   <p><iframe width="560" height="315" src="https://www.youtube.com/embed/TddwsA5MY_I" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe></p>


Tapis Files
^^^^^^^^^^^


.. raw:: html
	 
   <p><iframe width="560" height="315" src="https://www.youtube.com/embed/eh7Etvuvo7E" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe></p>
   

Tapis Apps
^^^^^^^^^^

.. raw:: html
	 
   <p><iframe width="560" height="315" src="https://www.youtube.com/embed/f2-Qg6sMsQM" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe></p>

Tapis Jobs
^^^^^^^^^^

.. raw:: html
	 
   <p><iframe width="560" height="315" src="https://www.youtube.com/embed/HDo5QzwOjTc" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe></p>
   
