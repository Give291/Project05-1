#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor1.generated.h"

UCLASS()
class PROJECT05_API AMyActor1 : public AActor
{
	GENERATED_BODY()
	int32 evCnt = 0;
	float totDist = 0;
	
public:	
	
	AMyActor1();

protected:
	
	virtual void BeginPlay() override;

public:	
	
	virtual void Tick(float DeltaTime) override;
	float distance(FVector2D first, FVector2D second);
	void move();
	int32 step();
	int32 creatEvent();


};
