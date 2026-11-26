#include "MovieGraphSetStartEndConsoleCommandsNode.h"
#include "MovieGraphStartEndConsoleCommands.h"

UMovieGraphSetStartEndConsoleCommandsNode::UMovieGraphSetStartEndConsoleCommandsNode() {
    this->bOverride_ConsoleCommands = true;
    this->ConsoleCommands = CreateDefaultSubobject<UMovieGraphStartEndConsoleCommands>(TEXT("Console Commands"));
}


