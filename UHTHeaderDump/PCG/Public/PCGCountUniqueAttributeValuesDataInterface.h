#pragma once
#include "CoreMinimal.h"
#include "PCGComputeDataInterface.h"
#include "PCGCountUniqueAttributeValuesDataInterface.generated.h"

UCLASS(Blueprintable)
class UPCGCountUniqueAttributeValuesDataInterface : public UPCGComputeDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttributeToCountName;
    
    UPCGCountUniqueAttributeValuesDataInterface();

};

