#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MaterialExternalCodeDeclaration.h"
#include "MaterialExternalCodeCollection.generated.h"

UCLASS(Blueprintable, Config=MaterialExpressions)
class UMaterialExternalCodeCollection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialExternalCodeDeclaration> ExternalCodeDeclarations;
    
    UMaterialExternalCodeCollection();

};

