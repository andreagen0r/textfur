// General Deps
#include "changelog.h"

void changelog(Interface *parent){
//    CLEAR SCREEN HERE
    parent->addText("Changelog");
    parent->addText("- before 30/12 - Added game start, character room, explore event, acess to random encounters");
    parent->addText("- 30/12 - Added in-game provisory changelog, access to friends (cat, rabbit, lizard, otter), enemy encounters(griphon, hyena, komodo, shark, satyr, hydra, human, snake, spider, dragon); added beginning of cat storyline");
    parent->addText("- 25/02/2021 - Ported from C# to C++/Qt, corrected language");
    parent->addText("What's to come: partial cat storyline (whose code is already done, just needs to be written), bedroom effects, access to other rooms of the house");
//    WAIT FOR INPUT HERE

    // After finished, return to gamestart.cpp

};
