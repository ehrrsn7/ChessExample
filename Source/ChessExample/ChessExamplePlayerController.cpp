// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChessExamplePlayerController.h"

AChessExamplePlayerController::AChessExamplePlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
