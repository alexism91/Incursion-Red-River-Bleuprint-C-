#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OdinTokenGenerator.generated.h"

class UOdinHandle;
class UOdinJsonObject;
class UOdinTokenGenerator;

UCLASS(Blueprintable)
class ODIN_API UOdinTokenGenerator : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinHandle* handle_;
    
public:
    UOdinTokenGenerator();

    UFUNCTION(BlueprintCallable)
    void GenerateRoomToken(const FString& RoomId, const FString& UserId, UOdinJsonObject*& JsonAuth, FString& token);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinTokenGenerator* ConstructTokenGenerator(UObject* WorldContextObject, const FString& accessKey);
    
};

