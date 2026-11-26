#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "NavigationToolSerializedTree.h"
#include "NavigationToolViewSaveState.h"
#include "NavigationToolSaveState.generated.h"

USTRUCT(BlueprintType)
struct FNavigationToolSaveState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FNavigationToolSerializedTree SerializedTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FColor> ItemColorMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavigationToolViewSaveState> ToolViewSaveStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ContextPath;
    
    MOVIESCENE_API FNavigationToolSaveState();
};

