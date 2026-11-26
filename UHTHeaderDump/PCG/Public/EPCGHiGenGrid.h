#pragma once
#include "CoreMinimal.h"
#include "EPCGHiGenGrid.generated.h"

UENUM()
enum class EPCGHiGenGrid : uint32 {
    Uninitialized,
    Grid4 = 4,
    Grid8 = 8,
    Grid16 = 16,
    Grid32 = 32,
    Grid64 = 64,
    Grid128 = 128,
    Grid256 = 256,
    Grid512 = 512,
    Grid1024 = 1024,
    Grid2048 = 2048,
    Grid4096 = 4096,
    Grid8192 = 8192,
    Grid16384 = 16384,
    Grid32768 = 32768,
    Grid65536 = 65536,
    Grid131072 = 131072,
    Grid262144 = 262144,
    Grid524288 = 524288,
    Grid1048576 = 1048576,
    Grid2097152 = 2097152,
    Grid4194304 = 4194304,
    GridMin = Grid4,
    GridMax = Grid4194304,
    Unbounded = 2147483648,
};

