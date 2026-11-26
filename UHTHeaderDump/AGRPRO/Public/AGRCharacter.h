#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
#include "AGRCharacter.generated.h"

class UAGRAnimMasterComponent;

UCLASS(Abstract, Blueprintable, NoExport)
class AGRPRO_API AAGRCharacter : public ACharacter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAGRAnimMasterComponent* AGRAnimMasterComponent;
    
public:
    AAGRCharacter(const FObjectInitializer& ObjectInitializer);

};

