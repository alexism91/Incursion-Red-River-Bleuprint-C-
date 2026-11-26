#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "IRRRoomDebugActor.generated.h"

class UBillboardComponent;

UCLASS(Blueprintable, NoExport, NotPlaceable)
class IRRADVANCEDAI_API AIRRRoomDebugActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RoomId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardComponent;
    
    AIRRRoomDebugActor(const FObjectInitializer& ObjectInitializer);

};

