#pragma once
#include "CoreMinimal.h"
#include "BTDecorator.h"
#include "BlackboardKeySelector.h"
#include "ValueOrBBKey_Class.h"
#include "ValueOrBBKey_Enum.h"
#include "BTDecorator_DoesPathExist.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBTDecorator_DoesPathExist : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BlackboardKeyA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BlackboardKeyB;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseSelf: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Enum PathQueryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Class FilterClass;
    
    UBTDecorator_DoesPathExist();

};

