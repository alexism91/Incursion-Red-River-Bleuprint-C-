#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CameraVariableCollection.generated.h"

class UCameraVariableAsset;

UCLASS(Blueprintable, MinimalAPI)
class UCameraVariableCollection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCameraVariableAsset*> Variables;
    
    UCameraVariableCollection();

};

