#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include "Commands/Command.h"
#include "Subsystems/Drive/MecanumDriveSubsystem.h"
#include "Subsystems/GameMech/ShooterSubsystem.h"
#include "Subsystems/GameMech/SweeperSubsystem.h"
#include "Subsystems/Drive/GyroSubsystem.h"
#include "OI.h"

/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.examplesubsystem
 */
class CommandBase: public Command {
public:
	CommandBase(const char *name);
	CommandBase();
	static void init();
	// Create a single static instance of all of your subsystems
	static MecanumDriveSubsystem* mecanumDrive;
	static SweeperSubsystem* sweeper;
	static ShooterSubsystem* shooter;
	
	static GyroSubsystem* gyro;
	static OI *oi;
	
};

#endif
