#include "AkDynamicSequencePlaylist.h"

UAkDynamicSequencePlaylist::UAkDynamicSequencePlaylist() {
    this->PlayingID = 0;
}

void UAkDynamicSequencePlaylist::OverwriteAndCommit(TArray<UAkDynamicSequencePlaylistItem*> InItems) {
}

void UAkDynamicSequencePlaylist::CommitWithoutChanges() {
}

void UAkDynamicSequencePlaylist::Commit() {
}

void UAkDynamicSequencePlaylist::AddAndCommit(UAkDynamicSequencePlaylistItem* Item) {
}


