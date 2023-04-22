# Coding Lab #5

This is a just a work project for class purpose, made in March 2023 - Every copyright of this code remains to me - and must not be plagiarize

Can contact me on sid.14boys@yahoo.fr

Sidney

## Lab instruction

-> Design a simplified Art Gallery management system
-> identify the relevant types of real-world entities;
-> for each entity type, identify the list of relevant attributes and the list of data operations (or methods/functions)
-> for each attribute, identify its suitable datatype
-> for each method, describe its algorithm
-> Implement the above system in C++ using
-> C++ classes with separate files
-> use a few common functions such as std::sort() and std:count_if() included in the <algorithm> library
-> earn to pass a free-standing function to the above functions as a parameter or use a lambda function if you feel courageous

## Lab design

Type 1. Artwork -> class Artwork

Relevant properties:
ID; //unique ID
type; // which can be one of the following {painting, photography, drawing, sculpture, other}
style; //which can be one of the following {fineArt, abstract, modern, popArt, other}
subject; // which can be one of the following {nature, portrait, animal, cartoon, other}
Width in inches
Height in inches
Depth in inches
year; //year in which the artwork was made
artistID; //the ID of the artist who created this artwork.
price

Relevant data operations:
set the initial values of an artwork's properties -> constructors
retrieve an individual property -> accessors
revise an individual property -> mutators
