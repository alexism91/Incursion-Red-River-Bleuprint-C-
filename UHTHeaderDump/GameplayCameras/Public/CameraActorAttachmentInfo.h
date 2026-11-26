#pragma once
#include "CoreMinimal.h"
#include "CameraActorAttachmentInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FCameraActorAttachmentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Weight;
    
    GAMEPLAYCAMERAS_API FCameraActorAttachmentInfo();
};

