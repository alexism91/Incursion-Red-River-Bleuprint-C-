#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ObjectTreeGraphObject.h"
#include "ObjectTreeGraphComment.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UObjectTreeGraphComment : public UObject, public IObjectTreeGraphObject {
    GENERATED_BODY()
public:
    UObjectTreeGraphComment();


    // Fix for true pure virtual functions not being implemented
};

