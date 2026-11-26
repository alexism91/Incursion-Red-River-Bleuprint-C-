#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Kronos -ObjectName=KronosLobbyPlayerControllerBase -FallbackName=KronosLobbyPlayerControllerBase
#include "KronosEnhancedLobbyPlayerController.generated.h"

UCLASS(Blueprintable, NoExport)
class TEST_C_API AKronosEnhancedLobbyPlayerController : public AKronosLobbyPlayerControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFindCameraByTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraActorTag;
    
public:
    AKronosEnhancedLobbyPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ClientTravel();
    
};

