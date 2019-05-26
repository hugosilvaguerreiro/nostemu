# Nostemu
Nostemu is a c++ gameboy (or chip-8) emulator, for now ... this emulator emerged by mixing the need for a personal project with nostalgia.



# Project Structure

### bin 
The output executables go here, both for the app and for any tests and spikes.
### build 
This folder contains all object files, and is removed on a clean.
### doc
 Any notes, like my assembly notes and configuration files, are here. I decided to create the development and production config files in here instead of in a separate config folder as they “document” the configuration.
### include
 All project header files. All necessary third-party header files that do not exist under /usr/local/include are also placed here.
### lib 
Any libs that get compiled by the project, third party or any needed in development. Prior to deployment, third party libraries get moved to /usr/local/lib where they belong, leaving the project clean enough to compile on our Linux deployment servers. I really use this to test different library versions than the standard.
### sandbox
Test stuff out. Maybe sometimes its good to keep some of the garbage around.
### src
 The application and only the application’s source files.