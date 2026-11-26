#pragma once
#include "CoreMinimal.h"
#include "KronosLobbyPlayerControllerBase.h"
#include "KronosLobbyPlayerController.generated.h"

UCLASS(Blueprintable, NoExport)
class KRONOS_API AKronosLobbyPlayerController : public AKronosLobbyPlayerControllerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFindCameraByTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraActorTag;
    
    AKronosLobbyPlayerController(const FObjectInitializer& ObjectInitializer);

};

