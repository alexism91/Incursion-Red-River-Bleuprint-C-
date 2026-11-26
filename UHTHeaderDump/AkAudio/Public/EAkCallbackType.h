#pragma once
#include "CoreMinimal.h"
#include "EAkCallbackType.generated.h"

UENUM(BlueprintType)
enum class EAkCallbackType : uint8 {
    EndOfEvent,
    EndOfDynamicSequenceItem,
    Marker,
    Duration,
    Starvation = 5,
    MusicPlayStarted = 7,
    MusicSyncBeat,
    MusicSyncBar,
    MusicSyncEntry,
    MusicSyncExit,
    MusicSyncGrid,
    MusicSyncUserCue,
    MusicSyncPoint,
    MIDIEvent,
    Last = 17,
};

