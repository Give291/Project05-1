#include "MyActor1.h"


AMyActor1::AMyActor1()
{
 	
	PrimaryActorTick.bCanEverTick = true;

}


void AMyActor1::BeginPlay()
{
	Super::BeginPlay();
	move();
	UE_LOG(LogTemp, Error, TEXT("totlaenvet : %d"), evCnt);
	
}


void AMyActor1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float AMyActor1::distance(FVector2D first, FVector2D second)
{
	float dx = first.X - second.X;
	float dy = first.Y - second.Y;
	return FMath::Sqrt(dx * dx + dy * dy);
}

void AMyActor1::move()
{ 
	int32 x = 0;
	int32 y = 0;

	UE_LOG(LogTemp, Error, TEXT("step 0 : X = %d, Y = %d"), x, y);
	for (int32 i = 1; i <= 10; i++)
	{
		int32 precX = x;
		int32 precY = y;

		x += step();
		y += step();

		float dis = distance(FVector2D(precX, precY), FVector2D(x, y));
		totDist += dis;

		UE_LOG(LogTemp, Warning,
			TEXT("Step %2d : X = %d, Y = %d -> X = %d, Y = %d | distance : %0.2f "), i, precX, precY, x, y, dis);

		if (creatEvent() == 1) 
		{
			UE_LOG(LogTemp, Warning, TEXT("********** Event Occured **********"));
		}
	}
	UE_LOG(LogTemp, Error, TEXT("Totdist : %0.2f"), totDist);

}

int32 AMyActor1::step()
{
	return FMath::RandRange(0, 1);
}

int32 AMyActor1::creatEvent()
{
	int32 event = FMath::RandRange(0, 1);

	if (event == 1)
	{
		++evCnt;
		return 1;
	}

	return 0;
}
