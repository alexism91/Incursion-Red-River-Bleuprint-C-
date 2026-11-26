#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "AutoRTFMTestActor.generated.h"

UCLASS(Blueprintable, NoExport)
class AAutoRTFMTestActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MyProperty;
    
    AAutoRTFMTestActor(const FObjectInitializer& ObjectInitializer);

};

