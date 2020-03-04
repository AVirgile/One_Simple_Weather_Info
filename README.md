# One_Simple_Weather_Info

This program tel you the actual weather of your current location.

## What can it do ?

By executing this program you will be asked the authorization of giving your current location based on your IP address if you do not give this permission the program will stop, but if you give it, then the program will display the actual weather of your location, from useful to less useful information.
be sure to have a connection to the internet in order to run the program without error.

## How to run it ?

Before cloning the repository be sure to install two library:

the first one is libcurl you can install it by typing this command line:

on ubuntu
```
$ sudo apt-get install libcurl-devel  
```
on fedora
```
$ sudo dnf install libcurl-devel  
```
the second library is cJSON:
follow the given instruction in https://github.com/DaveGamble/cJSON to install this library

To run this project, clone the repository using this command line:

```
$ git clone https://github.com/AVirgile/One_Simple_Weather_info.git
```
then after go to the clone repository and compile with the following command:

```
$ make
```
to execute this program type this command
```
$ ./weather
```
too clean the directory use

```
$ make fclean
```
or

```
$ make clean
```

Thank you for reanding, I hope that you will like this bye !
