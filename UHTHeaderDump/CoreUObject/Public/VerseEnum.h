#pragma once
#include "CoreMinimal.h"
#include "EVerseEnumFlags.h"
#include "Enum.h"
#include "VerseEnum.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UVerseEnum : public UEnum {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EVerseEnumFlags VerseEnumFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUtf8String QualifiedName;
    
    UVerseEnum();

};

