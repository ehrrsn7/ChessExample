// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChessExampleGameMode.h"
#include "ChessExamplePlayerController.h"
#include "ChessExamplePawn.h"

AChessExampleGameMode::AChessExampleGameMode()
{
	// no pawn by default
	DefaultPawnClass = AChessExamplePawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = AChessExamplePlayerController::StaticClass();
}
