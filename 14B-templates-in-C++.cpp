/*
In C++, the template system was designed to simplify the process of 
creating functions (or classes) that are able to work with different data types.

Instead of manually creating a bunch of mostly-identical functions or classes 
(one for each set of different types), we instead create a single template. 

Just like a normal definition, a template describes what a function or class looks like. 
Unlike a normal definition (where all types must be specified), in a template we can use 
one or more placeholder types. 

A placeholder type represents some type that is not known at the time the template is written, but that will be provided later.

Once a template is defined, the compiler can use the template to generate as many overloaded functions (or classes) as needed, each using different actual types!
*/
