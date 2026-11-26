#pragma once
#include "CoreMinimal.h"
#include "EWwiseItemType.generated.h"

UENUM()
enum class EWwiseItemType {
    Event,
    AuxBus,
    Switch,
    State,
    GameParameter,
    DialogueEvent,
    EffectShareSet,
    Trigger,
    AcousticTexture,
    AudioDeviceShareSet,
    ActorMixer,
    Bus,
    Project,
    StandaloneWorkUnit,
    NestedWorkUnit,
    PhysicalFolder,
    Folder,
    Sound,
    SwitchContainer,
    RandomSequenceContainer,
    BlendContainer,
    MotionBus,
    StateGroup,
    SwitchGroup,
    InitBank,
    AudioNode,
    First = Event,
    Last = AudioNode,
    LastWwiseBrowserType = AudioDeviceShareSet,
    None = -1,
};

