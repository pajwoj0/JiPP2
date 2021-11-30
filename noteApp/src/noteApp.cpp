#include <iostream>
#include <string>
#include <vector>
#include "Note.h"
#include "ListNote.h"
#include "TextNote.h"
#include "NoteDirector.h"

int main() {
    ListNote listTest;
    TextNote textTest;

    listTest.setTitle("testowa listowa notatka");
    listTest.setContent("1 linia");
    listTest.setContent("2 linia");

    listTest.getContent();

    textTest.setTitle("testowa tekstowa notatka");
    textTest.setContent("Dlugi tekst na pare linijek\n alalalalalalallallalalalal dbfdsbnfdnsb fdsfbnsdfhjvasdvjghkfvshdagjk fvghjdassdfjhdsafjhvsdafhjsda");

    textTest.getContent();

    return 0;
}