#pragma once
#include "CoreMinimal.h"
#include "AttachmentComponent.h"
#include "PistolGripComponent.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UPistolGripComponent : public UAttachmentComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* PistolGripIdleAnimation;
    
    UPistolGripComponent(const FObjectInitializer& ObjectInitializer);

};

